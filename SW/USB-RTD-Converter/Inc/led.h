#include "main.h"
#include "stm32f1xx_hal.h"
#include "cmsis_os.h"
#include "gpio.h"

#define LED_DELAY 1000
void taskLED(void *pvParameters);
void init_LED(void);
