#include "h.h"

void sort(int size, struct BMI* bmi) {

    struct BMI temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (bmi[i].my_bmi > bmi[j].my_bmi) {
           /*     memcpy(&temp, (bmi + i), sizeof(struct BMI));
                memcpy((bmi + i), (bmi + j), sizeof(struct BMI));
                memcpy((bmi + j), &temp, sizeof(struct BMI));*/
                temp = bmi[i];
                    bmi[i] = bmi[j];
                    bmi[j] = temp;
            }
        }
    }

}