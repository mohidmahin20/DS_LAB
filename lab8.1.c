/*Task no: 8.1
Task name: Implement the code of "Queue" as given, rewrite it by using Structure.
Source Code:*/
#include <stdio.h>
#define size 100
int btm = 0, top = -1, Queue[size];
void Insert()
{
if (top == size - 1) printf("Queue overflow\n");
else
{
printf("Enter insertion value: ");
scanf("%d",&Queue[++top]);
}
}
void Delete()
{
if (top < btm) printf("Queue underflow\n");
else printf("Deleted queue element: %d\n", Queue[btm++]);
}
void Display()
{
if (top < btm) printf("Queue empty\n");
else
{
printf("Queue elements: ");
for (int i = btm; i <= top; i++) printf("%d ",Queue[i]);
printf("\n");
}
}
int main()
{
int opt;
printf("1. Insert\n");
printf("2. Delete\n");
printf("3. Display\n");
printf("4. Exit\n");
do {
printf("Enter option (1-4): ");
scanf("%d",&opt);
switch (opt)
{
case 1:
Insert();
break;
case 2:
Delete();
break;
case 3:
Display();
break;
case 4:
printf("Exiting...\n");
break;
default:
printf("Invalid option, try again...\n");
}
} while (opt != 4);
return 0;
}
