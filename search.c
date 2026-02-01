//6.	Store ‘n’ numbers (integers or real) in an array.  Conduct a linear search for a given number and report success or failure in the form of a suitable message.

#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = 1;
            break;
        }
    }

    if(found == 1)
        printf("Element found at position %d", i + 1);
    else
        printf("Element not found");

    return 0;
}
