#include <stdio.h>
#include <limits.h>

void swap_columns(int matrix[][10], int rows, int col1, int col2);

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]); //ввод чисел
        }
    }

    int min_sum = INT_MAX, max_sum = INT_MIN;
    int min_col_index = 0, max_col_index = 0;
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += matrix[i][j]; // находим сумму значения в столбце
        }
        if (sum < min_sum) {
            min_sum = sum;
            min_col_index = j; // обновляем минимальную сумму
        }
        if (sum > max_sum) {
            max_sum = sum;
            max_col_index = j; // обновляем максимальную сумму 
        }
    }

    swap_columns(matrix, n, min_col_index, max_col_index);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]); // выводим массив
        }
        printf("\n"); 
    }

    return 0;
}
void swap_columns(int matrix[][10], int rows, int col1, int col2) {
    for (int i = 0; i < rows; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp; // в каждой строке меняем местами значения из столбца с максим и миним суммой.
    }
}

