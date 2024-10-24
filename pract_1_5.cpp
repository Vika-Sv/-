#include <iostream>
#include <vector> // ������ ��� ������������ std::vector
using namespace std;

int main() {
    setlocale(LC_ALL, "uk-UA");
    int n, P;

    cout << "������ ������� �������� � �����������: ";
    cin >> n;

    if (n <= 0) { // �������� �� ���������� ��������
        cout << "ʳ������ �������� ������� ���� ���������." << endl;
        return 1; // ���������� ��������
    }

    vector<int> A(n); // ������������ �������

    cout << "������ �������� �����������: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    cout << "������ �������� P: ";
    cin >> P;

    // ������ ������ ������ ��������� P
    int foundIndex = -1;
    for (int i = 0; i < n; i++) {
        if (A[i] == P) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        cout << "������ ������ ��������� P: " << foundIndex << endl;
    }
    else {
        cout << "������� P �� ��������." << endl;
    }

    // ����� ���������� ��������� ��������
    int minPositive = -1;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0) {
            if (minPositive == -1 || A[i] < minPositive) {
                minPositive = A[i];
            }
        }
    }

    if (minPositive != -1) {
        cout << "��������� �������� �������: " << minPositive << endl;
    }
    else {
        cout << "������� �������� ����." << endl;
    }

    // ����� ���������� � ���������� �������� �� ���� ������
    int minVal = A[0], maxVal = A[0];
    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (A[i] < minVal) {
            minVal = A[i];
            minIndex = i;
        }
        if (A[i] > maxVal) {
            maxVal = A[i];
            maxIndex = i;
        }
    }

    // ̳����� ������ ������������ � ��������� ��������
    int temp = A[minIndex];
    A[minIndex] = A[maxIndex];
    A[maxIndex] = temp;

    // �������� �������� �����������
    cout << "����������� ���� ����� ���������� � ���������� ��������: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
