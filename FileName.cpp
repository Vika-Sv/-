#include <iostream>
using namespace std;

enum Names { IVAN, PETRO, OKSANA, OLGA, ANDRIY, NATALIA, DMYTRO };

struct Student {
    Names name;        // 1-ша компонента: 
    int birthDay;      // 2-га компонента: 
    int birthMonth;    // 3-тя компонента: 
};


string getName(Names name) {
    switch (name) {
    case IVAN: return "Іван";
    case PETRO: return "Петро";
    case OKSANA: return "Оксана";
    case OLGA: return "Ольга";
    case ANDRIY: return "Андрій";
    case NATALIA: return "Наталія";
    case DMYTRO: return "Дмитро";
    default: return "Невідомо";
    }
}

int main() {
  
    Student students[7] = {
        {IVAN, 15, 9},   // Іван, 15 вересня
        {PETRO, 5, 10},  // Петро, 5 жовтня
        {OKSANA, 12, 3}, // Оксана, 12 березня
        {OLGA, 25, 11},  // Ольга, 25 листопада
        {ANDRIY, 8, 5},  // Андрій, 8 травня
        {NATALIA, 22, 9}, // Наталія, 22 вересня
        {DMYTRO, 30, 7}  // Дмитро, 30 липня
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
    Names name;        // 1-ша компонента:
    int course;        // 2-га компонента: 
    char gender;       // 3-тя компонента: 
};


string getName(Names name) {
    switch (name) {
    case IVAN: return "Іван";
    case PETRO: return "Петро";
    case OKSANA: return "Оксана";
    case OLGA: return "Ольга";
    case ANDRIY: return "Андрій";
    case NATALIA: return "Наталія";
    case DMYTRO: return "Дмитро";
    default: return "Невідомо";
    }
}

int main() {
 
    Student students[7] = {
        {IVAN, 1, 'M'},   // Іван, 1 курс, чоловіча стать
        {PETRO, 2, 'M'},  // Петро, 2 курс, чоловіча стать
        {OKSANA, 1, 'F'}, // Оксана, 1 курс, жіноча стать
        {OLGA, 3, 'F'},   // Ольга, 3 курс, жіноча стать
        {ANDRIY, 1, 'M'}, // Андрій, 1 курс, чоловіча стать
        {NATALIA, 4, 'F'}, // Наталія, 4 курс, жіноча стать
        {DMYTRO, 1, 'M'}  // Дмитро, 1 курс, чоловіча стать
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
