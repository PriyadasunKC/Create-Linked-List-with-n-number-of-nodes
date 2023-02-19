#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node * next;
};

int main()
{
    struct node *headNode = NULL, *newNode = NULL, *tempNode = NULL;
    int numNodes = 0,valueOfNode = 0,value = 0; ;
    
    //get the number of nodes in the linked list by user input
    printf("Enter Number of Nodes for the Linked List : ");
    scanf("%d",&numNodes);
    
    //get the value of firt node of linked list by user input
    printf("Enter The value for No: 1 node : ");
    scanf("%d",&value);
    
    tempNode = (struct node*) malloc(sizeof(struct node));
    tempNode->data = value;
    tempNode->next = NULL;
    
    headNode = tempNode;
    newNode = headNode;
    
    // get the value of other nodes by user inputs
    for(int i = 1; i<numNodes;i++){
        
        printf("Enter The value for No: %d node : ",i+1);
        scanf("%d",&value);
        
        tempNode = (struct node*) malloc(sizeof(struct node));
        tempNode->data = value;
        tempNode->next = NULL;
        
        newNode->next = tempNode; // link to the next node
        newNode = newNode->next; // jump to the next node
    }
    
    // Create a new pointer nemed ptr and it points to the headNode 
    struct node * ptr = headNode;
    
    // Using ptr display the linked list
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}
