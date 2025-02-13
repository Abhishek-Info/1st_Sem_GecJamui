#include <stdio.h>
int main() {
    int matrix1[3][3] = {{10, 20, 30},{40, 50, 60},{70, 80, 90} };
    int matrix2[3][3] = {{10, 10, 10},{20, 20, 20},{30, 30, 30} };
    int i, j;
    printf("Addition of 2 matrices = \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
