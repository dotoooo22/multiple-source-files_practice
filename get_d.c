#include "h.h"

void get_d(int size, struct BMI* bmi) {
  

    for (int i = 0; i < size; i++) {
        printf("�̸�: ");
        scanf("%s", (bmi + i)->name);
        printf("Ű �Է�(m����) : ");
        scanf("%f", &(bmi+i)->height);
        printf("������ �Է�(kg����) :");
        scanf("%f", &(bmi+i)->weight);

        (bmi + i)->my_bmi = ((bmi + i)->height) * ((bmi + i)->height);
        (bmi + i)->my_bmi = ((bmi + i)->weight) / (bmi + i)->my_bmi;
        printf("%f\n", (bmi + i)->my_bmi);
    }
    return size;
}