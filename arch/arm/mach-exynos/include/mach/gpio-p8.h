#ifndef __MACH_GPIO_P8_H
#define __MACH_GPIO_P8_H __FILE__

#define GPIO_XMMC0_CDn		EXYNOS4_GPK0(2)

#define GPIO_PS_ALS_SDA		EXYNOS4_GPK2(2)
#define GPIO_PS_ALS_SCL		EXYNOS4_GPK3(2)

#define GPIO_GYRO_INT		EXYNOS4_GPX0(0)
#define GPIO_PS_VOUT		EXYNOS4_GPL0(6)
#define GPIO_PS_VOUT_WAKE	EXYNOS4_GPX0(1)

#define GPIO_BUCK1_EN_A		EXYNOS4_GPX0(5)
#define GPIO_BUCK1_EN_B		EXYNOS4_GPX0(6)
#define GPIO_BUCK2_EN		EXYNOS4_GPL0(0)
#define GPIO_PMIC_IRQ		EXYNOS4_GPX0(7)

#define GPIO_VOL_UP		EXYNOS4_GPX2(0)
#define GPIO_VOL_DOWN		EXYNOS4_GPX2(1)

#define GPIO_nPOWER		EXYNOS4_GPX2(7)

/* #define VT_CAM_SDA_18V		EXYNOS4_GPC1(0) */
/* #define VT_CAM_SCL_18V		EXYNOS4_GPC1(2) */

#define CODEC_VT_SDA_18V	EXYNOS4_GPC1(3)
#define CODEC_VT_SCL_18V	EXYNOS4_GPC1(4)

#define GPIO_FUEL_SDA		EXYNOS4_GPY4(0)
#define GPIO_FUEL_SCL		EXYNOS4_GPY4(1)
#define GPIO_FUEL_ALERT	EXYNOS4_GPX2(3)

#define GPIO_MASSMEM_EN_LEVEL	0

#define GPIO_CAM_MOVIE_EN	EXYNOS4_GPL0(1)
#define GPIO_CAM_FLASH_EN	EXYNOS4_GPL0(2)
/* #define GPIO_CAM_FLASH_SET	EXYNOS4_GPE0(2) */

#define GPIO_TSP_LDO_ON		EXYNOS4_GPL0(3)
/* #define GPIO_TSP_RST		EXYNOS4_GPL0(5) */
/* #define GPIO_TSP_INT		EXYNOS4_GPX0(4) */
#define GPIO_TSP_SDA		EXYNOS4_GPA1(2)
#define GPIO_TSP_SCL		EXYNOS4_GPA1(3)
#define GPIO_TSP_VENDOR		EXYNOS4_GPY5(6)
#define GPIO_TSP_INT_18V	EXYNOS4_GPX1(5)

#define GPIO_LCD_RST		EXYNOS4_GPF0(1)
#define GPIO_LCD_EN		EXYNOS4_GPL0(7)
#define GPIO_LCD_LDO_EN	EXYNOS4_GPK1(1)
#define GPIO_UART_SEL		EXYNOS4_GPY4(7)

/* #define GPIO_CAM_PCLK		EXYNOS4_GPJ0(0) */
/* #define GPIO_CAM_VSYNC		EXYNOS4_GPJ0(1) */
/* #define GPIO_CAM_HSYNC		EXYNOS4_GPJ0(2) */

#define GPIO_CAM_MCLK		EXYNOS4210_GPJ1(3)
#define GPIO_CAM_AVDD_EN	EXYNOS4210_GPJ1(4)

#define GPIO_2M_nSTBY		EXYNOS4_GPL2(0)
#define GPIO_2M_nRST		EXYNOS4_GPL2(1)
#define GPIO_3M_nSTBY		EXYNOS4_GPL2(2)
#define GPIO_3M_nRST		EXYNOS4_GPL2(7)

#define GPIO_DET_35		EXYNOS4_GPX3(2)
#define GPIO_DET_35_AF		0xF

#define GPIO_EAR_SEND_END	EXYNOS4_GPX3(6)
#define GPIO_EAR_SEND_END_AF	0xF

#define GPIO_GPS_nRST		EXYNOS4_GPY5(4)
#define GPIO_GPS_PWR_EN		EXYNOS4_GPY5(5)

#define GPIO_BT_RXD		EXYNOS4_GPA0(0)
#define GPIO_BT_RXD_AF		2

#define GPIO_BT_TXD		EXYNOS4_GPA0(1)
#define GPIO_BT_TXD_AF		2

#define GPIO_BT_CTS		EXYNOS4_GPA0(2)
#define GPIO_BT_CTS_AF		2

#define GPIO_BT_RTS		EXYNOS4_GPA0(3)
#define GPIO_BT_RTS_AF		2

#define GPIO_GPS_RXD		EXYNOS4_GPA0(4)
#define GPIO_GPS_RXD_AF		2

#define GPIO_GPS_TXD		EXYNOS4_GPA0(5)
#define GPIO_GPS_TXD_AF		2

#define GPIO_GPS_CTS		EXYNOS4_GPA0(6)
#define GPIO_GPS_CTS_AF		2

#define GPIO_GPS_RTS		EXYNOS4_GPA0(7)
#define GPIO_GPS_RTS_AF		2

/* #define GPIO_ALC_nRST		EXYNOS4_GPX1(7) */

#define GPIO_DOUBLE_RR		EXYNOS4_GPL2(3)
/* #define GPIO_2MIC_EN		 EXYNOS4_GPL2(5) */

#define GPIO_CURR_ADJ	     EXYNOS4_GPY5(7)
#define GPIO_TA_EN	     EXYNOS4_GPY6(6)
#define GPIO_TA_nCHG	     EXYNOS4_GPX0(4)
#define GPIO_TA_nCONNECTED   EXYNOS4_GPX3(5)

/* #define GPIO_CHG_SDA_28V	EXYNOS4_GPB(2) */
/* #define GPIO_CHG_SCL_28V	EXYNOS4_GPB(3) */

#define GPIO_IPC_RXD		EXYNOS4_GPA1(4)
#define GPIO_IPC_RXD_AF		2

#define GPIO_IPC_TXD		EXYNOS4_GPA1(5)
#define GPIO_IPC_TXD_AF		2

#define GPIO_PHONE_ON		EXYNOS4_GPC1(1)
#define GPIO_PHONE_ACTIVE	EXYNOS4_GPX1(6)
#define GPIO_PDA_ACTIVE		EXYNOS4_GPY4(2)
#define GPIO_CP_DUMP_INT	EXYNOS4_GPX1(2)
#define GPIO_CP_RST		EXYNOS4_GPX1(4)
#define GPIO_CP_REQ_RESET	EXYNOS4_GPY4(6)
#define GPIO_IPC_SLAVE_WAKEUP	EXYNOS4_GPX1(0)
#define GPIO_IPC_HOST_WAKEUP	EXYNOS4_GPX1(1)
#define GPIO_SUSPEND_REQUEST	EXYNOS4_GPX1(3)
/* #define GPIO_LVDS_NSHDN		EXYNOS4_GPX1(5) */
#define GPIO_ACTIVE_STATE	EXYNOS4_GPY3(5)

#define IRQ_PHONE_ACTIVE	IRQ_EINT14
#define IRQ_SUSPEND_REQUEST	IRQ_EINT11
#define IRQ_IPC_HOST_WAKEUP	IRQ_EINT9

#define EXYNOS4_GPD_0_0_TOUT_0	(0x2 << 0)
#define EXYNOS4_GPD_0_1_TOUT_1	(0x2 << 4)
#define EXYNOS4_GPD_0_2_TOUT_2	(0x2 << 8)
#define EXYNOS4_GPD_0_3_TOUT_3	(0x2 << 12)

#define GPIO_WLAN_EN		EXYNOS4_GPL1(2)
#define GPIO_WLAN_EN2		EXYNOS4_GPL0(6)
#define GPIO_WLAN_EN_AF		1
#define GPIO_WLAN_nRST		EXYNOS4_GPL0(4)

/* CSR8811 Project(Alan.Ko) 2011.07.02 */
/* #define GPIO_BT_EN		 EXYNOS4_GPL0(4) */
/* CSR8811 Project(Alan.Ko) end */

#define GPIO_BT_nRST		EXYNOS4_GPL1(0)

#define GPIO_WLAN_HOST_WAKE	EXYNOS4_GPX2(5)
#define GPIO_WLAN_HOST_WAKE_AF	0xF

#define GPIO_BT_HOST_WAKE	EXYNOS4_GPX2(6)
#define GPIO_BT_HOST_WAKE_AF	0xF

/* CSR8811 Project(Alan.Ko) 2011.07.02 */
/* #define GPIO_BT_WAKE		 EXYNOS4_GPX3(1) */
/* CSR8811 Project(Alan.Ko) end */

#define GPIO_WLAN_SDIO_CLK	EXYNOS4_GPK3(0)
#define GPIO_WLAN_SDIO_CLK_AF	2

#define GPIO_WLAN_SDIO_CMD	EXYNOS4_GPK3(1)
#define GPIO_WLAN_SDIO_CMD_AF	2

#define GPIO_WLAN_SDIO_D0	EXYNOS4_GPK3(3)
#define GPIO_WLAN_SDIO_D0_AF	2

#define GPIO_WLAN_SDIO_D1	EXYNOS4_GPK3(4)
#define GPIO_WLAN_SDIO_D1_AF	2

#define GPIO_WLAN_SDIO_D2	EXYNOS4_GPK3(5)
#define GPIO_WLAN_SDIO_D2_AF	2

#define GPIO_WLAN_SDIO_D3	EXYNOS4_GPK3(6)
#define GPIO_WLAN_SDIO_D3_AF	2

#define GPIO_HW_REV0		EXYNOS4_GPY5(0)
#define GPIO_HW_REV1		EXYNOS4_GPY5(1)
#define GPIO_HW_REV2		EXYNOS4_GPY5(2)
#define GPIO_HW_REV3		EXYNOS4_GPY5(3)

#define GPIO_HDMI_EN1		EXYNOS4_GPL1(1)
#define GPIO_MHL_RST		EXYNOS4_GPF3(4)
#define GPIO_MHL_INT		EXYNOS4_GPF3(5)
#define GPIO_MHL_INT_AF		S3C_GPIO_SFN(0xF)
#define	GPIO_MHL_WAKE_UP_AF	S3C_GPIO_SFN(0xF)
#define GPIO_HDMI_HPD		EXYNOS4_GPX3(7)

#define GPIO_SIM_DETECT		EXYNOS4_GPX0(3)

#define GPIO_MSENSE_INT		EXYNOS4_GPX2(2)
#define GPIO_DOCK_INT		EXYNOS4_GPX2(4)

/* IRDA */
#define GPIO_IRDA_EN		EXYNOS4_GPX3(0)
#define GPIO_IRDA_nINT	    EXYNOS4_GPB(4)
#define GPIO_IRDA_nRST	    EXYNOS4_GPB(5)
#define GPIO_IRDA_SCL_28V   EXYNOS4_GPK1(0)
#define GPIO_IRDA_SDA_28V   EXYNOS4_GPK1(2)

#define GPIO_USB_OTG_EN		EXYNOS4_GPX3(3)
#define GPIO_USB_SEL1		EXYNOS4_GPY3(4)
#define GPIO_USB_SEL2		EXYNOS4_GPY3(7)
#define GPIO_USB_SEL3		EXYNOS4_GPY4(5)
#define GPIO_IF_CON_SENSE	EXYNOS4_GPY4(3)

#define GPIO_MSENSOR_MHL_SDA_28V	EXYNOS4_GPD0(2)
#define	GPIO_MSENSOR_MHL_SDA_AF			0x3
#define GPIO_MSENSOR_MHL_SCL_28V	EXYNOS4_GPD0(3)
#define	GPIO_MSENSOR_MHL_SCL_AF			0x3
#define GPIO_MHL_SDA_18V		EXYNOS4_GPY3(0)
#define GPIO_MHL_SCL_18V		EXYNOS4_GPY3(2)

#define GPIO_AP_HDMI_SDA	GPIO_MSENSOR_MHL_SDA_28V
#define	GPIO_AP_HDMI_SDA_AF	GPIO_MSENSOR_MHL_SDA_AF
#define GPIO_AP_HDMI_SCL	GPIO_MSENSOR_MHL_SCL_28V
#define	GPIO_AP_HDMI_SCL_AF	GPIO_MSENSOR_MHL_SCL_AF
#define GPIO_AP_SDA_18V		GPIO_MHL_SDA_18V
#define GPIO_AP_SCL_18V		GPIO_MHL_SCL_18V

#define MHL_INT_IRQ		gpio_to_irq(GPIO_MHL_INT)
/* #define MHL_WAKEUP_IRQ		gpio_to_irq(GPIO_MHL_WAKE_UP) */

#define GPIO_SUB_MIC_BIAS_EN	EXYNOS4_GPY6(7)
#define GPIO_MAIN_MIC_BIAS_EN EXYNOS4_GPC0(1)
#define GPIO_EAR_MIC_BIAS_EN	EXYNOS4_GPL2(6)

#define GPIO_REMOTE_SENSE_IRQ	EXYNOS4_GPX0(2)

#define GPIO_ACCESSORY_EN	EXYNOS4_GPY6(1)
#define GPIO_ACCESSORY_INT	EXYNOS4_GPX1(7)
#define GPIO_ACCESSORY_OUT_5V EXYNOS4_GPY4(4)

#endif				/* __MACH_GPIO_P8_REV01_H */
