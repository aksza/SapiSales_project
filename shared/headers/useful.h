//
// Created by Aksza on 2/23/2022.
//

#ifndef SAPISALES_PROJECT_USEFUL_H
#define SAPISALES_PROJECT_USEFUL_H

#include <sys/utime.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define FILE_IN "input.txt"
#define MAX_USERS 100
#define MAX_PRODUCTS 100000000
#define STACK_CAPACITY 100

#define hiba(L,name){if(L==NULL){ printf("ERROR IN %s",name); exit(-1);}}
#define CON "CON"
#define FILE_IN_USERS_PRODUCTS "data.txt"
#define FILE_IN_USERS "users.txt"
#define FILE_OUT "output.txt"

static int numberOfUsers = 0;
static long long numberOfProducts = 0;

#endif //SAPISALES_PROJECT_USEFUL_H
