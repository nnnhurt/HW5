#include <stdio.h>

struct Move
{
	int x;
	int y;
};


struct Move getFinishPoint(struct Move arr[], int n) {
    struct Move sum = {.x = arr[0].x, .y = arr[0].y}; //записываем первое значение в х и первое в у
    for(int i=0; i<n-1; i++) {  // данный цикл суммирует все координаты
        sum.x += arr[i].x;
        sum.y += arr[i].y;
    }
    return sum;
}

int main() {
    struct Move arr[2] = {{5, 2}, {1, 4}}, sum; // присваиваем координаты(любые)
    sum = getFinishPoint(arr, 2);
    printf("%d %d", sum.x, sum.y); 
    return 0;
}