#include <iostream>

// ��������� ����� ������
struct Node {
    int data;
    Node* next;
};


// Inline ������� ��� ��������� �������� � ����� ������
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


// Inline ������� ��� ��������� �������� � ���� ������
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

// Inline ������� ��� ������ �������� �� ���������
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

// Inline ������� ��� ��������� ������
inline void reverseList(Node** head) {
    Node* prev = nullptr;
    Node* current = *head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;  // �������� ��������� �����
        current->next = prev;  // ̳����� �������� ������
        prev = current;        // ��������� prev ������
        current = next;        // ��������� current ������
    }
    *head = prev;
}

// Inline ������� ��� ��������� ��� �������� ������
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

    std::cout << "������ ���� ��������� �������� � �����: ";
    printList(head);


    // ��������� �������� � ����
    removeFromEnd(&head);
    std::cout << "������ ���� ��������� �������� � ����: ";
    printList(head);

    // ����� ��������
    Node* found = searchElement(head, 20);
    if (found != nullptr) {
        std::cout << "������� ��������: " << found->data << std::endl;
    }
    else {
        std::cout << "������� �� ��������" << std::endl;
    }

    // �������� ������
    reverseList(&head);
    std::cout << "������ ���� ���������: ";
    printList(head);

    // �������� ������
    while (head != nullptr) {
        removeFromEnd(&head);
    }

    return 0;
}
