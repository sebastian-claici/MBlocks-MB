/* Copyright (c) 2013 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/**@file
 *
 * @defgroup ble_stack_handler_types Types definitions for BLE support in SoftDevice handler.
 * @{
 * @ingroup  softdevice_handler
 * @brief    This file contains the declarations of types required for BLE stack support. These
 *           types will be defined when the preprocessor define BLE_STACK_SUPPORT_REQD is defined.
 */

#ifndef BLE_STACK_HANDLER_TYPES_H__
#define BLE_STACK_HANDLER_TYPES_H__

#ifdef BLE_STACK_SUPPORT_REQD

#include <stdlib.h>
#include "ble.h"
#include "nrf_sdm.h"
#include "app_error.h"
#include "app_scheduler.h"
#include "app_util.h"

#define BLE_STACK_EVT_MSG_BUF_SIZE       (sizeof(ble_evt_t) + (GATT_MTU_SIZE_DEFAULT))     /**< Size of BLE event message buffer. This will be provided to the SoftDevice while fetching an event. */
#define BLE_STACK_HANDLER_SCHED_EVT_SIZE 0                                                 /**< The size of the scheduler event used by SoftDevice handler when passing BLE events using the @ref app_scheduler. */

/**@brief Application stack event handler type. */
typedef void (*ble_evt_handler_t) (ble_evt_t * p_ble_evt);

/**@brief     Function for registering for BLE events.
 *
 * @details   The application should use this function to register for receiving BLE events from
 *            the SoftDevice. If the application does not call this function, then any BLE event
 *            that may be generated by the SoftDevice will NOT be fetched. Once the application has
 *            registered for the events, it is not possible to cancel the registration.
 *            However, it is possible to register a different function for handling the events at
 *            any point of time.
 *
 * @param[in] ble_evt_handler Function to be called for each received BLE event.
 *
 * @retval    NRF_SUCCESS     Successful registration.
 * @retval    NRF_ERROR_NULL  Null pointer provided as input.
 */
uint32_t softdevice_ble_evt_handler_set(ble_evt_handler_t ble_evt_handler);

#else

#define BLE_STACK_EVT_MSG_BUF_SIZE        0                                                /**< Since the BLE stack support is not required, this is equated to 0, so that the @ref softdevice_handler.h can compute the internal event buffer size without having to care for BLE events.*/
#define BLE_STACK_HANDLER_SCHED_EVT_SIZE  0

#endif // BLE_STACK_SUPPORT_REQD

#endif // BLE_STACK_HANDLER_TYPES_H__

/** @} */
