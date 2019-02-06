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
    Student *tab;
	tab = (Student *)malloc(3 * sizeof(Student));
    for (int i = 0; i < 3; i++) {
    	cout<<"student "<<i+1<< ": "<<endl;
    	cout<<"jego wiek: ";
    	cin>>age;
    	cout<<"jego wzrost: ";
    	cin>>height;
    	cout<<"semestr: ";
    	cin>>semestr;
    	tab[i] = *Create(age, height, semestr);
    	cout<<endl;
	}
    for (int i = 0; i < 3; i++) {
    	cout<<"Sudent "<<i+1<<":"<<endl;
    	PrintStudent(&tab[i]);
    	cout<<endl;
	}
    free(&tab);
    return 0;
}
