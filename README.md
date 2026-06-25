# Embedded Firmware Assignment - NOSH

This repository contains the solutions for the Embedded Firmware Assignment completed using STM32F103 (Blue Pill) and C programming.

## Repository Structure

```
Embedded_Assignment_NOSH/
│
NOSH/
├── Q1-BLINK_LED/
│   ├── Core/
│   ├── Drivers/
│   ├── MDK-ARM/
│   ├── NOSH.ioc
│   
│
├── Q2-C_PROGM/
│   ├── q2.c
│   
│
└── README.md
```

---

# Question 1 - LED Blink Control Using Push Button

## Description

This project demonstrates LED control using an external interrupt (EXTI) and Timer Interrupt on the STM32F103 Blue Pill development board.

Each press of the push button changes the LED operating mode.

### Features

- External Interrupt (EXTI)
- Timer Interrupt (TIM2)
- Software Debouncing
- State Machine Implementation
- Dynamic Timer Reload

### LED Sequence

| Button Press | LED Operation |
|--------------|---------------|
| Initial      | LED OFF |
| Press 1      | Slow Blink (0.5 Hz) |
| Press 2      | Medium Blink (1 Hz) |
| Press 3      | Fast Blink |
| Press 4      | Back to LED OFF |

---

## Hardware Used

- STM32F103C8T6 Blue Pill
- Push Button
- LED
- USB-TLT
- Keil uVision 5
- STM32CubeMX

---

## Software Used

- Keil MDK ARM
- STM32CubeMX
- STM32 HAL Library

---

## Assumptions

- Push button is connected to PA0.
- LED is connected to PC13.
- Internal Pull-Up resistor is enabled.
- Software debounce time is 300 ms.
- TIM2 is used for LED blinking.

---

## Result Video

📹 **Demo Video**

https://photos.app.goo.gl/Ykypqx2e58z7RXa37
---------------------------------------------------------------------------------------------------------------------------------------

# Question 2 - C Programming

## Description

This project implements the required C programming assignment using standard C language.

The program demonstrates proper use of:

- Functions
- Conditional Statements
- Loops
- Arrays / Variables
- Standard Input and Output

The solution is written in ANSI C and can be compiled using GCC or any standard C compiler.

---

## Assumptions

- Standard C compiler is used.
- Input is provided through keyboard.
- Program executes in console/terminal.
- No external libraries are required.


## Result Video

📹 **Demo Video**

https://photos.app.goo.gl/SdpMC4RbVSFs5fVg8
------------------------------------------------------------------------------------------------------------------------------

# Technologies Used

- Embedded C
- C Programming
- STM32F103
- STM32 HAL
- Keil MDK
- STM32CubeMX
- GCC

---

# Author

**Prajwal B U**

Electronics and Communication Engineering

GitHub

https://github.com/pbu21

---

# License

This repository is submitted as part of the Embedded Firmware Assignment and is intended for educational purposes only.
