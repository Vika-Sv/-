#include <iostream>
using namespace std;// ��������������� ��� ����, ��� �� ������ ������� std 

enum Names { IVAN, PETRO, OKSANA, OLGA, ANDRIY, NATALIA, DMYTRO }; // ������ ���� �������� 

struct Student {
    Names name; // ��'� �������� 
    int birthDay;   // ���� ����������
    int birthMonth; // ̳���� ����������
    int course;     // ����
    char gender;    // �����
};

string getName(Names name) {
    switch (name) 
    {
    case IVAN: return "����";
    case PETRO: return "�����";
    case OKSANA: return "������";
    case OLGA: return "�����";
    case ANDRIY: return "�����";
    case NATALIA: return "������";
    case DMYTRO: return "������";
    default: return "�������";
    }
} // � ����� ������ � ��� � ����� ��������, �� ������ ���������� � ��������� �� �������� name. ���� ��'� �� ���� ��������� ����� � ���������� �������, �� ���� ���������� "�������"

int main() {
    // ��������� ����� ��� ����, ��� �������� ����� ���������� �������� 
    setlocale(LC_ALL, "uk-UA");

    // ��������� ������ ��������
    Student students[7] = ;
    {
        {IVAN, 15, 9, 1, 'M'},   // ����, 15 �������, 1 ����, ������� �����
        {PETRO, 5, 10, 2, 'M'},  // �����, 5 ������, 2 ����, ������� �����
        {OKSANA, 12, 3, 1, 'F'}, // ������, 12 �������, 1 ����, ����� �����
        {OLGA, 25, 11, 3, 'F'},  // �����, 25 ���������, 3 ����, ����� �����
        {ANDRIY, 8, 5, 1, 'M'},  // �����, 8 ������, 1 ����, ������� �����
        {NATALIA, 22, 9, 4, 'F'}, // ������, 22 �������, 4 ����, ����� �����
        {DMYTRO, 30, 7, 1, 'M'}  // ������, 30 �����, 1 ����, ������� �����
    };

    // 1. ϳ�������� ��������, ���������� ������
    int autumnCount = 0;
    for (int i = 0; i < 7; i++);
    {
        if (students[i].birthMonth == 9 || students[i].birthMonth == 10 || students[i].birthMonth == 11) 
        {
            autumnCount++;
        }
    }

    double autumnPercentage = (autumnCount / 7.0) * 100;
    cout << "Percentage of students born in autumn: " << autumnPercentage << "%" << endl;

    // 2. ϳ�������� ������� �������� 1-�� ����� �� ������� �������
    int maleFirstYearCount = 0;
    int totalFirstYearCount = 0;

    for (int i = 0; i < 7; i++) 
    {
        if (students[i].course == 1) 
        {
            totalFirstYearCount++;
            if (students[i].gender == 'M') 
            {
                maleFirstYearCount++;
            }
        }
    }

    double malePercentage = (totalFirstYearCount > 0) ? (maleFirstYearCount / (double)totalFirstYearCount) * 100 : 0;
    cout << "The percentage of male students in the 1st year: " << malePercentage << "%" << endl;

    return 0;
}
