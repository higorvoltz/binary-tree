#include <iostream>
using namespace std;

class Student
{
  private:
  int identification;
  std::string name;

  public:
  Student();
  Student(int id, std::string n);
  string obtainName();
  int obtainId();
};