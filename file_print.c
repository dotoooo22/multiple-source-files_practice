#include "h.h"

void file_print( int size, struct BMI* bmi) {
    FILE* f;
    f = fopen("print_out.txt", "w");
    
    fprintf(f, "순번   이름   BMI지수\n");

    printf("%d\n", size);
    for (int i = 0; i < size; i++) {
        printf("%d %s %d\n", i + 1, (bmi + i)->name, (int)(bmi + i)->my_bmi);
        fprintf(f, "%d %s %d\n", i+1, (bmi + i)->name, (int)(bmi + i)->my_bmi);
    }
    fclose(f);
}