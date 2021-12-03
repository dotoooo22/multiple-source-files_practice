#include "h.h"


int main(void)
{
   // int size=0;
    struct BMI* bmi;
    FILE* f;
    int size = 0;
    printf("데이터입력 size : ");
    scanf("%d", &size);
    bmi = (struct BMI*)malloc(sizeof(struct BMI) * size);
    
    get_d(size, bmi);
    sort(size, bmi);
    file_print(size, bmi);

    return 0;

}