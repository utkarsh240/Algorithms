/*Aim of the program: Write a function to ROTATE_RIGHT(p1, p2 ) right an array for first p2
elements by 1 position using EXCHANGE(p, q) function that swaps/exchanges the numbers p &
q. Parameter p1 be the starting address of the array and p2 be the number of elements to be
rotated.*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void exchange(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

void rotate_right(int *p1, int p2)
{
    int i;
    for(i=0; i<p2; i++)
    {
        exchange(p1, p1+1);
        p1++;
    }
}

int main()
{
    int n, i, j, temp, p2;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of elements to be rotated: ");
    scanf("%d", &p2);
    rotate_right(arr, p2);
    printf("The rotated array is: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}