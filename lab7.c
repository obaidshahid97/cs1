#include <stdio.h>

int main() {
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(array) / sizeof(array[0]);
    int i, j, temp, swaps;
    int swapsArray[n-1]; 

    for (i = 0; i < n - 1; i++) {
        swaps = 0;

        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swaps++;
            }
        }

        swapsArray[i] = swaps; 
    }

    for (i = 0; i < n - 1; i++) {
        printf("%d", swapsArray[i]);
    }
    printf("0\n"); 

    return 0;
}
