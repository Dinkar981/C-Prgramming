#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head ;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth=(struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    printf("enter 1st node");
    scanf("%d" ,&head->data);
    head->next = second;

    // Link second and third nodes
     printf("enter 2nt node");
    scanf("%d" ,&second->data);
    
    second->next = third;

    // Link third and fourth nodes
     printf("enter 3rd node");
    scanf("%d" ,&third->data);
    
    third->next = fourth;

    // Link the list at the fifth node
     printf("enter 4th node");
    scanf("%d" ,&fourth->data);
   
    fourth->next = fifth;

// Link the node to null
 printf("enter 5th node");
    scanf("%d" ,&fifth->data);
    
    fifth->next = NULL;

    linkedListTraversal(head);
    
    return 0;
}
