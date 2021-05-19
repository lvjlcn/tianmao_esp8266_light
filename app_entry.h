/*
 * Copyright (C) 2015-2018 Alibaba Group Holding Limited
 */
#ifndef __APP_ENTRY_H__
#define __APP_ENTRY_H__

#include "aos/kernel.h"

#define GPIO_LED_BLUE     12   // gpio index
#define GPIO_LED_GREEN    13
#define GPIO_LED_RED      15

extern gpio_dev_t  led_blue;
extern gpio_dev_t  led_red;
extern gpio_dev_t  led_green;



typedef struct {
    int argc;
    char **argv;
}app_main_paras_t;

int linkkit_main(void *paras);
#endif
