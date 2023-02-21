cmake_minimum_required(VERSION 3.24)

###### PROJECT INFO
set(CMAKE_CXX_STANDARD 23)
project(Com
        VERSION 0.1
        DESCRIPTION app
        HOMEPAGE_URL www???com
        LANGUAGES CXX)

#add_compile_options(-fmodules)
add_compile_options(-fmodules-ts)

#add_compile_options(-xc++ -system-header iostream)

#add_compile_options(-stdlib=libc++)
#add_compile_options(-fbuiltin-module-map)
#add_compile_options(-fimplicit-module-maps)
#add_compile_options(-fprebuilt-module-path=${PREBUILT_MODULE_PATH})

add_executable(${PROJECT_NAME} testModule.cc testSecondModule.cpp main.cpp )
#add_library(${PROJECT_NAME} SHARED com/testLib.cpp)