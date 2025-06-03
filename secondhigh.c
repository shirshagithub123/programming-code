#include <stdio.h>
int findSecondHighest(int arr[], int size) {
    int highest = arr[0];
    int secondHighest = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }
    }
    
    return secondHighest;
}
int main() {
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int secondHighest = findSecondHighest(arr, size);

    if (secondHighest == -1) {
        printf("There is no second highest element.\n");
    } else {
        printf("The second highest element is %d\n", secondHighest);
    }

    return 0;
}
