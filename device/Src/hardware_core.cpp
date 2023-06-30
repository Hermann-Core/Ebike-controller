/************************************************************************************* 
 * @file 	 hardware_core.c
 * @date   March, 12 2023
 * @author AWATSA HERMANN
 * @brief	 Hardware core source file
 * 
 *         Contains the definitions of
 *         the core hardware functions
 * ***********************************************************************************
 * @attention
 * 
 #   DATE       |  Version  | revision   |
 -----------------------------------------
 # 2023.03.12   |    1      |  0         |

*************************************************************************************/

/*==================================================================================
|                                 INCLUDES                                
===================================================================================*/
#include "hardware_core.hpp"


/*==================================================================================
|                             FUNCTIONS DEFINITIONS                                
===================================================================================*/

/**
 * @brief Enable an interrupt
 * 
 * @param IRQn interrupt number
 */
void hw_core::irq_enable(IRQn_t IRQn)
{
    if (!__NVIC_GetEnableIRQ(IRQn))
    {
      NVIC_EnableIRQ(IRQn);
    }
}


/**
 * @brief Disable an interrupt
 * 
 * @param IRQn interrupt number
 */
void hw_core::irq_disable(IRQn_t IRQn)
{
    while (__NVIC_GetActive(IRQn))
    {
      /* wait till the interrupt quit active state */
    }
    
    NVIC_DisableIRQ(IRQn);
}


/**
 * @brief Set an interrupt priority
 * 
 * @param IRQn interrupt number
 * @param u8Priority interrupt priority
 */
void hw_core::irq_setPriority(IRQn_t IRQn, u8 priority)
{
  NVIC_SetPriority(IRQn, (u32)priority);
}


/**
 * @brief Clear a pending interrupt
 * 
 * @param IRQn interrupt number
 */
void hw_core::irq_clearPending(IRQn_t IRQn)
{
    if (__NVIC_GetPendingIRQ(IRQn))
    {
      NVIC_ClearPendingIRQ(IRQn);
    }
}


/**
 * @brief disable all global interrupts
 */
void hw_core::disable_all_irq(void)
{
    __disable_irq();
}


/**
 * @brief disable the faults exceptions
 */
void hw_core::disable_fault_irq(void)
{
    __disable_fault_irq();
}


/**
 * @brief Reset the system
 */
__attribute__((noreturn)) void hw_core::systemReset(void)
{
  __NVIC_SystemReset();
}


/*==================================================================================
|                                 END OF FILE                                
===================================================================================*/
