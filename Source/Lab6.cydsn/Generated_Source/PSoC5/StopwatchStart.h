/*******************************************************************************
* File Name: StopwatchStart.h  
* Version 1.80
*
* Description:
*  This file containts Status Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_STATUS_REG_StopwatchStart_H) /* CY_STATUS_REG_StopwatchStart_H */
#define CY_STATUS_REG_StopwatchStart_H

#include "cytypes.h"
#include "CyLib.h"


/***************************************
*        Function Prototypes
***************************************/

uint8 StopwatchStart_Read(void) ;
void StopwatchStart_InterruptEnable(void) ;
void StopwatchStart_InterruptDisable(void) ;
void StopwatchStart_WriteMask(uint8 mask) ;
uint8 StopwatchStart_ReadMask(void) ;


/***************************************
*           API Constants
***************************************/

#define StopwatchStart_STATUS_INTR_ENBL    0x10u


/***************************************
*         Parameter Constants
***************************************/

/* Status Register Inputs */
#define StopwatchStart_INPUTS              1


/***************************************
*             Registers
***************************************/

/* Status Register */
#define StopwatchStart_Status             (* (reg8 *) StopwatchStart_sts_sts_reg__STATUS_REG )
#define StopwatchStart_Status_PTR         (  (reg8 *) StopwatchStart_sts_sts_reg__STATUS_REG )
#define StopwatchStart_Status_Mask        (* (reg8 *) StopwatchStart_sts_sts_reg__MASK_REG )
#define StopwatchStart_Status_Aux_Ctrl    (* (reg8 *) StopwatchStart_sts_sts_reg__STATUS_AUX_CTL_REG )

#endif /* End CY_STATUS_REG_StopwatchStart_H */


/* [] END OF FILE */
