#include <stdio.h>

int arraysum(int array[], int limit);

int main() {
    int limit;
    
    printf("Enter the limit of the array: ");
    scanf("%d", &limit);
    
    int array[limit];
    
    arraysum(array, limit);
    
    return 0;
}

int arraysum(int array[], int limit) {
    int sum = 0;
    int i;
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < limit; i++) {
        scanf("%d", &array[i]);
        sum += array[i]; 
    }
    
    printf("The sum of array elements = %d\n", sum);
    return sum;
}
