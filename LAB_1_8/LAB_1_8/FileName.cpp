#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "uk-UA");
    // �������� ��� ��������
    int op1 = -57; // ������ ������� ��� ���������
    int op2 = -57; // ������ ������� ��� ���������
    int add1 = 82; // ������ ������� ��� ���������
    int add2 = 46; // ������ ������� ��� ���������

    // ���������
    cout << "���������:" << endl;
    if (op1 == op2) {
        cout << "�������� ���: " << op1 << " == " << op2 << endl;
    }
    else {
        cout << "�������� �� ���: " << op1 << " != " << op2 << endl;
    }

    // ���������
    cout << "���������:" << endl;
    cout << add1 << " + " << add2 << " = " << (add1 + add2) << endl;

    // ���� �������������
    cout << "����:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "�������� " << i << ": " << add1 << endl;
        add1++;
    }

    // ��������� ���� �����
    cout << "��������� ���� �����:" << endl;
    if (add1 > add2) {
        cout << add1 << " ����� �� " << add2 << endl;
    }
    else if (add1 < add2) {
        cout << add1 << " ����� �� " << add2 << endl;
    }
    else {
        cout << add1 << " ������� " << add2 << endl;
    }

    // ������ ��������
    cout << "������ ��������:" << endl;
    cout << "������� AND: " << (op1 & op2) << endl;
    cout << "������� OR: " << (op1 | op2) << endl;
    cout << "���� ����: " << (add1 << 2) << endl;
    cout << "���� ������: " << (add2 >> 1) << endl;

    return 0;
}
