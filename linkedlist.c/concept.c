#include<stdio.h>
#include<stdlib.c>
/**
* @file: The concept of the tinked list 
* @author: Salma Wagdy
* @date: 02/01/2023
* 
* @nodePtr: the "typedef" statement creates a new data type called "nodePtr" which is a pointer to a "node" structure
* @node: the "typedef" statement creates a new data type called "node" which is the actual structure itself
* @data: is a variable stored the value in the node (chunk)
* @arrow ->:accessing the next node in the linked list
*/

//1- Frist of all we will create a new data type to the variables: pointers + stractures


//*************** Pointer *****************************

typedef struct node *nodePtr;

//all pointers in the linked list will have the data type : nodePtr

//**************** Structure **************************

//node ispredeclared structure = [data + pointer]
struct node
{
int data;
nodePtr next;
};
// The actual strcture itself will be stored in node
typedef struct node node;

int main (int argc, constant char * argv[])
{
//I intialize a pointer "frist" that point to the frist element (nodePtr is a predefined datatype)
nodePtr first = NULL;

// frist ptr defination to allocate memory
frist = malloc (sizeof(node));
//next is already intialized pointer
frist->next = NULL;
frist->data = 61;
/*frsit->next = malloc(sizeof(node));
*frist->next->next = NULL
*frist->next->data = 62
*/

//intialize a new pointer 
nodePtr temp = NULL;
temp = malloc(sizeof(node));
temp->next = frist;
frist = temp;

printf("Hello, Egypt!\n");

return 0;
}
