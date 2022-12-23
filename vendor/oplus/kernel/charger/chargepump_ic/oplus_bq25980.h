// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2018-2020 Oplus. All rights reserved.
 */
#ifndef __OPLUS_BQ25980_H__
#define __OPLUS_BQ25980_H__

#define BQ25980_BATOVP_ALM		0x1
#define BQ25980_BATOCP			0x2
#define BQ25980_BATOCP_ALM		0x3
#define BQ25980_CHRGR_CFG_1		0x4
#define BQ25980_CHRGR_CTRL_1	0x5
#define BQ25980_BUSOVP			0x6
#define BQ25980_BUSOVP_ALM		0x7
#define BQ25980_BUSOCP			0x8
#define BQ25980_REG_09			0x9
#define BQ25980_TEMP_CONTROL	0xA
#define BQ25980_TDIE_ALM		0xB
#define BQ25980_TSBUS_FLT		0xC
#define BQ25980_TSBAT_FLG		0xD
#define BQ25980_VAC_CONTROL		0xE
#define BQ25980_CHRGR_CTRL_2	0xF
#define BQ25980_CHRGR_CTRL_3	0x10
#define BQ25980_CHRGR_CTRL_4	0x11
#define BQ25980_CHRGR_CTRL_5	0x12
#define BQ25980_STAT1			0x13
#define BQ25980_STAT2			0x14
#define BQ25980_STAT3			0x15
#define BQ25980_STAT4			0x16
#define BQ25980_STAT5			0x17
#define BQ25980_FLAG1			0x18
#define BQ25980_FLAG2			0x19
#define BQ25980_FLAG3			0x1A
#define BQ25980_FLAG4			0x1B
#define BQ25980_FLAG5			0x1C
#define BQ25980_MASK1			0x1D
#define BQ25980_MASK2			0x1E
#define BQ25980_MASK3			0x1F
#define BQ25980_MASK4			0x20
#define BQ25980_MASK5			0x21
#define BQ25980_DEVICE_INFO		0x22
#define BQ25980_ADC_CONTROL1		0x23
#define BQ25980_ADC_CONTROL2		0x24
#define BQ25980_IBUS_ADC_MSB		0x25
#define BQ25980_VBUS_ADC_MSB		0x27
#define BQ25980_VAC1_ADC_MSB		0x29
#define BQ25980_VAC2_ADC_MSB		0x2B
#define BQ25980_VAC2_ADC_LSB		0x2C
#define BQ25980_VOUT_ADC_MSB		0x2D

#define BQ25980_VBAT_ADC_MSB		0x2F
#define BQ25980_VBAT_ADC_LSB		0x30
#define BQ25980_IBAT_ADC_MSB		0x31
#define BQ25980_IBAT_ADC_LSB		0x32
#define BQ25980_TSBUS_ADC_MSB		0x33
#define BQ25980_TSBUS_ADC_LSB		0x34
#define BQ25980_TSBAT_ADC_MSB		0x35
#define BQ25980_TSBAT_ADC_LSB		0x36
#define BQ25980_TDIE_ADC_MSB		0x37
#define BQ25980_DEGLITCH_TIME		0x39
#define BQ25980_CHRGR_CTRL_6		0x3A


#define BQ25980_BUSOCP_STEP_uA		262500
#define BQ25980_BUSOCP_OFFSET_uA	1050000
#define BQ25960_BUSOCP_STEP_uA		250000
#define BQ25960_BUSOCP_OFFSET_uA	1000000


#define BQ25980_BUSOCP_SC_DFLT_uA		4200000
#define BQ25980_BUSOCP_BYP_DFLT_uA		8000000
#define BQ25975_BUSOCP_DFLT_uA		4250000
#define BQ25960_BUSOCP_SC_DFLT_uA		4000000
#define BQ25960_BUSOCP_BYP_DFLT_uA		5000000

#define BQ25980_BUSOCP_MIN_uA		1050000
#define BQ25960_BUSOCP_MIN_uA		1000000

#define BQ25980_BUSOCP_SC_MAX_uA	6037500
#define BQ25975_BUSOCP_SC_MAX_uA	5750000
#define BQ25960_BUSOCP_SC_MAX_uA	4500000

#define BQ25980_BUSOCP_BYP_MAX_uA	8925000
#define BQ25975_BUSOCP_BYP_MAX_uA	8500000
#define BQ25960_BUSOCP_BYP_MAX_uA	6500000

#define BQ25980_BUSOVP_SC_STEP_uV	100000
#define BQ25975_BUSOVP_SC_STEP_uV	50000
#define BQ25960_BUSOVP_SC_STEP_uV	50000
#define BQ25980_BUSOVP_SC_OFFSET_uV	14000000
#define BQ25975_BUSOVP_SC_OFFSET_uV	7000000
#define BQ25960_BUSOVP_SC_OFFSET_uV	7000000

#define BQ25980_BUSOVP_BYP_STEP_uV	50000
#define BQ25975_BUSOVP_BYP_STEP_uV	25000
#define BQ25960_BUSOVP_BYP_STEP_uV	25000
#define BQ25980_BUSOVP_BYP_OFFSET_uV	7000000
#define BQ25975_BUSOVP_BYP_OFFSET_uV	3500000
#define BQ25960_BUSOVP_BYP_OFFSET_uV	3500000

#define BQ25980_BUSOVP_DFLT_uV		17800000
#define BQ25980_BUSOVP_BYPASS_DFLT_uV	8900000
#define BQ25975_BUSOVP_DFLT_uV		8900000
#define BQ25975_BUSOVP_BYPASS_DFLT_uV	4450000
#define BQ25960_BUSOVP_DFLT_uV		8900000

#define BQ25980_BUSOVP_SC_MIN_uV	14000000
#define BQ25975_BUSOVP_SC_MIN_uV	7000000
#define BQ25960_BUSOVP_SC_MIN_uV	7000000
#define BQ25980_BUSOVP_BYP_MIN_uV	7000000
#define BQ25975_BUSOVP_BYP_MIN_uV	3500000
#define BQ25960_BUSOVP_BYP_MIN_uV	3500000

#define BQ25980_BUSOVP_SC_MAX_uV	22000000
#define BQ25975_BUSOVP_SC_MAX_uV	12750000
#define BQ25960_BUSOVP_SC_MAX_uV	12750000

#define BQ25980_BUSOVP_BYP_MAX_uV	12750000
#define BQ25975_BUSOVP_BYP_MAX_uV	6500000
#define BQ25960_BUSOVP_BYP_MAX_uV	6500000

#define BQ25980_BATOVP_STEP_uV		20000
#define BQ25975_BATOVP_STEP_uV		10000
#define BQ25960_BATOVP_STEP_uV		10000

#define BQ25980_BATOVP_OFFSET_uV	7000000
#define BQ25975_BATOVP_OFFSET_uV	3500000
#define BQ25960_BATOVP_OFFSET_uV	3500000

#define BQ25980_BATOVP_DFLT_uV		14000000
#define BQ25975_BATOVP_DFLT_uV		8900000
#define BQ25960_BATOVP_DFLT_uV		8900000

#define BQ25980_BATOVP_MIN_uV		7000000
#define BQ25975_BATOVP_MIN_uV		3500000
#define BQ25960_BATOVP_MIN_uV		3500000

#define BQ25980_BATOVP_MAX_uV		9540000
#define BQ25975_BATOVP_MAX_uV		4770000
#define BQ25960_BATOVP_MAX_uV		4770000

#define BQ25980_BATOCP_STEP_uA		100000

#define BQ25980_BATOCP_MASK		(BIT(6) | BIT(5) | BIT(4)| BIT(3)| BIT(2)| BIT(1)| BIT(0))

#define BQ25980_BATOCP_DFLT_uA		8100000
#define BQ25960_BATOCP_DFLT_uA		6100000

#define BQ25980_BATOCP_MIN_uA		2000000

#define BQ25980_BATOCP_MAX_uA		11000000
#define BQ25975_BATOCP_MAX_uA		11000000
#define BQ25960_BATOCP_MAX_uA		8500000

#define BQ25980_ENABLE_HIZ		0xff
#define BQ25980_DISABLE_HIZ		0x0
#define BQ25980_EN_BYPASS		BIT(3)
#define BQ25980_STAT1_OVP_MASK		(BIT(7) | BIT(5) | BIT(1))
#define BQ25980_STAT3_OVP_MASK		(BIT(7) | BIT(6))
#define BQ25980_STAT1_OCP_MASK		BIT(4)
#define BQ25980_STAT2_OCP_MASK		BIT(7)
#define BQ25980_STAT4_TFLT_MASK		(BIT(4)| BIT(3)| BIT(2))
#define BQ25980_WD_STAT			BIT(0)
#define BQ25980_PRESENT_MASK		(BIT(4)| BIT(3)| BIT(2))

#define BQ25980_CHG_EN			BIT(4)
#define BQ25980_CHG_DISABLE			0
#define BQ25980_ENABLE_MASK		BIT(4)
#define BQ25980_ENABLE_SHIFT	5


#define BQ25980_EN_HIZ			BIT(6)
#define BQ25980_ADC_EN			BIT(7)
#define BQ25980_MS_MASK			(BIT(1)| BIT(0))
#define BQ25980_DEVICE_ID_MASK			(BIT(3)| BIT(2)| BIT(1)| BIT(0))

#define BQ25980_ADC_CURR_STEP_IBUS_uA		1070
#define BQ25980_ADC_VOLT_STEP_VBAT_deciuV	10055
#define BQ25980_ADC_VOLT_STEP_VBUS_deciuV	10066
#define BQ25980_ADC_VOLT_OFFSET_VBUS		-60000
#define BQ25960_ADC_VOLT_STEP_deciuV		10000
#define BQ25960_ADC_VOLT_STEP_uV		1000
#define BQ25960_ADC_CURR_STEP_uA		1000
#define BQ25980_ADC_POLARITY_BIT	BIT(7)

#define BQ25980_WATCHDOG_MASK	(BIT(4)| BIT(3))
#define BQ25980_WATCHDOG_DIS	BIT(2)
#define BQ25980_WATCHDOG_MAX	300000
#define BQ25980_WATCHDOG_MIN	0
#define BQ25980_NUM_WD_VAL	4

#define BQ25980_VAC1_CONTROL_MASK	(BIT(7)| BIT(6)| BIT(5))
#define BQ25980_VAC1_CONTROL_SHIFT	5
#define BQ25980_VAC2_CONTROL_MASK	(BIT(4)| BIT(3)| BIT(2))
#define BQ25980_VAC2_CONTROL_SHIFT	2

#define BQ25980_STAT1_BAT_OVP_MASK	BIT(7)
#define BQ25980_STAT1_BAT_OVP_ALM_MASK	BIT(6)
#define BQ25980_STAT1_BAT_OCP_MASK	BIT(4)
#define BQ25980_STAT1_BAT_OCP_ALM_MASK	BIT(3)
#define BQ25980_STAT1_BUS_OVP_MASK	BIT(1)
#define BQ25980_STAT1_BUS_OVP_ALM_MASK	BIT(0)
#define BQ25980_STAT2_BUS_OCP_MASK	BIT(7)
#define BQ25980_STAT2_BUS_OCP_ALM_MASK	BIT(6)
#define BQ25980_STAT4_TSBAT_FLT_MASK	BIT(3)

/* Register 0h */
#define BQ25980_REG_0						0x0

/* Register 13h */
#define BQ25980_REG_13 						0x13



/* Register 19h */
#define BQ25980_REG_19                       0x19
#define BQ25980_BUS_OCP_FLAG_MASK            0x80
#define BQ25980_BUS_OCP_FLAG_SHIFT           7
#define BQ25980_BUS_UCP_FALL_FLAG_MASK       0x20
#define BQ25980_BUS_UCP_FALL_FLAG_SHIFT      5

/* Register 1Ch */
#define BQ25980_REG_1C						0x1C



/* Register 25h */
#define BQ25980_REG_25                       0x25
#define BQ25980_IBUS_POL_H_MASK              0xFF
#define BQ25980_IBUS_ADC_LSB                 107 / 100

/* Register 26h */
#define BQ25980_REG_26                       0x26
#define BQ25980_IBUS_POL_L_MASK              0xFF

/* Register 27h */
#define BQ25980_REG_27                       0x27
#define BQ25980_VBUS_POL_H_MASK              0xFF
#define BQ25980_VBUS_ADC_LSB                 10066 / 10000
#define BQ25980_VBUS_OFFSET                  -60

/* Register 28h */
#define BQ25980_REG_28                       0x28
#define BQ25980_VBUS_POL_L_MASK              0xFF

/* Register 29h */
#define BQ25980_REG_29                       0x29
#define BQ25980_VAC1_POL_H_MASK              0xFF
#define BQ25980_VAC1_ADC_LSB                 10056 / 10000
#define BQ25980_VAC1_OFFSET                  -40

/* Register 2Ah */
#define BQ25980_REG_2A						0x2A
#define BQ25980_VAC1_POL_L_MASK				0xFF

/* Register 2Dh */
#define BQ25980_REG_2D                       0x2D
#define BQ25980_VOUT_POL_H_MASK              0xFF
#define BQ25980_VOUT_ADC_LSB                 10075 / 10000
#define BQ25980_VOUT_OFFSET                  40


/* Register 2Eh */
#define BQ25980_REG_2E                       0x2E
#define BQ25980_VOUT_POL_L_MASK              0xFF

/* Register 37h */
#define BQ25980_REG_37                       0x37
#define BQ25980_TDIE_POL_H_MASK              0xFF
#define BQ25980_TDIE_ADC_LSB                 103 / 200
#define BQ25980_TDIE_OFFSET                  2

/* Register 38h */
#define BQ25980_REG_38                       0x38
#define BQ25980_TDIE_POL_L_MASK              0xFF

/* Register 42h */
#define BQ25980_REG_42						0x42

int bq25980_master_get_tdie(void);
int bq25980_master_get_ucp_flag(void);
int bq25980_master_get_vac(void);
int bq25980_master_get_vbus(void);
int bq25980_master_get_ibus(void);
int bq25980_master_cp_enable(int enable);
bool bq25980_master_get_enable(void);
void bq25980_master_cfg_sc(void);
void bq25980_master_cfg_bypass(void);
void bq25980_master_hardware_init(void);
void bq25980_master_reset(void);
int bq25980_master_dump_registers(void);
int bq25980_master_get_vac(void);
int bq25980_master_get_vout(void);
void bq25980_master_pmid2vout_enable(bool enable);


int bq25980_slave_get_tdie(void);
int bq25980_slave_get_ucp_flag(void);
int bq25980_slave_get_vac(void);
int bq25980_slave_get_vbus(void);
int bq25980_slave_get_ibus(void);
int bq25980_slave_cp_enable(int enable);
bool bq25980_slave_get_enable(void);
void bq25980_slave_cfg_sc(void);
void bq25980_slave_cfg_bypass(void);
void bq25980_slave_hardware_init(void);
void bq25980_slave_reset(void);
int bq25980_slave_dump_registers(void);
int bq25980_slave_get_vout(void);
int bq25980_slave_get_vac(void);
void bq25980_slave_pmid2vout_enable(bool enable);

struct chip_bq25980 {
	struct i2c_client *master_client;
	struct device *master_dev;
	struct i2c_client *slave_client;
	struct device *slave_dev;
	struct pinctrl *ucp_pinctrl;
	struct pinctrl_state *ucp_int_active;
	struct pinctrl_state *ucp_int_sleep;
	int ucp_gpio;
	int ucp_irq;
};
int bq25980_master_subsys_init(void);
int bq25980_slave_subsys_init(void);
void bq25980_master_subsys_exit(void);
void bq25980_slave_subsys_exit(void);

#endif  /* __OPLUS_BQ25980_H__ */

