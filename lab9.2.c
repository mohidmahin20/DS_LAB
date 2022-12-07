#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
struct node {
 int value;
 struct node *left, *right;
};
void insert(struct node *root, int val) {
 if (root->value > val) {
 if (root->left == NULL) {
 root->left = (struct node *) malloc(sizeof(struct node));
 root->left->value = val;
 root->left->left = NULL;

 root->left->right = NULL;
 return;
 }
 insert(root->left, val);
 } else if (root->value < val) {
 if (root->right == NULL) {
 root->right = (struct node *) malloc(sizeof(struct node));
 root->right->value = val;
 root->right->left = NULL;
 root->right->right = NULL;
 return;
 }
 insert(root->right, val);
 }
}
void postorder_print(struct node *root) {
 if (root == NULL) return;
 postorder_print(root->left);
 postorder_print(root->right);
 printf("%d ", root->value);
}
int main() {
 struct node *root = (struct node *) malloc(sizeof(struct node));
 root->value = 30;
 root->left = NULL;
 root->right = NULL;
 insert(root, 15);
 insert(root, 60);
 insert(root, 7);
 insert(root, 22);
 insert(root, 45);
 insert(root, 75);
 insert(root, 17);
 insert(root, 27);
 postorder_print(root);
 return 0;
}
