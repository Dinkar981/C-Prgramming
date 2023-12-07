#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1: Deleting the first element from the linked list
struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
// Case 2: Deleting the element at a given index from the linked list
struct Node *deleteAtIndex(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}
// Case 3: Deleting the last element
struct Node *deleteAtLast(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

// Case 4: Deleting the element with a given value from the linked list
struct Node *deleteByValue(struct Node *head, int value)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
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
    fifth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    printf("enter 1st node");
    scanf("%d", &head->data);
    head->next = second;

    // Link second and third nodes
    printf("enter 2nd node");
    scanf("%d", &second->data);

    second->next = third;

    // Link third and fourth nodes
    printf("enter 3rd node");
    scanf("%d", &third->data);

    third->next = fourth;

    // Link the list at the fifth node
    printf("enter 4th node");
    scanf("%d", &fourth->data);

    fourth->next = fifth;

    // Link the node to null
    printf("enter 5th node");
    scanf("%d", &fifth->data);
    fifth->next = NULL;

    linkedListTraversal(head);
    printf("after deleting deleting the first node\n");
    head = deleteFirst(head);
    linkedListTraversal(head);

    printf("deleting the element in between\n");
    head = deleteAtIndex(head, 2);
    linkedListTraversal(head);

    printf(" deleting  the last node\n");
    head = deleteAtLast(head);
    linkedListTraversal(head);

    printf("deleting the element in between\n");
    head = deleteAtIndex(head, 4);
    linkedListTraversal(head);

    return 0;
}
