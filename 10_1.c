#include <stdio.h>
#include <stdlib.h>   // Required for malloc()

// Structure for a node in the linked list
struct Node {
    int data;              // Data part of the node
    struct Node *next;     // Pointer to the next node
};

int main() {
    // Creating three nodes using dynamic memory allocation
    struct Node *head = NULL;   // Start (first pointer)
    struct Node *second = NULL; // Second node pointer
    struct Node *third = NULL;  // Third node pointer

    // Allocate memory for each node
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Assign data and link nodes
    head->data = 10;       // First node data
    head->next = second;   // First node points to second node

    second->data = 20;     // Second node data
    second->next = third;  // Second node points to third node

    third->data = 30;      // Third node data
    third->next = NULL;    // Last node points to NULL (end of list)

    // Display the linked list
    printf("Linked List: ");
    struct Node *ptr = head;  // Temporary pointer for traversal

    while (ptr != NULL) {
        printf("%d -> ", ptr->data);  // Print current node data
        ptr = ptr->next;              // Move to next node
    }

    printf("NULL\n");

    return 0;
}
