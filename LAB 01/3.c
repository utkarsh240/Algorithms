/*program: Write a program to read ‘n’ integers from a disc file that must contain
some duplicate values and store them into an array. Perform the following operations on the
array.

a) Find out the total number of duplicate elements.
b) Find out the most repeating element in the array.*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int n, i, j, temp, count=0, max=0, max_element;
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
        count=0;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            max_element=arr[i];
        }
    }
    printf("The most repeating element is: %d\n", max_element);
    return 0;
}