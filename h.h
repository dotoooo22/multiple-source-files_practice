#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BMI {
    char name[10];
    float height;
    float weight;
    float my_bmi;
};

void get_d(int size, struct BMI* bmi);
void sort(int size, struct BMI* bmi);
void file_print( int size, struct BMI* bmi);