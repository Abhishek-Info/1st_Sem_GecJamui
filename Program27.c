#include <stdio.h>
int main() {
    int i, j;
    int matrix[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
