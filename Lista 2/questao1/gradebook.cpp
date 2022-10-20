#include <iostream>
using namespace std;
#include "gradebook.h"

GradeBook::GradeBook(string name, string nameprof)
{
    setCourseName(name);
    setNameProf(nameprof);
}
void GradeBook::setCourseName( string name ) {
    courseName = name;
}
string GradeBook::getCourseName() {
    return courseName;
}
void GradeBook::setNameProf(string nameprof){
    this -> nameProf = nameprof;
}
string GradeBook::getNameProf(){
    return nameProf;
}


void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for: " << getCourseName() << endl;
    cout << "with the Professor: " << getNameProf() << "!" << endl;
}

