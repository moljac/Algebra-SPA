#!/bin/bash


g++ -v \
    lab-01-01-pico_stub/main.cpp

ls -al

./a.oout


g++ -v \
    lab-01-01-pico_stub/main.cpp \
    -o main_executable

ls -al

./main_executable
