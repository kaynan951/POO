#include <iostream>
using namespace std;
#include "gradebook.h"

int main(){

    GradeBook gradeBook1("BCC221 - POO", "Prof. Joao");
    GradeBook gradeBook2("BCC202 - AED's I", "Prof. Maria");

    cout << "Gradebook1 created for course: " << gradeBook1.getCourseName() << endl
         << "Gradebook2 created for course: " << gradeBook2.getCourseName()
         << endl;

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();

    return 0;
}