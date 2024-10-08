#include <iostream>
using namespace std;

enum Names { IVAN, PETRO, OKSANA, OLGA, ANDRIY, NATALIA, DMYTRO };

struct Student {
    Names name;        // 1-�� ����������: 
    int birthDay;      // 2-�� ����������: 
    int birthMonth;    // 3-�� ����������: 
};


string getName(Names name) {
    switch (name) {
    case IVAN: return "����";
    case PETRO: return "�����";
    case OKSANA: return "������";
    case OLGA: return "�����";
    case ANDRIY: return "�����";
    case NATALIA: return "������";
    case DMYTRO: return "������";
    default: return "�������";
    }
}

int main() {
  
    Student students[7] = {
        {IVAN, 15, 9},   // ����, 15 �������
        {PETRO, 5, 10},  // �����, 5 ������
        {OKSANA, 12, 3}, // ������, 12 �������
        {OLGA, 25, 11},  // �����, 25 ���������
        {ANDRIY, 8, 5},  // �����, 8 ������
        {NATALIA, 22, 9}, // ������, 22 �������
        {DMYTRO, 30, 7}  // ������, 30 �����
    };

 
    int autumnCount = 0;
    for (int i = 0; i < 7; i++) {

        if (students[i].birthMonth == 9 || students[i].birthMonth == 10 || students[i].birthMonth == 11) {
            autumnCount++;
        }
    }

    
    double autumnPercentage = (autumnCount / 7.0) * 100;

  
    cout << "Percentage of students born in autumn: " << autumnPercentage << "%" << endl;

    return 0;
}


//part 2


#include <iostream>
using namespace std;

enum Names { IVAN, PETRO, OKSANA, OLGA, ANDRIY, NATALIA, DMYTRO };


struct Student {
    Names name;        // 1-�� ����������:
    int course;        // 2-�� ����������: 
    char gender;       // 3-�� ����������: 
};


string getName(Names name) {
    switch (name) {
    case IVAN: return "����";
    case PETRO: return "�����";
    case OKSANA: return "������";
    case OLGA: return "�����";
    case ANDRIY: return "�����";
    case NATALIA: return "������";
    case DMYTRO: return "������";
    default: return "�������";
    }
}

int main() {
 
    Student students[7] = {
        {IVAN, 1, 'M'},   // ����, 1 ����, ������� �����
        {PETRO, 2, 'M'},  // �����, 2 ����, ������� �����
        {OKSANA, 1, 'F'}, // ������, 1 ����, ����� �����
        {OLGA, 3, 'F'},   // �����, 3 ����, ����� �����
        {ANDRIY, 1, 'M'}, // �����, 1 ����, ������� �����
        {NATALIA, 4, 'F'}, // ������, 4 ����, ����� �����
        {DMYTRO, 1, 'M'}  // ������, 1 ����, ������� �����
    };


    int maleFirstYearCount = 0;
    int totalFirstYearCount = 0;

    for (int i = 0; i < 7; i++) {
        if (students[i].course == 1) { 
            totalFirstYearCount++;
            if (students[i].gender == 'M') { 
                maleFirstYearCount++;
            }
        }
    }

   
    double malePercentage = (totalFirstYearCount > 0) ? (maleFirstYearCount / (double)totalFirstYearCount) * 100 : 0;


    cout << "The percentage of male students in the 1st year: " << malePercentage << "%" << endl;

    return 0;
}
