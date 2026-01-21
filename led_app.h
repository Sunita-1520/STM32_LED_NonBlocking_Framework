/*
 * led_app.h
 *
 *  Created on: Jan 21, 2026
 *      Author: sunita shinde
 */

#ifndef LED_APP_H
#define LED_APP_H

typedef enum
{
    LED_SLOW,
    LED_FAST,
    LED_ON,
    LED_OFF
} LedMode_t;

void LED_Init(void);
void LED_Task(void);
void LED_NextMode(void);

#endif
