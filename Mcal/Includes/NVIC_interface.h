/*******************************************************************/
/*  Author : Mohammed Gaafar                                       */
/*  Date : 7 / 5 / 2023                                            */
/*  Version : V1.0                                                 */
/*******************************************************************/
#ifndef NVIC_INTERFACE_H
#define NVIC_INTERFACE_H
//Internal Interrupts
#define PEND_SV        -6
#define SYSTICK        -5
////////////////////////////
#define SV_CALL        -4
/////////////////////////
#define MEMORY_MANAGE  -3
#define BUS_FAULT      -2
#define USAGE_FAULT    -1
typedef enum{
    NVIC_WWDG = 0,
    NVIC_PVD = 1,
    NVIC_TAMPER = 2,
    NVIC_RTC = 3,
    NVIC_FLASH = 4,
    NVIC_RCC = 5,
    NVIC_EXTI0 = 6,
    NVIC_EXTI1 = 7,
    NVIC_EXTI2 = 8,
    NVIC_EXTI3 = 9,
    NVIC_EXTI4 = 10,
    NVIC_DMA1_Channel1 = 11,
    NVIC_DMA1_Channel2 = 12,
    NVIC_DMA1_Channel3 = 13,
    NVIC_DMA1_Channel4 = 14,
    NVIC_DMA1_Channel5 = 15,
    NVIC_DMA1_Channel6 = 16,
    NVIC_DMA1_Channel7 = 17,
    NVIC_ADC1_2 = 18,
    NVIC_USB_HP_CAN_TX = 19,
    NVIC_USB_LP_CAN_RX0 = 20,
    NVIC_CAN_RX1 = 21,
    NVIC_CAN_SCE = 22,
    NVIC_EXTI9_5 = 23,
    NVIC_TIM1_BRK = 24,
    NVIC_TIM1_UP = 25,
    NVIC_TIM1_TRG_COM = 26,
    NVIC_TIM1_CC = 27,
    NVIC_TIM2 = 28,
    NVIC_TIM3 = 29,
    NVIC_TIM4 = 30,
    NVIC_I2C1_EV = 31,
    NVIC_I2C1_ER = 32,
    NVIC_I2C2_EV = 33,
    NVIC_I2C2_ER = 34,
    NVIC_SPI1 = 35,
    NVIC_SPI2 = 36,
    NVIC_USART1 = 37,
    NVIC_USART2 = 38,
    NVIC_USART3 = 39,
    NVIC_EXTI15_10 = 40,
    NVIC_RTCAlarm = 41,
    NVIC_USBWakeup = 42,
    NVIC_TIM8_BRK = 43,
    NVIC_TIM8_UP = 44,
    NVIC_TIM8_TRG_COM = 45,
    NVIC_TIM8_CC = 46,
    NVIC_ADC3 = 47,
    NVIC_FSMC = 48,
    NVIC_SDIO = 49,
    NVIC_TIM5 = 50,
    NVIC_SPI3 = 51,
    NVIC_UART4 = 52,
    NVIC_UART5 = 53,
    NVIC_TIM6 = 54,
    NVIC_TIM7 = 55,
    NVIC_DMA2_Channel1 = 56,
    NVIC_DMA2_Channel2 = 57,
    NVIC_DMA2_Channel3 = 58,
    NVIC_DMA2_Channel4_5 = 59
}NVIC_InterruptNumber_t;



ES_t NVIC_Init(void);
ES_t NVIC_EnableInterrupt(u8 Copy_u8InterruptNumber);
ES_t NVIC_DisableInterrupt(u8 Copy_u8InterruptNumber);
ES_t NVIC_SetPendingFlag(u8 Copy_u8InterruptNumber);
ES_t NVIC_ClearPendingFlag(u8 Copy_u8InterruptNumber);
ES_t NVIC_GetActiveFlag(u8 Copy_u8InterruptNumber,u8 *Copy_pu8ActiveFlag);
ES_t NVIC_SetIntPriority(s8 Copy_s8InterruptNumber,u8 Copy_u8GroupPriority,u8 Copy_u8SubPriority);





#endif