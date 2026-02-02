//1.	Find sum of all array elements using recursion.
# include <stdio.h>
int sum(int arr[],int n);
int sum(int arr[],int n){
    if(n==0)
        return 0;
    else 
        return arr[n-1]+sum(arr,n-1);
}
int main(){
    int n;
    printf("Enter the number of elements.");
    scanf("%d",&n);
    int arr[n];
    printf("Array of %d elements: ",n);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int s= sum(arr,n);
    printf("Sum of array elements: %d\n",s);
    return 0;
}