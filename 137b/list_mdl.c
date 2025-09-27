#include <stdio.h>
#include <stdlib.h>
#include "list_mdl.h"

// Создание нового узла
Node *create_node(double value) {
    Node* n_node = (Node*)malloc(sizeof(Node));
    if (!n_node) {
        printf("Ошибка выделения памяти\n");
        exit(1);
    }
    n_node->value = value;
    n_node->next = NULL;
    return n_node;
}

// Добавление в конец
void append(Node** head, double value) {
    Node* n_node = create_node(value);
    if (*head == NULL) {
        *head = n_node;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = n_node;
    }
}

// Освобождение памяти
void free_list(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// Печать списка
void print_list(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%.2f ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
