cmake_minimum_required(VERSION 3.20)
project(SapiSales_project C)

set(CMAKE_C_STANDARD 11)

add_executable(SapiSales_project
        sapi_sales/src/main.c
        sapi_sales/headers/manager/lab2.h
        sapi_sales/headers/manager/lab_manager.h
        sapi_sales/headers/models/product.h
        sapi_sales/headers/models/user.h
        sapi_sales/src/manager/lab2.c
        sapi_sales/src/manager/lab_manager.c
        sapi_sales/src/models/product.c
        sapi_sales/src/models/user.c
        shared/headers/errors.h
        shared/headers/messages.h
        shared/headers/useful.h
        shared/src/errors.c
        shared/src/messages.c
        sapi_sales/src/manager/lab3.c
        sapi_sales/headers/manager/lab3.h
        sapi_sales/headers/array/user_array.h
        sapi_sales/src/array/user_array.c
        sapi_sales/src/manager/lab2_3.c
        sapi_sales/headers/manager/lab2_3.h
        sapi_sales/src/manager/lab4.c
        sapi_sales/headers/manager/lab4.h
        sapi_sales/headers/array/product_array.h
        sapi_sales/src/array/product_array.c
        sapi_sales/headers/stack/product_stack.h
        sapi_sales/src/stack/product_stack.c
        sapi_sales/headers/manager/lab5.h
        sapi_sales/src/manager/lab5.c sapi_sales/headers/queue/user_queue.h sapi_sales/src/queue/user_queue.c sapi_sales/headers/manager/lab8.h sapi_sales/src/manager/lab8.c)

include_directories(
        sapi_sales/headers/manager
        sapi_sales/headers/models
        sapi_sales/headers/array
        sapi_sales/headers/stack
        sapi_sales/headers/queue
        shared/headers
)