#include <stdio.h>


struct Person
{
	int age; // возраст
	char name[30]; // имя
};


float averageAge(struct Person arr[], int n) { //создаем функцию для вычисления среднего возраста
    float total = 0;
    for (int i=0; i<n; i++) {
        total += arr[i].age; // суммируем весь заданный возраст
    }
    return total / n; // делим вусь суммированный возраст на заданное количество 
};


int main() {
    int n = 3; // количество людей
    struct Person arr[3] = {{20, "Egor"}, {32, "Andrey"}, {18, "Monkey"}}; // да, человека зовут обезьяна
    float av = averageAge(arr, n); // возвращаем значение функции, передаем в переменную 
}
