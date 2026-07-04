#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}


void insertAtBeginning(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (newNode == NULL) return;

    newNode->next = *head;
    *head = newNode;
    printf("%d inserted at the beginning.\n", value);
}


void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (newNode == NULL) return;

    if (*head == NULL) {
        *head = newNode;
        printf("%d inserted as the first node.\n", value);
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    printf("%d inserted at the end.\n", value);
}


void deleteNode(struct Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

  
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        printf("%d deleted from the list.\n", value);
        return;
    }

    
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    
    if (temp == NULL) {
        printf("%d not found in the list.\n", value);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("%d deleted from the list.\n", value);
}


void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}


int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtEnd(&head, 30);
    insertAtEnd(&head, 40);

    displayList(head);

    deleteNode(&head, 20);
    displayList(head);

    deleteNode(&head, 40);
    displayList(head);

    freeList(head);

    return 0;
}
