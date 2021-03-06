/*******************************************************************************
* File Name: Pushbuttons.h  
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

#if !defined(CY_STATUS_REG_Pushbuttons_H) /* CY_STATUS_REG_Pushbuttons_H */
#define CY_STATUS_REG_Pushbuttons_H

#include "cytypes.h"
#include "CyLib.h"


/***************************************
*        Function Prototypes
***************************************/

uint8 Pushbuttons_Read(void) ;
void Pushbuttons_InterruptEnable(void) ;
void Pushbuttons_InterruptDisable(void) ;
void Pushbuttons_WriteMask(uint8 mask) ;
uint8 Pushbuttons_ReadMask(void) ;


/***************************************
*           API Constants
***************************************/

#define Pushbuttons_STATUS_INTR_ENBL    0x10u


/***************************************
*         Parameter Constants
***************************************/

/* Status Register Inputs */
#define Pushbuttons_INPUTS              2


/***************************************
*             Registers
***************************************/

/* Status Register */
#define Pushbuttons_Status             (* (reg8 *) Pushbuttons_sts_sts_reg__STATUS_REG )
#define Pushbuttons_Status_PTR         (  (reg8 *) Pushbuttons_sts_sts_reg__STATUS_REG )
#define Pushbuttons_Status_Mask        (* (reg8 *) Pushbuttons_sts_sts_reg__MASK_REG )
#define Pushbuttons_Status_Aux_Ctrl    (* (reg8 *) Pushbuttons_sts_sts_reg__STATUS_AUX_CTL_REG )

#endif /* End CY_STATUS_REG_Pushbuttons_H */


/* [] END OF FILE */
