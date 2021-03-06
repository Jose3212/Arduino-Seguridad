/*******************************************************************************
* File Name: DistOutHCSRO4.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_DistOutHCSRO4_H) /* Pins DistOutHCSRO4_H */
#define CY_PINS_DistOutHCSRO4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "DistOutHCSRO4_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 DistOutHCSRO4__PORT == 15 && ((DistOutHCSRO4__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    DistOutHCSRO4_Write(uint8 value);
void    DistOutHCSRO4_SetDriveMode(uint8 mode);
uint8   DistOutHCSRO4_ReadDataReg(void);
uint8   DistOutHCSRO4_Read(void);
void    DistOutHCSRO4_SetInterruptMode(uint16 position, uint16 mode);
uint8   DistOutHCSRO4_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the DistOutHCSRO4_SetDriveMode() function.
     *  @{
     */
        #define DistOutHCSRO4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define DistOutHCSRO4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define DistOutHCSRO4_DM_RES_UP          PIN_DM_RES_UP
        #define DistOutHCSRO4_DM_RES_DWN         PIN_DM_RES_DWN
        #define DistOutHCSRO4_DM_OD_LO           PIN_DM_OD_LO
        #define DistOutHCSRO4_DM_OD_HI           PIN_DM_OD_HI
        #define DistOutHCSRO4_DM_STRONG          PIN_DM_STRONG
        #define DistOutHCSRO4_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define DistOutHCSRO4_MASK               DistOutHCSRO4__MASK
#define DistOutHCSRO4_SHIFT              DistOutHCSRO4__SHIFT
#define DistOutHCSRO4_WIDTH              1u

/* Interrupt constants */
#if defined(DistOutHCSRO4__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in DistOutHCSRO4_SetInterruptMode() function.
     *  @{
     */
        #define DistOutHCSRO4_INTR_NONE      (uint16)(0x0000u)
        #define DistOutHCSRO4_INTR_RISING    (uint16)(0x0001u)
        #define DistOutHCSRO4_INTR_FALLING   (uint16)(0x0002u)
        #define DistOutHCSRO4_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define DistOutHCSRO4_INTR_MASK      (0x01u) 
#endif /* (DistOutHCSRO4__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define DistOutHCSRO4_PS                     (* (reg8 *) DistOutHCSRO4__PS)
/* Data Register */
#define DistOutHCSRO4_DR                     (* (reg8 *) DistOutHCSRO4__DR)
/* Port Number */
#define DistOutHCSRO4_PRT_NUM                (* (reg8 *) DistOutHCSRO4__PRT) 
/* Connect to Analog Globals */                                                  
#define DistOutHCSRO4_AG                     (* (reg8 *) DistOutHCSRO4__AG)                       
/* Analog MUX bux enable */
#define DistOutHCSRO4_AMUX                   (* (reg8 *) DistOutHCSRO4__AMUX) 
/* Bidirectional Enable */                                                        
#define DistOutHCSRO4_BIE                    (* (reg8 *) DistOutHCSRO4__BIE)
/* Bit-mask for Aliased Register Access */
#define DistOutHCSRO4_BIT_MASK               (* (reg8 *) DistOutHCSRO4__BIT_MASK)
/* Bypass Enable */
#define DistOutHCSRO4_BYP                    (* (reg8 *) DistOutHCSRO4__BYP)
/* Port wide control signals */                                                   
#define DistOutHCSRO4_CTL                    (* (reg8 *) DistOutHCSRO4__CTL)
/* Drive Modes */
#define DistOutHCSRO4_DM0                    (* (reg8 *) DistOutHCSRO4__DM0) 
#define DistOutHCSRO4_DM1                    (* (reg8 *) DistOutHCSRO4__DM1)
#define DistOutHCSRO4_DM2                    (* (reg8 *) DistOutHCSRO4__DM2) 
/* Input Buffer Disable Override */
#define DistOutHCSRO4_INP_DIS                (* (reg8 *) DistOutHCSRO4__INP_DIS)
/* LCD Common or Segment Drive */
#define DistOutHCSRO4_LCD_COM_SEG            (* (reg8 *) DistOutHCSRO4__LCD_COM_SEG)
/* Enable Segment LCD */
#define DistOutHCSRO4_LCD_EN                 (* (reg8 *) DistOutHCSRO4__LCD_EN)
/* Slew Rate Control */
#define DistOutHCSRO4_SLW                    (* (reg8 *) DistOutHCSRO4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define DistOutHCSRO4_PRTDSI__CAPS_SEL       (* (reg8 *) DistOutHCSRO4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define DistOutHCSRO4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) DistOutHCSRO4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define DistOutHCSRO4_PRTDSI__OE_SEL0        (* (reg8 *) DistOutHCSRO4__PRTDSI__OE_SEL0) 
#define DistOutHCSRO4_PRTDSI__OE_SEL1        (* (reg8 *) DistOutHCSRO4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define DistOutHCSRO4_PRTDSI__OUT_SEL0       (* (reg8 *) DistOutHCSRO4__PRTDSI__OUT_SEL0) 
#define DistOutHCSRO4_PRTDSI__OUT_SEL1       (* (reg8 *) DistOutHCSRO4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define DistOutHCSRO4_PRTDSI__SYNC_OUT       (* (reg8 *) DistOutHCSRO4__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(DistOutHCSRO4__SIO_CFG)
    #define DistOutHCSRO4_SIO_HYST_EN        (* (reg8 *) DistOutHCSRO4__SIO_HYST_EN)
    #define DistOutHCSRO4_SIO_REG_HIFREQ     (* (reg8 *) DistOutHCSRO4__SIO_REG_HIFREQ)
    #define DistOutHCSRO4_SIO_CFG            (* (reg8 *) DistOutHCSRO4__SIO_CFG)
    #define DistOutHCSRO4_SIO_DIFF           (* (reg8 *) DistOutHCSRO4__SIO_DIFF)
#endif /* (DistOutHCSRO4__SIO_CFG) */

/* Interrupt Registers */
#if defined(DistOutHCSRO4__INTSTAT)
    #define DistOutHCSRO4_INTSTAT            (* (reg8 *) DistOutHCSRO4__INTSTAT)
    #define DistOutHCSRO4_SNAP               (* (reg8 *) DistOutHCSRO4__SNAP)
    
	#define DistOutHCSRO4_0_INTTYPE_REG 		(* (reg8 *) DistOutHCSRO4__0__INTTYPE)
#endif /* (DistOutHCSRO4__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_DistOutHCSRO4_H */


/* [] END OF FILE */
