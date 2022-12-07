/*Task no: 1.2
Task name: Insert two numbers at two different positions in an array by using
variables.
Source Code:*/
#include <stdio.h>
#define size 100
int n = 10, arr[size] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
void Insert()
{
int pos, val;
 printf("Enter position (1-100): \n");
scanf("%d",&pos);
printf("Enter value: \n");
scanf("%d",&val);
if (pos >= 1 && pos <= 100)
{
if (pos > n) arr[n] = val;
else
{
for (int i = n; i >= pos; i--) arr[i] = arr[i - 1];
arr[pos - 1] = val;
}
n++;
}
else printf("Invalid position\n");
}
void Display()
{
printf("Position\tValue\n");
for (int i = 0; i < n; i++)
printf("%-8d\t%-5d\n", i + 1, arr[i]);
}
int main()
{
int opt, pos, val;
printf("1. Insert\n");
printf("2. Display\n");
printf("3. Exit\n");
do {
printf("Enter your option (1-3): \n");
scanf("%d",&opt);
switch (opt)
{
case 1:
Insert();
break;
case 2:
Display();
break;
case 3:
break;
default:
printf("Invalid option, try again...\n");
}
} while (opt != 3);
return 0;
}
