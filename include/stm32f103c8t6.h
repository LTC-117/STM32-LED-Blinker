#ifndef STM32F103X8T6_H
#define STM32F103X8T6_H

#include <stdint.h>

/******************************************************************************
    *                           BASE ADDRESSES
******************************************************************************/

//BUS:          APB1
#define TIM2            0x40000000
#define TIM3            0x40000400
#define TIM4            0x40000800
#define TIM5            0x40000C00
#define TIM6            0x40001000
#define TIM7            0x40001400
#define TIM12           0x40001800
#define TIM13           0x40001C00
#define TIM14           0x40002000
#define APB1_RSVD1      0x40002400
#define RTC             0x40002800
#define WWDG            0x40002C00
#define IWDG            0x40003000
#define APB1_RSVD2      0x40003400
#define SPI2_I2S        0x40003800
#define SPI3_I2S        0x40003C00
#define APB1_RSVD3      0x40004000
#define USART2          0x40004400
#define USART3          0x40004800
#define UART4           0x40004C00
#define UART5           0x40005000
#define I2C1            0x40005400
#define I2C2            0x40005800
#define USB_REG         0x40005C00
#define USB_CAN         0x40006000
#define BXCAN1          0x40006800
#define BXCAN2          0x40006400
#define BKP             0x40006C00
#define PWR             0x40007000
#define DAC             0x40007400
#define APB1_RSVD4      0x40007800

//BUS:          APB2
#define AFIO            0x40010000
#define EXTI            0x40010400
#define GPIOA_BASE      0x40010800
#define GPIOB_BASE      0x40010C00
#define GPIOC_BASE      0x40011000
#define GPIOD_BASE      0x40011400
#define GPIOE_BASE      0x40011800
#define GPIOF_BASE      0x40011C00
#define GPIOG_BASE      0x40012000
#define ADC1            0x40012400
#define ADC2            0x40012800
#define TIM1            0x40012C00
#define SPI1            0x40013000
#define TIM8            0x40013400
#define USART1          0x40013800
#define ADC3            0x40013C00
#define APB2_RSVD1      0x40014000
#define TIM9            0x40014C00
#define TIM10           0x40015000
#define TIM11           0x40015400
#define APB2_RSVD2      0x40015400

//BUS:          AHB
#define SDIO            0x40018000
#define AHB_RSVD1       0x40018400
#define DMA1            0x40020000
#define DMA2            0x40020400
#define AHB_RSVD2       0x40020800
#define RCC_BASE        0x40021000
#define AHB_RSVD3       0x40021400
#define FMI             0x40022000
#define CRC             0x40023000
#define AHB_RSVD4       0x40023400
#define ETHERNET        0x40028000
#define AHB_RSVD5       0x40030000
#define USB_OTG_FS      0x50000000
#define FSMC            0xA0000000


/******************************************************************************
    *                           REGISTERS
******************************************************************************/

//RCC REGISTERS:
#define RCC_CR          *(volatile uint32_t *)(RCC_BASE + 0x00)
#define RCC_CFGR        *(volatile uint32_t *)(RCC_BASE + 0x04)
#define RCC_CIR         *(volatile uint32_t *)(RCC_BASE + 0x08)
#define RCC_APB2RSTR    *(volatile uint32_t *)(RCC_BASE + 0x0C)
#define RCC_APB1RSTR    *(volatile uint32_t *)(RCC_BASE + 0x10)
#define RCC_AHBENR      *(volatile uint32_t *)(RCC_BASE + 0x14)
#define RCC_APB2ENR     *(volatile uint32_t *)(RCC_BASE + 0x18)
#define RCC_APB1ENR     *(volatile uint32_t *)(RCC_BASE + 0x1C)
#define RCC_BDCR        *(volatile uint32_t *)(RCC_BASE + 0x20)
#define RCC_CSR         *(volatile uint32_t *)(RCC_BASE + 0x20)


//GPIOx REGISTERS
typedef struct{
    volatile uint32_t CRL;
    volatile uint32_t CRH;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
    volatile uint32_t BRR;
    volatile uint32_t LCKR;
}GPIOx_Type;

#define GPIOA           ((GPIOx_Type *) GPIOA_BASE)
#define GPIOB           ((GPIOx_Type *) GPIOB_BASE)
#define GPIOC           ((GPIOx_Type *) GPIOC_BASE)
#define GPIOD           ((GPIOx_Type *) GPIOD_BASE)
#define GPIOE           ((GPIOx_Type *) GPIOE_BASE)
#define GPIOF           ((GPIOx_Type *) GPIOF_BASE)
#define GPIOG           ((GPIOx_Type *) GPIOG_BASE)

#endif
