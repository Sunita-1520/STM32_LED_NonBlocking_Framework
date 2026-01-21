#include "led_app.h"
#include "stm32f0xx_hal.h"

extern TIM_HandleTypeDef htim14;  // TIM14 for F030
extern uint32_t ledTick;

static LedMode_t ledMode = LED_SLOW;

void LED_Init(void)
{
    HAL_TIM_Base_Start_IT(&htim14);  // start TIM14 interrupt
}

void LED_NextMode(void)
{
    ledMode++;
    if (ledMode > LED_OFF)
        ledMode = LED_SLOW;
}

void LED_Task(void)
{
    static uint32_t lastTick = 0;

    if (lastTick == ledTick)
        return;

    lastTick = ledTick;

    switch (ledMode)
    {
        case LED_SLOW:
        case LED_FAST:
            HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
            break;
        case LED_ON:
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
            break;
        case LED_OFF:
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
            break;
    }
}
