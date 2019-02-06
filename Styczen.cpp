#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
struct Student {
    int Age;
    int Height;
    int Semester;
};
 
Student* Create(int age, int height, int semestr) {
    Student* student = (Student*) malloc(sizeof(Student));
    student->Age = age;
    student->Height = height;
    student->Semester = semestr;
    return student;
}
 
void PrintStudent(Student *s) {
    cout<<"wiek: "<<s->Age<<endl;
    cout<<"wzrost: "<<s->Height<<endl;
    cout<<"semestr: "<<s->Semester<<endl;
}
 
bool AreEqueal(Student* s1, Student* s2) {
    if ((s1->Age == s2->Age) && (s1->Height == s2->Height) && (s1->Semester == s2->Semester))
        return true;
    else
        return false;
}
 
int main() {
    int age;
    int height;
    int semestr;
    Student student1;
    Student student2;
    cout<<"student 1: "<<endl;
    cout<<"jego wiek: ";
    cin>>age;
    cout<<"jego wzrost: ";
    cin>>height;
    cout<<"semestr: ";
    cin>>semestr;
    student1 = *Create(age, height, semestr);
    cout<<"student 2: "<<endl;
    cout<<"jego wiek: ";
    cin>>age;
    cout<<"jego wzrost: ";
    cin>>height;
    cout<<"semestr: ";
    cin>>semestr;
    student2 = *Create(age, height, semestr);
    cout<<"Sudent 1:"<<endl;
    PrintStudent(&student1);
    cout<<"Sudent 2:"<<endl;
    PrintStudent(&student2);
    cout<<"Taki sam? "<<AreEqueal(&student1, &student2)<<endl;
    free(&student1);
    free(&student2);
    return 0;
}
