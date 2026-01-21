# STM32_LED_NonBlocking_Framework
Non-blocking LED control on STM32 using hardware timers, EXTI interrupts, and a state machine architecture. Designed using STM32CubeIDE with clean, modular code.
# STM32 Non-Blocking LED Control using Timer & Interrupts

## Overview
This project demonstrates a **non-blocking LED control system** on an STM32 microcontroller using **hardware timers and interrupts** instead of software delays like `HAL_Delay()`.

A push button configured with an **external interrupt (EXTI)** is used to switch between different LED operating modes using a **state machine**.  
The project is developed using **STM32CubeIDE** and follows clean, modular embedded design practices.



## Hardware Used
- STM32F103C8 (Blue Pill)
- On-board LED (PC13)
- Push Button (PA0)
- ST-Link Programmer
- USB Cable



## Features
- Non-blocking LED control (no `HAL_Delay`)
- Timer-based periodic interrupt
- Button interrupt using EXTI
- State machine based LED modes
- Modular and readable code structure



## LED Operating Modes
- Slow Blink
- Fast Blink
- LED ON
- LED OFF

Each button press switches the LED to the next mode.



## Peripherals Used
- GPIO
- TIM2 (Timer)
- EXTI (External Interrupt)
- NVIC (Interrupt Controller)


## Pin Configuration

| Function | STM32 Pin |
|--------|-----------|
| LED | PC13 |
| Button | PA0 |


