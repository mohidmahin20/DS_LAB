/*Task no: 4.1
Task name: Suppose there is an array with any 10 elements. Now apply binary
search and Linear search both and decide which one mechanism is best for
finding that specific element.
Source Code: */
#include <stdio.h>
int cnt = 0;
int binarySearch(int arr[], int l, int r, int x)
{
cnt++;
if (r >= l)
{
int mid = (l + r) / 2;
if (arr[mid] == x)return cnt;
if (arr[mid] > x)
return binarySearch(arr, l, mid - 1, x);
return binarySearch(arr, mid + 1, r, x);
}
}
int LinearSearch(int arr[], int n, int x)
{
int count = 0;
for (int i = 0; i < n; i++)
{
count++;
if (arr[i] == x) return count;
}
}
int main()
{
int x, arr[] = { 1, 2, 3, 5, 6, 7, 9, 10, 12, 14 };
int n = sizeof(arr) / sizeof(arr[0]);
printf("Here Is Our Element For Binary and Linear Search : \n");
for (int i = 0; i < n; i++) printf("%d ",arr[i]);
printf("\n");
printf("Enter An Element From Given Array : ");
scanf("%d",&x);
int binary = binarySearch(arr, 0, n - 1, x);
int linear = LinearSearch(arr, n, x);
printf("Element Found through Binary Search In %d Steps",binary);
printf("Element Found through Linear Search In %d Steps",linear);
printf("\n");
if (linear >= binary)
 printf("So, Binary is best For finding Specific element\n");
else
printf("So, Linear is best For finding Specific element\n");
 return 0;
}
