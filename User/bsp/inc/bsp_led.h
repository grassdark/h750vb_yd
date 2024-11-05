#ifndef __BSP_LED_H
#define __BSP_LED_H

#define LED1_GPIO_PORT    GPIOA
#define LED2_GPIO_PORT    GPIOA
#define LED3_GPIO_PORT    GPIOA
#define LED4_GPIO_PORT    GPIOB
#define LED1_GPIO_PIN     GPIO_PIN_13
#define LED2_GPIO_PIN     GPIO_PIN_14
#define LED3_GPIO_PIN     GPIO_PIN_15
#define LED4_GPIO_PIN     GPIO_PIN_4

/* 供外部调用的函数声明 */
void bsp_led_init(void);
void bsp_led_on(uint8_t led_num);
void bsp_led_off(uint8_t led_num);
void bsp_led_toggle(uint8_t led_num);

#endif
