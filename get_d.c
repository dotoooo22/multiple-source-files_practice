#include "h.h"

void get_d(int size, struct BMI* bmi) {
  

    for (int i = 0; i < size; i++) {
        printf("이름: ");
        scanf("%s", (bmi + i)->name);
        printf("키 입력(m단위) : ");
        scanf("%f", &(bmi+i)->height);
        printf("몸무게 입력(kg단위) :");
        scanf("%f", &(bmi+i)->weight);

        (bmi + i)->my_bmi = ((bmi + i)->height) * ((bmi + i)->height);
        (bmi + i)->my_bmi = ((bmi + i)->weight) / (bmi + i)->my_bmi;
        printf("%f\n", (bmi + i)->my_bmi);
    }
    return size;
}