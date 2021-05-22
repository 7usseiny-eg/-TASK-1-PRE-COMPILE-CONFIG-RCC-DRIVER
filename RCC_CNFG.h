/********************************************** 
* Module: Prototype Functions
*
* File Name: RCC_CNFG.h
*
* Description: Header File for RCC_CNFG
*
* LAYER: MCAL
*
* Author: Omar El Hussein

**********************************************/

#ifndef RCC_CNFG_H_
#define RCC_CNFG_H_

#include "RCC.h"

#define HSI 0
#define HSE 1
#define PLL 2

#define RC 0
#define CRYSTAL 1

// SETTING THE SYS CLOCK

#define SYSCLK HSI // CAN BE CHANGED TO HSI/HSE/PLL
#define PLLCLK HSE // CAN BE CHANGED TO HSI/HSE
#define HSECLK RC // CAN BE CHANGED TO RC/CRYSTAL

/* PLL VALUES */
/* CHECK REFERENCE MANUAL FOR M, Q, P, N VALUES RESTRICTIONS */
// VERY IMPORTANT!
#define NVALUE 53
#define MVALUE 2
#define PVALUE 2
#define QVALUE 2

/* PRESCALER CONFIG */
#define AHBPRESCALER 1 // Can take 1,2,4, 8, 16, 64, 128, 256, 512
#define APB1PRESCALER 2 // Can take 1, 2, 4, 8, 16
#define APB2PRESCALER 2  // Can take 1, 2, 4, 8, 16

#endif
