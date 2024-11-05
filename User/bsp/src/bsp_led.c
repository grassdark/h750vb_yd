#include "bsp.h"

/**
  * @brief  led初始化
  * @note   初始化后led灭
  * @param  none
  * @retval none
  */
void bsp_led_init(void)
{
	bsp_led_off(1);
	bsp_led_off(2);
	bsp_led_off(3);
	bsp_led_off(4);
}
/**
  * @brief  点亮指定的LED指示灯
  * @param  led_num LED序号
  * @retval none
  */
void bsp_led_on(uint8_t led_num)
{
	if (1 == led_num) {
		HAL_GPIO_WritePin(LED1_GPIO_PORT, LED1_GPIO_PIN, GPIO_PIN_SET);
	} else if (2 == led_num) {
		HAL_GPIO_WritePin(LED2_GPIO_PORT, LED2_GPIO_PIN, GPIO_PIN_SET);
	} else if (3 == led_num) {
		HAL_GPIO_WritePin(LED3_GPIO_PORT, LED3_GPIO_PIN, GPIO_PIN_SET);
	} else if (4 == led_num) {
		HAL_GPIO_WritePin(LED4_GPIO_PORT, LED4_GPIO_PIN, GPIO_PIN_SET);
	}
}
/**
  * @brief  熄灭指定的LED指示灯
  * @param  led_num LED序号
  * @retval none
  */
void bsp_led_off(uint8_t led_num)
{
	if (1 == led_num) {
		HAL_GPIO_WritePin(LED1_GPIO_PORT, LED1_GPIO_PIN, GPIO_PIN_RESET);
	} else if (2 == led_num) {
		HAL_GPIO_WritePin(LED2_GPIO_PORT, LED2_GPIO_PIN, GPIO_PIN_RESET);
	} else if (3 == led_num) {
		HAL_GPIO_WritePin(LED3_GPIO_PORT, LED3_GPIO_PIN, GPIO_PIN_RESET);
	} else if (4 == led_num) {
		HAL_GPIO_WritePin(LED4_GPIO_PORT, LED4_GPIO_PIN, GPIO_PIN_RESET);
	}
}
/**
  * @brief  翻转指定的LED指示灯
  * @param  led_num LED序号
  * @retval none
  */
void bsp_led_toggle(uint8_t led_num)
{
	if (1 == led_num) {
		HAL_GPIO_TogglePin(LED1_GPIO_PORT, LED1_GPIO_PIN);
	} else if (2 == led_num) {
		HAL_GPIO_TogglePin(LED2_GPIO_PORT, LED2_GPIO_PIN);
	} else if (3 == led_num) {
		HAL_GPIO_TogglePin(LED3_GPIO_PORT, LED3_GPIO_PIN);
	} else if (4 == led_num) {
		HAL_GPIO_TogglePin(LED4_GPIO_PORT, LED4_GPIO_PIN);
	}
}
