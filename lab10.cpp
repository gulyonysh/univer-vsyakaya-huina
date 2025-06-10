
#include <iostream>
using namespace std;
struct Student {
    string Surname;
    int YearOfBirth;
    string Diagnosis;
    int Period;
};

/*Створити документ про захворювання студентів: прізвище, рік народження, діагноз захворювання, період хвороби.
Вивести на екран повну інформацію про захворювання студентів. 
Знайти студентів з діагнозом «грип» і змінити цей діагноз на «ГРВІ», вивести на екран. */
int main()
{
    srand(time(0));
    const int NumStudents = 3;
    Student Students[NumStudents];
    cout << "Enter student information: " << endl;
    cout << endl;
    for (int i = 0; i < NumStudents; i++) {
        cout << "Student number " << i + 1 << ": " << endl;
        cout << "Surname: ";
        cin >> Students[i].Surname;
        cout << "Diagnosis: ";
        cin >> Students[i].Diagnosis; Students[i].Diagnosis;
        Students[i].YearOfBirth = 2001 + (rand() % (2007 - 2001 + 1));
        Students[i].Period= 1 + (rand() % 31);
        cout << endl;
    }
    cout << endl;
    cout << "Informaition about students: " << endl;
    for (int i = 0; i < NumStudents; i++) {
        cout << "Student " << i + 1 << ": " << endl;
        cout << Students[i].Surname << ". Year of birth: " << Students[i].YearOfBirth << ". Diagnosis: " << Students[i].Diagnosis << ". Period of illness: " << Students[i].Period << "." << endl;
    }
    for (int i = 0; i < NumStudents; i++) {
        if (Students[i].Diagnosis == "Flu") {
            Students[i].Diagnosis = "ARVI";
        }
    }
    cout << endl;
    cout << "Updated list : " << endl;
    for (int i = 0; i < NumStudents; i++) {
        cout << "Student " << i + 1 << ": " << endl;
        cout << Students[i].Surname << ". Year of birth: " << Students[i].YearOfBirth << ". Diagnosis: " << Students[i].Diagnosis << ". Period of illness: " << Students[i].Period << "." << endl;
    }
}

