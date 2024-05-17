#include <stdio.h>
main() 
{
    int n = 10,matrix[n][n],num = 1, row, col,layer,i;

    for (layer = 0; layer < (n + 1) / 2; layer++) {
        int end = n - 1 - layer;
        for (i = layer; i < end; i++) {
            matrix[layer][i] = num++;
        }
        for (i = layer; i < end; i++) {
            matrix[i][end] = num++;
        }
        for (i = end; i > layer; i--) {
            matrix[end][i] = num++;
        }
        for (i = end; i > layer; i--) {
            matrix[i][layer] = num++;
        }
    }
    if (n % 2 == 1) {
        matrix[n / 2][n / 2] = num;
    }

    for (row = 0; row < n; row++) {
        for (col = 0; col < n; col++) {
            printf("%3d ", matrix[row][col]);
        }
        printf("\n");
    }

   
}

