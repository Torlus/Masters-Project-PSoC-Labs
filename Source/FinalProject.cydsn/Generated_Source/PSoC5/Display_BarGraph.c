/*******************************************************************************
* File Name: Display_BarGraph.c
* Version 1.90
*
* Description:
*  This file provides the custom character data and API for creating and using
*  bar graphs with the Character LCD component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "Display.h"


uint8 const CYCODE Display_customFonts[] = \
{
    /* Character Display_CUSTOM_0   */
    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x1Fu, \
    /* Character Display_CUSTOM_1   */
    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x1Fu,    0x1Fu, \
    /* Character Display_CUSTOM_2   */
    0x00u,    0x00u,    0x00u,    0x00u,    0x00u,    0x1Fu,    0x1Fu,    0x1Fu, \
    /* Character Display_CUSTOM_3   */
    0x00u,    0x00u,    0x00u,    0x00u,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu, \
    /* Character Display_CUSTOM_4   */
    0x00u,    0x00u,    0x00u,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu, \
    /* Character Display_CUSTOM_5   */
    0x00u,    0x00u,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu, \
    /* Character Display_CUSTOM_6   */
    0x00u,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu, \
    /* Character Display_CUSTOM_7   */
    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu,    0x1Fu \
};


/*******************************************************************************
* Function Name: Display_LoadCustomFonts
********************************************************************************
*
* Summary:
*  Loads 8 custom font characters into the LCD Module for use.  Cannot use
*  characters from two different font sets at once, but font sets can be
*  switched out during runtime.
*
* Parameters:
*  customData:  pointer to a constant array of 64 bytes representing 8 custom
*               font characters.
* Return:
*  None.
*
* Theory:
*  Prior to using this function user need to import the pointer to custom
*  font array to your project by writting the following in the source code file
*  where custom font will be used:
*       extern uint8 const CYCODE LCD_Char_customFonts[];
*  This function is not automatically called by the Start() routine and must be
*  called manually by the user.
*******************************************************************************/
void Display_LoadCustomFonts(uint8 const customData[]) 
{
    uint8 indexU8;

    Display_IsReady();
    /* Set starting address in the LCD Module */
    /* Optionally: Read the current address to restore at a later time */
    Display_WriteControl(Display_CGRAM_0);

    /* Load in the 64 bytes of CustomChar Data */
    for(indexU8 = 0u; indexU8 < Display_CUSTOM_CHAR_SET_LEN; indexU8++)
    {
        /* Delay between each write */
        Display_WriteData(customData[indexU8]);
    }

    Display_IsReady();
    Display_WriteControl(Display_DDRAM_0);
}


#if (Display_CUSTOM_CHAR_SET == Display_HORIZONTAL_BG)

    /*******************************************************************************
    * Function Name: Display_DrawHorizontalBG
    ********************************************************************************
    *
    * Summary:
    *  Draws the horizontal bargraph.
    *
    * Parameters:
    *  row:            The row in which the bar graph starts.
    *  column:         The column in which the bar graph starts.
    *  maxCharacters:  The max length of the graph in whole characters.
    *  value:          The current length or height of the graph in pixels.
    *
    * Return:
    *  void.
    *
    *******************************************************************************/
    void Display_DrawHorizontalBG(uint8 row, uint8 column, uint8 maxCharacters, uint8 value) \
                                                            
    {
        /* 8-bit Counter */
        uint8 count8;
        uint8 fullChars;
        uint8 remainingPixels;

        /* Number of full characters to draw */
        fullChars = value / Display_CHARACTER_WIDTH;

        /* Number of remaining pixels to draw */
        remainingPixels = value % Display_CHARACTER_WIDTH;

        /* Ensure that the maximum character limit is followed. */
        if(fullChars >= maxCharacters)
        {
            fullChars = maxCharacters;
        }

        /* Put Cursor at start position */
        Display_Position(row, column);

        /* Write full characters */
        for(count8 = 0u; count8 < fullChars; count8++)
        {
            Display_WriteData(Display_CUSTOM_5);
        }

        if(fullChars < maxCharacters)
        {
            /* Write remaining pixels */
            Display_WriteData(remainingPixels);

            if(fullChars < (maxCharacters - 1u))
            {
                /* Fill with whitespace to end of bar graph */
                for(count8 = 0u; count8 < (maxCharacters - fullChars - 1u); count8++)
                {
                    Display_WriteData(Display_CUSTOM_0);
                }
            }
        }
    }

#endif /* Display_CUSTOM_CHAR_SET == Display_HORIZONTAL_BG */


#if (Display_CUSTOM_CHAR_SET == Display_VERTICAL_BG)

    /*******************************************************************************
    *  Function Name: Display_DrawVerticalBG
    ********************************************************************************
    *
    * Summary:
    *  Draws the vertical bargraph.
    *
    * Parameters:
    *  row:            The row in which the bar graph starts.
    *  column:         The column in which the bar graph starts.
    *  maxCharacters:  The max height of the graph in whole characters.
    *  value:          The current length or height of the graph in pixels.
    *
    * Return:
    *  void.
    *
    *******************************************************************************/
    void Display_DrawVerticalBG(uint8 row, uint8 column, uint8 maxCharacters, uint8 value) \
                                                            
    {
        /* 8-bit Counter */
        uint8 count8 = 0u;
        /* Current Row Tracker */
        int8 currentRow;
        uint8 fullChars;
        uint8 remainingPixels;

        /* Number of full characters to draw */
        fullChars = value / Display_CHARACTER_HEIGHT;

        /* Number of remaining pixels to draw */
        remainingPixels = value % Display_CHARACTER_HEIGHT;

        /* Put Cursor at start position */
        Display_Position(row, column);

        /* Make sure the bar graph fits inside the space allotted */
        if(fullChars >= maxCharacters)
        {
            fullChars = maxCharacters;
        }

        /*  Write full characters */
        while(count8 < fullChars)
        {
            Display_WriteData(Display_CUSTOM_7);

            count8++;

            /* Each pass through, move one row higher */
            if((((int8) row) - ((int8) count8)) >= 0)
            {
                Display_Position(row - count8, column);
            }
            else
            {
                break;
            }
        }

        if(((((int8) row) - ((int8) count8)) >= 0) && (fullChars < maxCharacters))
        {
            /* Write remaining pixels */
            if(remainingPixels == 0u)
            {
                Display_WriteData((uint8) ' ');
            }
            else
            {
                Display_WriteData(remainingPixels - 1u);
            }

            currentRow = ((int8) row) - ((int8) count8) - 1;

            if(currentRow >= 0)
            {
                /* Move up one row and fill with whitespace till top of bar graph */
                for(count8 = 0u; count8 < (maxCharacters - fullChars - 1u); count8++)
                {
                    Display_Position((uint8)currentRow, column);
                    Display_WriteData((uint8) ' ');
                    currentRow --;
                }
            }
        }
    }

#endif /* Display_CUSTOM_CHAR_SET == Display_VERTICAL_BG */


/* [] END OF FILE */
