#include <stdio.h>
#include <string.h>

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void printPermutations(char* str, int size) {
    int count[size];
    for(int i = 0; i < size; i++)
        count[i] = 0;

    printf("%s\n", str);

    int i = 0;
    while(i < size) {
        if(count[i] < i) {
            swap((str+i), (str+(i%2)*count[i]));
            printf("%s\n", str);
            count[i]++;
            i = 0;
        } else {
            count[i] = 0;
            i++;
        }
    }
}

int main() {
    char str[] = "ABC";
    int n = strlen(str);
    printPermutations(str, n);
    return 0;
}
