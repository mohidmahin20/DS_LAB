/*Task no: 5.2
Task name: Write down a C program to Sort all the data in Descending Order.
Source Code: */
#include <stdio.h>
int main()
{
int temp, arr[10] = { 1, 3, 15, 8, 9 };
printf("Before Sorting : ");
for (int i = 0; i < 5; i++) printf("%d ",arr[i]);
printf("\n");
for (int i = 0; i < 4; i++)
{
for (int j = 0; j < 4 - i; j++)
{
if (arr[j] < arr[j + 1])
{
temp = arr[j + 1];
arr[j + 1] = arr[j];
arr[j] = temp;
}
}
}
printf("After Sorting in Decending Order\n");
for (int i = 0; i < 5; i++) printf("%d ",arr[i]);
return 0;
}
