#include <stdio.h>
#include "list.h"

int main() {
    int n, i;
    double x;
    Node* head = NULL;  // Указатель на голову двусвязного списка (первый элемент)
    Node* tail = NULL;  // Указатель на хвост списка (последний элемент)

    // Ввод
    printf("ВВедите количество элементов: ");
    scanf("%d", &n);

    // Ввод элементов списка с клавиатуры и добавление в конец списка
    printf("Введите элементы:");
    for (i = 0; i < n; i++) {
        scanf("%lf", &x);
        appendNode(&head, x);  // Добавляем каждый элемент в двусвязный список
    }

    // Находим последний узел списка (хвост)
    tail = head;
    while (tail && tail->next) {
        tail = tail->next;
    }

    // Выводим список в прямом порядке: r1, r2, ..., rn
    printList(head);

    // Вывод списка в обратном порядке: rn, ..., r2, r1
    Node* temp = tail;
    while (temp != NULL) {
        printf("%.2f ", temp->value);
        temp = temp->prev;  // Переход к предыдущему узлу
    }
    printf("\n");

    return 0;
}
