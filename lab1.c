/*Task no: 1.1
Task name: Insert two numbers sequentially at the last position in an array by
using variables.
Source code:*/
#include <stdio.h>
int main()
{
int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
int i, value_1, value_2, n;
n = sizeof(arr) / sizeof(arr[0]);
printf("Before Insertion \n");
for (i = 0; i < n; i++)
printf("%d ",arr[i]);
printf("\n");
printf("Enter Two Element To Insert at Last Position :\n");
scanf("%d %d",&value_1,&value_2);
arr[n] = value_1;
arr[n + 1] = value_2;
printf("\n");
printf("After Insertion\n");
for (i = 0; i < n + 2; i++)
printf("%d ",arr[i]);
return 0;
}
