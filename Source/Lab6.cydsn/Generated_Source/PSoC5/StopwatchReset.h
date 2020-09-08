/*******************************************************************************
* File Name: StopwatchReset.h  
* Version 1.70
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CONTROL_REG_StopwatchReset_H) /* CY_CONTROL_REG_StopwatchReset_H */
#define CY_CONTROL_REG_StopwatchReset_H

#include "cytypes.h"


/***************************************
*         Function Prototypes 
***************************************/

void    StopwatchReset_Write(uint8 control) ;
uint8   StopwatchReset_Read(void) ;


/***************************************
*            Registers        
***************************************/

/* Control Register */
#define StopwatchReset_Control        (* (reg8 *) StopwatchReset_Sync_ctrl_reg__CONTROL_REG )
#define StopwatchReset_Control_PTR    (  (reg8 *) StopwatchReset_Sync_ctrl_reg__CONTROL_REG )

#endif /* End CY_CONTROL_REG_StopwatchReset_H */


/* [] END OF FILE */
