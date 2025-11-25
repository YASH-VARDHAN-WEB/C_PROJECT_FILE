#include <stdio.h>
#include <stdlib.h>

// Structure for each node of the linked list
struct Node {
    int data;              // Data part of the node
    struct Node *next;     // Pointer to the next node
};

// Function to create a new node using dynamic memory allocation
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);   // Exit program if memory allocation fails
    }

    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to display the linked list
void displayList(struct Node *head) {
    struct Node *temp = head;

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to insert a node in the middle of the list
void insertInMiddle(struct Node **head, int value, int position) {
    struct Node *newNode = createNode(value);

    // Case 1: If inserting at position 1 (start of list)
    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    int i;

    // Traverse the list until we reach one node before the desired position
    for (i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // If position is invalid (greater than list length + 1)
    if (temp == NULL) {
        printf("Invalid position! Cannot insert.\n");
        free(newNode);
        return;
    }

    // Insert the node in the middle
    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    struct Node *head = NULL;

    // Creating initial linked list: 10 -> 20 -> 30
    head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    printf("Initial Linked List:\n");
    displayList(head);

    int value, position;

    // Taking input from user
    printf("\nEnter value to insert: ");
    scanf("%d", &value);

    printf("Enter position to insert (middle position): ");
    scanf("%d", &position);

    // Insert node at given position
    insertInMiddle(&head, value, position);

    printf("\nAfter insertion:\n");
    displayList(head);

    return 0;
}
