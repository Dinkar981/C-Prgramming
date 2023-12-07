#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *insertAtBeginning(struct Node *head, int data)
{
    // allocate memory for new node
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    // set the data of the new node
    ptr->data = data;

    // set the prev pointer of the new node to NULL
    ptr->prev = NULL;

    // set the next pointer of the new node to the current head of the list
    ptr->next = head;

    // if the current head of the list is not NULL, set its prev pointer to the new node
    if (head != NULL)
    {
        head->prev = ptr;
    }
   

    // set the head of the list to the new node
    return ptr;

}

int main()
{
    struct Node *head;
    struct Node *N2;
    struct Node *N3;
    head = (struct Node *)malloc(sizeof(struct Node));
    N2 = (struct Node *)malloc(sizeof(struct Node));
    N3 = (struct Node *)malloc(sizeof(struct Node));

    head->data = 23;
    head->next = N2;
    head->prev = NULL;

    N2->data = 34;
    N2->next = N3;
    N2->prev = head;

    N3->data = 56;
    N3->next = NULL;
    N3->prev = N2;

    // insert a new node at the beginning of the list
    head = insertAtBeginning(head, 39);
    // print the updated list
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d \n", current->data);
        current = current->next;
    }
   

    return 0;
}
