# STM32F030 Non-Blocking LED Control using TIM14

## Overview
Non-blocking LED control using TIM14 on STM32F030C6Tx.
Button on PA0 changes LED modes.

## Features
- Timer interrupt (TIM14) for LED toggle
- Button interrupt (PA0 EXTI) to change LED mode
- Non-blocking design
- Modular code (led_app.c/h)

## LED Modes
- Slow Blink
- Fast Blink
- LED ON
- LED OFF

## Hardware
- STM32F030C6Tx
- LED PA5
- Button PA0
- ST-Link / USB programmer

## Author
Sunita Shinde
