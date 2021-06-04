/**
 * @file pwm_breath_led.c
 * @brief 
 * 
 * Copyright (c) 2021 Bouffalolab team
 * 
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 * 
 */
#include "hal_pwm.h"
#include "hal_gpio.h"

static void pwm_irq_callback(struct device *dev, void *args, uint32_t size, uint32_t state)
{
    if(state == PWM_EVENT_COMPLETE)
    {
        MSG("pwm complete\r\n");
        pwm_channel_stop(dev);
    }
}
int main(void)
{

    bflb_platform_init(0);

    pwm_register(PWM_CH2_INDEX, "pwm", DEVICE_OFLAG_RDWR); 

    struct device *pwm = device_find("pwm");

    if (pwm)
    {
        PWM_DEV(pwm)->frequency = 1000000;
        PWM_DEV(pwm)->dutycycle = 50;
        device_open(pwm, DEVICE_OFLAG_INT_TX);
        device_set_callback(pwm,pwm_irq_callback);
        pwm_it_pulse_count_update(pwm,10000);
        pwm_channel_start(pwm);
    }

    while (1)
    {
    }

    BL_CASE_SUCCESS;
}
