/*Write a program to find out the second smallest and second largest
element stored in an array of n integers.
Input: Size of the array is ‘n’ and read ‘n’ number of elements from a disc file.
Output: Second smallest, Second largest*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int n, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The second smallest element is: %d\n", arr[1]);
    printf("The second largest element is: %d\n", arr[n-2]);
    return 0;
}
