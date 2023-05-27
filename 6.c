#include <stdlib.h>

int abs_arr(int *arr, int n) {
    int count = 0;
    int *p = arr; // указатель на начало массива
    while (p < arr + n) { // пока не достигнут конец массива
        if (*p < 0) {
            *p = abs(*p); // заменяем отрицательный элемент на его модуль
            count++; // увеличиваем счетчик замен
        }
        p++; // переходим к следующему элементу массива
    }
    return count; // возвращаем количество произведенных замен
}
int main () {
    int arr[5] = {10, -93, 22, 75, 12};
    printf("%d\n", abs_arr(arr, 5));
    for (int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}