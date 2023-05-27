#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n); // считываем длину массива
    int arr[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // считываем сам массив
    }
    k = n / 2; //вычисляем значение k самого массива (N/2)
    for (int i = k; i < n; i++) {
        printf("%d ", arr[i]); //  выводим элементы второй половины от k до n-1
    }
    for (int i = 0; i < k; i++) {
        printf("%d ", arr[i]); // выводим элементы первой половины от 0 до k-1
    }
    return 0;
}