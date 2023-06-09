/*
 * [Warning!] This file is auto-generated by pika compiler.
 * Do not edit it manually.
 * The source code is *.pyi file.
 * More details: 
 * English Doc:
 * https://pikadoc.readthedocs.io/en/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 * Chinese Doc:
 * https://pikadoc.readthedocs.io/zh/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 */

#ifndef __random__H
#define __random__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New_random(Args *args);

void random___init__(PikaObj *self);
int random_randint(PikaObj *self, int a, int b);
pika_float random_random(PikaObj *self);
int random_randrange(PikaObj *self, int start, int stop, int step);
PikaObj* random_seed(PikaObj *self, int a);
pika_float random_uniform(PikaObj *self, pika_float a, pika_float b);

#endif
