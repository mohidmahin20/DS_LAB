/*Task no: 5.1
Task name: Write down a C program, which can apply binary search to any character data whether
the elements may be in the sorted or unsorted form (i.e. Array will contain some "characters’ as data
and they are in unsorted order). If unsorted then sort all the data in descending order.
Source Code: */
#include <stdio.h>
int binarySearch(char arr[], int l, int r, char x)
{
if (r >= l)
{
int mid = (l + r) / 2;
if (arr[mid] == x)
return mid;
if (arr[mid] < x)
return binarySearch(arr, l, mid - 1, x);
return binarySearch(arr, mid + 1, r, x);
}
return -1;
}
void SortDecending(char arr[], int n)
{
int temp;
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n - i; j++)
{
if (arr[j] < arr[j + 1])
{
temp = arr[j + 1];
arr[j + 1] = arr[j];
arr[j] = temp;
}
}
}
}
int main()
{
char x, arr[] = { 'B', 'A', 'H', 'N', 'S', 'I', 'L', 'D' };
int n = sizeof(arr) / sizeof(arr[0]);
printf("Before Sorting :\n");
for (int i = 0; i < n; i++) printf("%d ",arr[i]);
printf("\n");
SortDecending(arr, n);
printf("After Sorting in Desending Order :\n");
for (int i = 0; i < n; i++) printf("%d \n",arr[i]);
printf("Enter a Character To Search : ");
scanf("%d",&x);
x = toupper(x);
int result = binarySearch(arr, 0, n - 1, x);
if (result == -1) printf("Character is not present in array");
else printf("Found in Position :%d\n",result + 1);
return 0;
}
