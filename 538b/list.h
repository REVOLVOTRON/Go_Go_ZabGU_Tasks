#ifndef LIST_H
#define LIST_H

typedef struct Node {
    double value;
    struct Node* prev;
    struct Node* next;
} Node;

Node* createNode(double val);
void appendNode(Node** head, double val);
void printList(Node* head);

#endif
