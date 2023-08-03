/*Given an array arr[] of size N, find the prefix sum of the array. A prefix
sum array is another array prefixSum[] of the same size, such that the value of prefixSum[i] is
arr[0] + arr[1] + arr[2] . . . arr[i].*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, j, temp, count=0, max=0, max_element;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], prefixSum[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    prefixSum[0]=arr[0];
    for(i=1; i<n; i++)
    {
        prefixSum[i]=prefixSum[i-1]+arr[i];
    }
    printf("The prefix sum array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", prefixSum[i]);
    }
    printf("\n");
    return 0;
}
