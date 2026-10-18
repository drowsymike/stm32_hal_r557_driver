/**
 * @file r557_driver_conf.h
 * @author Mike (michael.a.strangewood@gmail.com)
 * @version 0.3
 * @date 2026-02-04
 * 
 */

#ifndef r557_driver_conf_h
#define r557_driver_conf_h

/*--Includes-----------------------------------------------------------------*/

#include "stm32f4xx_hal.h"
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
#include <errno.h>

/*--Extern objects and defs of it for driver---------------------------------*/

extern UART_HandleTypeDef huart2;
#define uart_port huart2
extern UART_HandleTypeDef uart_debug_port;
#define uart_debug_port huart1

/*--Interface of defining the global project values--------------------------*/
/*
    here you can use interface of library
    for now there's no any file for implementations of __weak functions, but
    you have an ability to add your own implementation of funcs:
    1. `void debug_callback(conast uint8_t* mesg)`
*/

#define r557_frame_size 0
#define uart_timeout 100
#define __debug 1 

/*---------------------------------------------------------------------------*/

#endif