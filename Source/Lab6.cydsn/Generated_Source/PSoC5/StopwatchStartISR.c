/*******************************************************************************
* File Name: StopwatchStartISR.c  
* Version 1.70
*
*  Description:
*   API for controlling the state of an interrupt.
*
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/


#include <cydevice_trm.h>
#include <CyLib.h>
#include <StopwatchStartISR.h>

#if !defined(StopwatchStartISR__REMOVED) /* Check for removal by optimization */

/*******************************************************************************
*  Place your includes, defines and code here 
********************************************************************************/
/* `#START StopwatchStartISR_intc` */

#include <globals.h>

/* `#END` */

#ifndef CYINT_IRQ_BASE
#define CYINT_IRQ_BASE      16
#endif /* CYINT_IRQ_BASE */
#ifndef CYINT_VECT_TABLE
#define CYINT_VECT_TABLE    ((cyisraddress **) CYREG_NVIC_VECT_OFFSET)
#endif /* CYINT_VECT_TABLE */

/* Declared in startup, used to set unused interrupts to. */
CY_ISR_PROTO(IntDefaultHandler);


/*******************************************************************************
* Function Name: StopwatchStartISR_Start
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
void StopwatchStartISR_Start(void)
{
    /* For all we know the interrupt is active. */
    StopwatchStartISR_Disable();

    /* Set the ISR to point to the StopwatchStartISR Interrupt. */
    StopwatchStartISR_SetVector(&StopwatchStartISR_Interrupt);

    /* Set the priority. */
    StopwatchStartISR_SetPriority((uint8)StopwatchStartISR_INTC_PRIOR_NUMBER);

    /* Enable it. */
    StopwatchStartISR_Enable();
}


/*******************************************************************************
* Function Name: StopwatchStartISR_StartEx
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void StopwatchStartISR_StartEx(cyisraddress address)
{
    /* For all we know the interrupt is active. */
    StopwatchStartISR_Disable();

    /* Set the ISR to point to the StopwatchStartISR Interrupt. */
    StopwatchStartISR_SetVector(address);

    /* Set the priority. */
    StopwatchStartISR_SetPriority((uint8)StopwatchStartISR_INTC_PRIOR_NUMBER);

    /* Enable it. */
    StopwatchStartISR_Enable();
}


/*******************************************************************************
* Function Name: StopwatchStartISR_Stop
********************************************************************************
*
* Summary:
*   Disables and removes the interrupt.
*
* Parameters:  
*
* Return:
*   None
*
*******************************************************************************/
void StopwatchStartISR_Stop(void)
{
    /* Disable this interrupt. */
    StopwatchStartISR_Disable();

    /* Set the ISR to point to the passive one. */
    StopwatchStartISR_SetVector(&IntDefaultHandler);
}


/*******************************************************************************
* Function Name: StopwatchStartISR_Interrupt
********************************************************************************
*
* Summary:
*   The default Interrupt Service Routine for StopwatchStartISR.
*
*   Add custom code between the coments to keep the next version of this file
*   from over writting your code.
*
* Parameters:  
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(StopwatchStartISR_Interrupt)
{
    /*  Place your Interrupt code here. */
    /* `#START StopwatchStartISR_Interrupt` */
	
	//If the stopwatch hasn't started, set the flag to true and
	//  display "Started" to the LCD
	if(!started_b)
	{
		started_b = TRUE;
		Display_ClearDisplay();
		Display_Position(0, 0);
		Display_PrintString("Started");
	}
	
    /* `#END` */
}


/*******************************************************************************
* Function Name: StopwatchStartISR_SetVector
********************************************************************************
*
* Summary:
*   Change the ISR vector for the Interrupt. Note calling StopwatchStartISR_Start
*   will override any effect this method would have had. To set the vector 
*   before the component has been started use StopwatchStartISR_StartEx instead.
*
* Parameters:
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void StopwatchStartISR_SetVector(cyisraddress address)
{
    cyisraddress * ramVectorTable;

    ramVectorTable = (cyisraddress *) *CYINT_VECT_TABLE;

    ramVectorTable[CYINT_IRQ_BASE + (uint32)StopwatchStartISR__INTC_NUMBER] = address;
}


/*******************************************************************************
* Function Name: StopwatchStartISR_GetVector
********************************************************************************
*
* Summary:
*   Gets the "address" of the current ISR vector for the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Address of the ISR in the interrupt vector table.
*
*******************************************************************************/
cyisraddress StopwatchStartISR_GetVector(void)
{
    cyisraddress * ramVectorTable;

    ramVectorTable = (cyisraddress *) *CYINT_VECT_TABLE;

    return ramVectorTable[CYINT_IRQ_BASE + (uint32)StopwatchStartISR__INTC_NUMBER];
}


/*******************************************************************************
* Function Name: StopwatchStartISR_SetPriority
********************************************************************************
*
* Summary:
*   Sets the Priority of the Interrupt. Note calling StopwatchStartISR_Start
*   or StopwatchStartISR_StartEx will override any effect this method 
*   would have had. This method should only be called after 
*   StopwatchStartISR_Start or StopwatchStartISR_StartEx has been called. To set 
*   the initial priority for the component use the cydwr file in the tool.
*
* Parameters:
*   priority: Priority of the interrupt. 0 - 7, 0 being the highest.
*
* Return:
*   None
*
*******************************************************************************/
void StopwatchStartISR_SetPriority(uint8 priority)
{
    *StopwatchStartISR_INTC_PRIOR = priority << 5;
}


/*******************************************************************************
* Function Name: StopwatchStartISR_GetPriority
********************************************************************************
*
* Summary:
*   Gets the Priority of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Priority of the interrupt. 0 - 7, 0 being the highest.
*
*******************************************************************************/
uint8 StopwatchStartISR_GetPriority(void)
{
    uint8 priority;


    priority = *StopwatchStartISR_INTC_PRIOR >> 5;

    return priority;
}


/*******************************************************************************
* Function Name: StopwatchStartISR_Enable
********************************************************************************
*
* Summary:
*   Enables the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void StopwatchStartISR_Enable(void)
{
    /* Enable the general interrupt. */
    *StopwatchStartISR_INTC_SET_EN = StopwatchStartISR__INTC_MASK;
}


/*******************************************************************************
* Function Name: StopwatchStartISR_GetState
********************************************************************************
*
* Summary:
*   Gets the state (enabled, disabled) of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   1 if enabled, 0 if disabled.
*
*******************************************************************************/
uint8 StopwatchStartISR_GetState(void)
{
    /* Get the state of the general interrupt. */
    return ((*StopwatchStartISR_INTC_SET_EN & (uint32)StopwatchStartISR__INTC_MASK) != 0u) ? 1u:0u;
}


/*******************************************************************************
* Function Name: StopwatchStartISR_Disable
********************************************************************************
*
* Summary:
*   Disables the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void StopwatchStartISR_Disable(void)
{
    /* Disable the general interrupt. */
    *StopwatchStartISR_INTC_CLR_EN = StopwatchStartISR__INTC_MASK;
}


/*******************************************************************************
* Function Name: StopwatchStartISR_SetPending
********************************************************************************
*
* Summary:
*   Causes the Interrupt to enter the pending state, a software method of
*   generating the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void StopwatchStartISR_SetPending(void)
{
    *StopwatchStartISR_INTC_SET_PD = StopwatchStartISR__INTC_MASK;
}


/*******************************************************************************
* Function Name: StopwatchStartISR_ClearPending
********************************************************************************
*
* Summary:
*   Clears a pending interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void StopwatchStartISR_ClearPending(void)
{
    *StopwatchStartISR_INTC_CLR_PD = StopwatchStartISR__INTC_MASK;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
