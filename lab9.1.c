/*Task no: 9.1
Task name: Construct a tree as follows,

Source Code:*/
#include <string.h>
struct node
{
 char ch;
 struct node * left;
 struct node * right;
};
struct node * new_node(char c)
{
 struct node * temp = (struct node *)malloc(sizeof(struct node));
 temp->ch = c;
 temp->left = NULL;
 temp->right = NULL;
 return temp;
}
void preorder_print(struct node *ptr)
{
 if (ptr == NULL) return;
 printf("%c ", ptr->ch);
M;
N 0;
P Q;
 preorder_print(ptr->left);
 preorder_print(ptr->right);
}
int main()
{
struct node *root = new_node('M');
root->left = new_node('N');
root->right = new_node('O');
root->right->left = new_node('P');
root->right->right = new_node('Q');
preorder_print(root);
return 0;
}
