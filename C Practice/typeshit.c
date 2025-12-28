#include <stdio.h>

int findMaxInArray(int arr[], int size){
    int max = 0;

    for (int i = 0; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int max = findMaxInArray(arr, 5);
    printf("%d", max);
    return 0;
}
