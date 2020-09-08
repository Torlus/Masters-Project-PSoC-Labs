.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* Display_LCDPort */
.set Display_LCDPort__0__MASK, 0x01
.set Display_LCDPort__0__PC, CYREG_PRT2_PC0
.set Display_LCDPort__0__PORT, 2
.set Display_LCDPort__0__SHIFT, 0
.set Display_LCDPort__1__MASK, 0x02
.set Display_LCDPort__1__PC, CYREG_PRT2_PC1
.set Display_LCDPort__1__PORT, 2
.set Display_LCDPort__1__SHIFT, 1
.set Display_LCDPort__2__MASK, 0x04
.set Display_LCDPort__2__PC, CYREG_PRT2_PC2
.set Display_LCDPort__2__PORT, 2
.set Display_LCDPort__2__SHIFT, 2
.set Display_LCDPort__3__MASK, 0x08
.set Display_LCDPort__3__PC, CYREG_PRT2_PC3
.set Display_LCDPort__3__PORT, 2
.set Display_LCDPort__3__SHIFT, 3
.set Display_LCDPort__4__MASK, 0x10
.set Display_LCDPort__4__PC, CYREG_PRT2_PC4
.set Display_LCDPort__4__PORT, 2
.set Display_LCDPort__4__SHIFT, 4
.set Display_LCDPort__5__MASK, 0x20
.set Display_LCDPort__5__PC, CYREG_PRT2_PC5
.set Display_LCDPort__5__PORT, 2
.set Display_LCDPort__5__SHIFT, 5
.set Display_LCDPort__6__MASK, 0x40
.set Display_LCDPort__6__PC, CYREG_PRT2_PC6
.set Display_LCDPort__6__PORT, 2
.set Display_LCDPort__6__SHIFT, 6
.set Display_LCDPort__AG, CYREG_PRT2_AG
.set Display_LCDPort__AMUX, CYREG_PRT2_AMUX
.set Display_LCDPort__BIE, CYREG_PRT2_BIE
.set Display_LCDPort__BIT_MASK, CYREG_PRT2_BIT_MASK
.set Display_LCDPort__BYP, CYREG_PRT2_BYP
.set Display_LCDPort__CTL, CYREG_PRT2_CTL
.set Display_LCDPort__DM0, CYREG_PRT2_DM0
.set Display_LCDPort__DM1, CYREG_PRT2_DM1
.set Display_LCDPort__DM2, CYREG_PRT2_DM2
.set Display_LCDPort__DR, CYREG_PRT2_DR
.set Display_LCDPort__INP_DIS, CYREG_PRT2_INP_DIS
.set Display_LCDPort__LCD_COM_SEG, CYREG_PRT2_LCD_COM_SEG
.set Display_LCDPort__LCD_EN, CYREG_PRT2_LCD_EN
.set Display_LCDPort__MASK, 0x7F
.set Display_LCDPort__PORT, 2
.set Display_LCDPort__PRT, CYREG_PRT2_PRT
.set Display_LCDPort__PRTDSI__CAPS_SEL, CYREG_PRT2_CAPS_SEL
.set Display_LCDPort__PRTDSI__DBL_SYNC_IN, CYREG_PRT2_DBL_SYNC_IN
.set Display_LCDPort__PRTDSI__OE_SEL0, CYREG_PRT2_OE_SEL0
.set Display_LCDPort__PRTDSI__OE_SEL1, CYREG_PRT2_OE_SEL1
.set Display_LCDPort__PRTDSI__OUT_SEL0, CYREG_PRT2_OUT_SEL0
.set Display_LCDPort__PRTDSI__OUT_SEL1, CYREG_PRT2_OUT_SEL1
.set Display_LCDPort__PRTDSI__SYNC_OUT, CYREG_PRT2_SYNC_OUT
.set Display_LCDPort__PS, CYREG_PRT2_PS
.set Display_LCDPort__SHIFT, 0
.set Display_LCDPort__SLW, CYREG_PRT2_SLW

/* Pushbutton */
.set Pushbutton__0__MASK, 0x02
.set Pushbutton__0__PC, CYREG_PRT6_PC1
.set Pushbutton__0__PORT, 6
.set Pushbutton__0__SHIFT, 1
.set Pushbutton__AG, CYREG_PRT6_AG
.set Pushbutton__AMUX, CYREG_PRT6_AMUX
.set Pushbutton__BIE, CYREG_PRT6_BIE
.set Pushbutton__BIT_MASK, CYREG_PRT6_BIT_MASK
.set Pushbutton__BYP, CYREG_PRT6_BYP
.set Pushbutton__CTL, CYREG_PRT6_CTL
.set Pushbutton__DM0, CYREG_PRT6_DM0
.set Pushbutton__DM1, CYREG_PRT6_DM1
.set Pushbutton__DM2, CYREG_PRT6_DM2
.set Pushbutton__DR, CYREG_PRT6_DR
.set Pushbutton__INP_DIS, CYREG_PRT6_INP_DIS
.set Pushbutton__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set Pushbutton__LCD_EN, CYREG_PRT6_LCD_EN
.set Pushbutton__MASK, 0x02
.set Pushbutton__PORT, 6
.set Pushbutton__PRT, CYREG_PRT6_PRT
.set Pushbutton__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set Pushbutton__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set Pushbutton__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set Pushbutton__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set Pushbutton__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set Pushbutton__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set Pushbutton__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set Pushbutton__PS, CYREG_PRT6_PS
.set Pushbutton__SHIFT, 1
.set Pushbutton__SLW, CYREG_PRT6_SLW

/* LED */
.set LED__0__MASK, 0x08
.set LED__0__PC, CYREG_PRT6_PC3
.set LED__0__PORT, 6
.set LED__0__SHIFT, 3
.set LED__AG, CYREG_PRT6_AG
.set LED__AMUX, CYREG_PRT6_AMUX
.set LED__BIE, CYREG_PRT6_BIE
.set LED__BIT_MASK, CYREG_PRT6_BIT_MASK
.set LED__BYP, CYREG_PRT6_BYP
.set LED__CTL, CYREG_PRT6_CTL
.set LED__DM0, CYREG_PRT6_DM0
.set LED__DM1, CYREG_PRT6_DM1
.set LED__DM2, CYREG_PRT6_DM2
.set LED__DR, CYREG_PRT6_DR
.set LED__INP_DIS, CYREG_PRT6_INP_DIS
.set LED__LCD_COM_SEG, CYREG_PRT6_LCD_COM_SEG
.set LED__LCD_EN, CYREG_PRT6_LCD_EN
.set LED__MASK, 0x08
.set LED__PORT, 6
.set LED__PRT, CYREG_PRT6_PRT
.set LED__PRTDSI__CAPS_SEL, CYREG_PRT6_CAPS_SEL
.set LED__PRTDSI__DBL_SYNC_IN, CYREG_PRT6_DBL_SYNC_IN
.set LED__PRTDSI__OE_SEL0, CYREG_PRT6_OE_SEL0
.set LED__PRTDSI__OE_SEL1, CYREG_PRT6_OE_SEL1
.set LED__PRTDSI__OUT_SEL0, CYREG_PRT6_OUT_SEL0
.set LED__PRTDSI__OUT_SEL1, CYREG_PRT6_OUT_SEL1
.set LED__PRTDSI__SYNC_OUT, CYREG_PRT6_SYNC_OUT
.set LED__PS, CYREG_PRT6_PS
.set LED__SHIFT, 3
.set LED__SLW, CYREG_PRT6_SLW

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_MEMBER_5B, 4
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_DIE_PSOC5LP, 4
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_DIE_PSOC5LP
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PANTHER, 3
.set CYDEV_CHIP_DIE_PSOC4A, 2
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E123069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 2
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REV_PSOC5LP_PRODUCTION
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PANTHER_ES0, 0
.set CYDEV_CHIP_REV_PANTHER_ES1, 1
.set CYDEV_CHIP_REV_PANTHER_PRODUCTION, 1
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x1000
.set CYDEV_INSTRUCT_CACHE_ENABLED, 1
.set CYDEV_INTR_RISING, 0x00000000
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x4000
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0, 5
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1, 5
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2, 5
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3, 5
.set CYDEV_VIO3_MV, 5000
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif