/*
 * mpu6050.h
 *
 *  Created on: Mar 27, 2014
 *      Author: kwgilpin
 */

#ifndef MPU6050_H_
#define MPU6050_H_

#include <stdint.h>
#include <stdbool.h>

#define MPU6050_AUX_VDDIO_ADDR				0X00
#define MPU6050_YG_OFFS_TC_ADDR				0X01
#define MPU6050_ZG_OFFS_TC_ADDR				0X02
#define MPU6050_X_FINE_GAIN_ADDR			0X03
#define MPU6050_Y_FINE_GAIN_ADDR			0X04
#define MPU6050_Z_FINE_GAIN_ADDR			0X05
#define MPU6050_XA_OFFS_H_ADDR				0X06
#define MPU6050_XA_OFFS_L_TC_ADDR			0X07
#define MPU6050_YA_OFFS_H_ADDR				0X08
#define MPU6050_YA_OFFS_L_LT_ADDR			0X09
#define MPU6050_ZA_OFFS_H_ADDR				0X0A
#define MPU6050_ZA_OFFS_L_LT_ADDR			0X0B
#define MPU6050_XG_OFFS_USRH_ADDR			0X13
#define MPU6050_XG_OFFS_USRL_ADDR			0X14
#define MPU6050_YG_OFFS_USRH_ADDR			0X15
#define MPU6050_YG_OFFS_USRL_ADDR			0X16
#define MPU6050_ZG_OFFS_USRH_ADDR			0X17
#define MPU6050_ZG_OFFS_USRL_ADDR			0X18
#define MPU6050_SMPLRT_DIV_ADDR				0X19
#define MPU6050_CONFIG_ADDR					0X1A
#define MPU6050_GYRO_CONFIG_ADDR			0X1B
#define MPU6050_ACCEL_CONFIG_ADDR			0X1C
#define MPU6050_FF_THR_ADDR					0X1D
#define MPU6050_FF_DUR_ADDR					0X1E
#define MPU6050_MOT_THR_ADDR				0X1F
#define MPU6050_MOT_DUR_ADDR				0X20
#define MPU6050_ZRMOT_THR_ADDR				0X21
#define MPU6050_ZRMOT_DUR_ADDR				0X22
#define MPU6050_FIFO_EN_ADDR				0X23
#define MPU6050_I2C_MST_CTRL_ADDR			0X24
#define MPU6050_I2C_SLV0_ADDR_ADDR			0X25
#define MPU6050_I2C_SLV0_REG_ADDR			0X26
#define MPU6050_I2C_SLV0_CTRL_ADDR			0x27
#define MPU6050_I2C_SLV1_ADDR_ADDR			0X28
#define MPU6050_I2C_SLV1_REG_ADDR			0X29
#define MPU6050_I2C_SLV1_CTRL_ADDR			0x2A
#define MPU6050_I2C_SLV2_ADDR_ADDR			0X2B
#define MPU6050_I2C_SLV2_REG_ADDR			0X2C
#define MPU6050_I2C_SLV2_CTRL_ADDR			0x2D
#define MPU6050_I2C_SLV3_ADDR_ADDR			0X2E
#define MPU6050_I2C_SLV3_REG_ADDR			0X2F
#define MPU6050_I2C_SLV3_CTRL_ADDR			0x30
#define MPU6050_I2C_SLV4_ADDR_ADDR			0X31
#define MPU6050_I2C_SLV4_REG_ADDR			0X32
#define MPU6050_I2C_SLV4_DO_ADDR			0x33
#define MPU6050_I2C_SLV4_CTRL_ADDR			0x24
#define MPU6050_I2C_SLV4_DI_ADDR			0x35
#define MPU6050_I2C_MST_STATUS_ADDR			0X36
#define MPU6050_INT_PIN_CFG_ADDR			0X37
#define MPU6050_INT_ENABLE_ADDR				0X38
#define MPU6050_DMP_INT_STATUS_ADDR			0X39
#define MPU6050_INT_STATUS_ADDR				0X3A
#define MPU6050_ACCEL_XOUT_H_ADDR			0X3B
#define MPU6050_ACCEL_XOUT_L_ADDR			0X3C
#define MPU6050_ACCEL_YOUT_H_ADDR			0X3D
#define MPU6050_ACCEL_YOUT_L_ADDR			0X3E
#define MPU6050_ACCEL_ZOUT_H_ADDR			0X3F
#define MPU6050_ACCEL_ZOUT_L_ADDR			0X40
#define MPU6050_TEMP_OUT_H_ADDR				0X41
#define MPU6050_TEMP_OUT_L_ADDR				0X42
#define MPU6050_GYRO_XOUT_H_ADDR			0X43
#define MPU6050_GYRO_XOUT_L_ADDR			0X44
#define MPU6050_GYRO_YOUT_H_ADDR			0X45
#define MPU6050_GYRO_YOUT_L_ADDR			0X46
#define MPU6050_GYRO_ZOUT_H_ADDR			0X47
#define MPU6050_GYRO_ZOUT_L_ADDR			0X48
#define MPU6050_EXT_SENS_DATA_00_ADDR		0x49
#define MPU6050_EXT_SENS_DATA_01_ADDR		0x4A
#define MPU6050_EXT_SENS_DATA_02_ADDR		0x4B
#define MPU6050_EXT_SENS_DATA_03_ADDR		0x4C
#define MPU6050_EXT_SENS_DATA_04_ADDR		0x4D
#define MPU6050_EXT_SENS_DATA_05_ADDR		0x4E
#define MPU6050_EXT_SENS_DATA_06_ADDR		0x4F
#define MPU6050_EXT_SENS_DATA_07_ADDR		0x50
#define MPU6050_EXT_SENS_DATA_08_ADDR		0x51
#define MPU6050_EXT_SENS_DATA_09_ADDR		0x52
#define MPU6050_EXT_SENS_DATA_10_ADDR		0x53
#define MPU6050_EXT_SENS_DATA_11_ADDR		0x54
#define MPU6050_EXT_SENS_DATA_12_ADDR		0x55
#define MPU6050_EXT_SENS_DATA_13_ADDR		0x56
#define MPU6050_EXT_SENS_DATA_14_ADDR		0x57
#define MPU6050_EXT_SENS_DATA_15_ADDR		0x58
#define MPU6050_EXT_SENS_DATA_16_ADDR		0x59
#define MPU6050_EXT_SENS_DATA_17_ADDR		0x5A
#define MPU6050_EXT_SENS_DATA_18_ADDR		0x5B
#define MPU6050_EXT_SENS_DATA_19_ADDR		0x5C
#define MPU6050_EXT_SENS_DATA_20_ADDR		0x5D
#define MPU6050_EXT_SENS_DATA_21_ADDR		0x5E
#define MPU6050_EXT_SENS_DATA_22_ADDR		0x5F
#define MPU6050_EXT_SENS_DATA_23_ADDR		0x60
#define MPU6050_MOT_DETECT_STATUS_ADDR		0X61
#define MPU6050_I2C_SLV0_DO_ADDR			0X63
#define MPU6050_I2C_SLV1_DO_ADDR			0X64
#define MPU6050_I2C_SLV2_DO_ADDR			0X65
#define MPU6050_I2C_SLV3_DO_ADDR			0X66
#define MPU6050_I2C_MST_DELAY_CTRL_ADDR		0X67
#define MPU6050_SIGNAL_PATH_RESET_ADDR		0X68
#define MPU6050_MOT_DETECT_CTRL_ADDR		0X69
#define MPU6050_USER_CTRL_ADDR				0X6A
#define MPU6050_PWR_MGMT_1_ADDR				0X6B
#define MPU6050_PWR_MGMT_2_ADDR				0X6C
#define MPU6050_BANK_SEL_ADDR				0X6D
#define MPU6050_MEM_START_ADDR_ADDR			0X6E
#define MPU6050_MEM_R_W_ADDR				0X6F
#define MPU6050_DMP_CFG_1_ADDR				0X70
#define MPU6050_DMP_CFG_2_ADDR				0X71
#define MPU6050_FIFO_COUNTH_ADDR			0X72
#define MPU6050_FIFO_COUNTL_ADDR			0X73
#define MPU6050_FIFO_R_W_ADDR				0X74
#define MPU6050_WHO_AM_I_ADDR				0X75

bool mpu6050_init(uint8_t address);
bool mpu6050_writeReg(uint8_t addr, uint8_t data);
bool mpu6050_readReg(uint8_t addr, uint8_t *data, uint8_t nBytes);

#endif /* MPU6050_H_ */