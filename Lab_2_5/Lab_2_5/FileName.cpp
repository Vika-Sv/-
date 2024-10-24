#include <iostream>

// Структура вузла списку
struct Node {
    int data;
    Node* next;
};


// Inline функція для додавання елемента в кінець списку
inline void addToEnd(Node** head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
    }
    else {
        Node* current = *head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}


// Inline функція для видалення елемента з кінця списку
inline void removeFromEnd(Node** head) {
    if (*head == nullptr) {
        return;
    }

    if ((*head)->next == nullptr) {
        delete* head;
        *head = nullptr;
    }
    else {
        Node* current = *head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
    }
}

// Inline функція для пошуку елемента за значенням
inline Node* searchElement(Node* head, int value) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

// Inline функція для розвороту списку
inline void reverseList(Node** head) {
    Node* prev = nullptr;
    Node* current = *head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;  // Зберігаємо наступний вузол
        current->next = prev;  // Міняємо напрямок стрілки
        prev = current;        // Переміщуємо prev вперед
        current = next;        // Переміщуємо current вперед
    }
    *head = prev;
}

// Inline функція для виведення всіх елементів списку
inline void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "null" << std::endl;
}

int main() {
    setlocale(LC_ALL, "uk-UA");
    Node* head = nullptr;


    addToEnd(&head, 40);
    addToEnd(&head, 50);
    addToEnd(&head, 60);
    addToEnd(&head, 70);
    addToEnd(&head, 80);

    std::cout << "Список після додавання елементів в кінець: ";
    printList(head);


    // Видалення елемента з кінця
    removeFromEnd(&head);
    std::cout << "Список після видалення елемента з кінця: ";
    printList(head);

    // Пошук елемента
    Node* found = searchElement(head, 20);
    if (found != nullptr) {
        std::cout << "Елемент знайдено: " << found->data << std::endl;
    }
    else {
        std::cout << "Елемент не знайдено" << std::endl;
    }

    // Розворот списку
    reverseList(&head);
    std::cout << "Список після розвороту: ";
    printList(head);

    // Очищення списку
    while (head != nullptr) {
        removeFromEnd(&head);
    }

    return 0;
}
