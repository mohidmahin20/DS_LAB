/*Task no: 3.1
Task name: Apply binary search to find out an element and delete the element.
Source Code:*/
#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
if (r >= l)
{
int mid = (l + r) / 2;
if (arr[mid] == x)
return mid;
if (arr[mid] > x)
return binarySearch(arr, l, mid - 1, x);
return binarySearch(arr, mid + 1, r, x);
}
return -1;
}
int main()
{
int arr[] = { 2, 3, 4, 10, 40 };
int x;
int n = sizeof(arr) / sizeof(arr[0]);
printf("Before Deletion :\n");
for (int i = 0; i < n; i++) printf("%d ",arr[i]);
printf("\n");
printf("Enter a Number To Delete : \n");
scanf("%d",&x);
printf("\n");
int result = binarySearch(arr, 0, n - 1, x);
if (result == -1)
printf("Element is not present in array");
else
{
for (int i = result; i < n - 1; i++)
arr[i] = arr[i + 1];
}
printf("After Deletion :\n");
for (int i = 0; i < n - 1; i++)
 printf("%d ",arr[i]);
 printf("\n");
 return 0;
}
