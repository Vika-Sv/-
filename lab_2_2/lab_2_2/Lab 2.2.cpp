#include <iostream>
using namespace std;// використовується для того, щоб не писати постійно std 

enum Names { IVAN, PETRO, OKSANA, OLGA, ANDRIY, NATALIA, DMYTRO }; // список імен студентів 

struct Student {
    Names name; // ім'я студента 
    int birthDay;   // День народження
    int birthMonth; // Місяць народження
    int course;     // Курс
    char gender;    // Стать
};

string getName(Names name) {
    switch (name) 
    {
    case IVAN: return "Іван";
    case PETRO: return "Петро";
    case OKSANA: return "Оксана";
    case OLGA: return "Ольга";
    case ANDRIY: return "Андрій";
    case NATALIA: return "Наталія";
    case DMYTRO: return "Дмитро";
    default: return "Невідомо";
    }
} // в даних рядках в нас є імена студентів, які будуть вибираться в залежності від значення name. Якщо ім'я не буде відповідати ждних з перелічених значень, то буде виводитись "Невідомо"

int main() {
    // Установка локалі для того, щоб програма могла відображати кирилицю 
    setlocale(LC_ALL, "uk-UA");

    // Створення масиву студентів
    Student students[7] = ;
    {
        {IVAN, 15, 9, 1, 'M'},   // Іван, 15 вересня, 1 курс, чоловіча стать
        {PETRO, 5, 10, 2, 'M'},  // Петро, 5 жовтня, 2 курс, чоловіча стать
        {OKSANA, 12, 3, 1, 'F'}, // Оксана, 12 березня, 1 курс, жіноча стать
        {OLGA, 25, 11, 3, 'F'},  // Ольга, 25 листопада, 3 курс, жіноча стать
        {ANDRIY, 8, 5, 1, 'M'},  // Андрій, 8 травня, 1 курс, чоловіча стать
        {NATALIA, 22, 9, 4, 'F'}, // Наталія, 22 вересня, 4 курс, жіноча стать
        {DMYTRO, 30, 7, 1, 'M'}  // Дмитро, 30 липня, 1 курс, чоловіча стать
    };

    // 1. Підрахунок студентів, народжених восени
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

    // 2. Підрахунок кількості студентів 1-го курсу та відсотка чоловіків
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
