/*Task no: 2.1
Task name: Suppose you have an array with some elements. Now Find out two
elements and delete them if they exist. If not exist any one or both of them, then
print "This element cannot be deleted as it does not exist".
Source Code:*/
#include <stdio.h>
void Delete_element(int value, int arr[], int n)
{
int i, count = 0;
for (i = 0; i < n - 1; i++)
{
if (arr[i] == value)
{
printf("Element Found in Position %d\n",i+1);
for (int j = i; j < n; j++)
arr[j] = arr[j + 1];
printf("Deleted\n");
count = 1;
break;
}
}
if (count == 0) printf("This element can not be deleted as it does not exist\n");
}
int main()
{
int i, n, m, s, arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
n = sizeof(arr) / sizeof(arr[0]);
printf("Before Deletion Elements are : \n");
for (i = 0; i < n; i++) printf("%d ",arr[i]);
printf("\n");
printf("Enter Your First Element To Delete : ");
scanf("%d",&m);
Delete_element(m, arr, n);
printf("\n");
printf("Enter Your Second Element To Delete : ");
scanf("%d",&s);
Delete_element(s, arr, n);
printf("\n");
printf("After Deletion Now The Element Is : \n");
for (i = 0; i < n - 2; i++) printf("%d ",arr[i]);
}
