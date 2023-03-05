#include "student.h"
using namespace std;

  Student::Student()
  {
    identification = -1;
    name = " ";
  }

  Student::Student(int id, std::string n)
  {
    identification = id;
    name = n;
  }

  string Student::obtainName()
  {
    return name;
  }

  int Student::obtainId()
  {
    return identification;
  }