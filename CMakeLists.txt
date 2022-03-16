cmake_minimum_required(VERSION 3.20)
project(SapiSales_project C)

set(CMAKE_C_STANDARD 11)

add_executable(SapiSales_project sapi_sales/src/main.c sapi_sales/headers/manager/lab2.h sapi_sales/headers/manager/lab_manager.h sapi_sales/headers/models/product.h sapi_sales/headers/models/user.h sapi_sales/src/manager/lab2.c sapi_sales/src/manager/lab_manager.c sapi_sales/src/models/product.c sapi_sales/src/models/user.c shared/headers/errors.h shared/headers/messages.h shared/headers/useful.h shared/src/errors.c shared/src/messages.c sapi_sales/src/manager/lab3.c sapi_sales/headers/manager/lab3.h sapi_sales/headers/models/user_array.h sapi_sales/src/models/user_array.c)

include_directories(
        sapi_sales/headers/manager
        sapi_sales/headers/models
        shared/headers
)