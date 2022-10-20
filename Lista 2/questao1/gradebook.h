#include <string>

using namespace std;

class GradeBook {

public:
    GradeBook(string coursename, string nameprof);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void setNameProf(string);
    string getNameProf();

private:
    
    string courseName;
    string nameProf;

};