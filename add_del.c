//2.	Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position of ‘a1’ and also delete an element from jth position of ‘a1’.
#include <stdio.h>
int main() {
    int n, i, j, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int al[100];
    printf("Enter %d elements for array:", n);
    for (k = 0; k < n; k++)
        scanf("%d", &al[k]);
    printf("Enter a position 0-%d : ", n);
    scanf("%d", &i);
    printf("Enter the number to add at position %d: ", i);
    scanf("%d", &j);
    for (k = n; k > i; k--)
        al[k] = al[k - 1];
    al[i] = j;
    n++;
    for (k = 0; k < n; k++)
        printf("%d ", al[k]);
    printf("\nEnter position to delete (0-%d): ", n - 1);
    scanf("%d", &i);
    for (k = i; k < n - 1; k++)
        al[k] = al[k + 1];
    n--;
    for (k = 0; k < n; k++)
        printf("%d ", al[k]);
    return 0;
}
