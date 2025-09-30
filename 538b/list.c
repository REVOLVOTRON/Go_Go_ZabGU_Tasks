#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// Функция создания нового узла двусвязного списка с заданным значением
Node* createNode(double val) {
    // Выделяем память под новый узел
    Node* newNode = malloc(sizeof(Node));
    // Присваиваем значение
    newNode->value = val;
    // Устанавливаем указатели на NULL, так как узел ещё не связан с другими
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode; // Возвращаем новый узел
}

// Функция добавления узла в конец двусвязного списка
void appendNode(Node** head, double val) {
    // Создаём новый узел с заданным значением
    Node* newNode = createNode(val);
    // Если список пуст (голова NULL), новый узел становится головой списка
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    // Иначе идём до последнего узла списка
    Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    // Связываем новый узел с последним элементом списка
    temp->next = newNode;
    newNode->prev = temp;
}

// Функция вывода элементов списка слева направо
void printList(Node* head) {
    Node* temp = head;
    // Пока не дошли до конца списка
    while (temp != NULL) {
        // Выводим значение узла с двумя знаками после запятой
        printf("%.2f ", temp->value);
        // Переходим к следующему узлу
        temp = temp->next;
    }
}
