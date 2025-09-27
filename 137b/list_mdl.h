#ifndef LIST_MDL_H
#define LIST_MDL_H

typedef struct Node {
    double value;
    struct Node* next;
} Node;

// Создание нового узла
Node* create_node(double value);

// Добавление элемента в конец списка
void append(Node** head, double value);

// Освобождение памяти
void free_list(Node* head);

// Вывод списка
void print_list(Node* head);

#endif
