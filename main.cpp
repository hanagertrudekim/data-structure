#include <cstring>
#include <iostream>
using namespace std;

class Person {
private:
  char name[20] = {0};
  int id;
  int height;

public:
  char *getName() { return name; }

  int getID() { return id; }

  int getHeight() { return height; }

  void printStudentInfo() {
    cout << " ID: " << id << " name: " << name << " height: " << height << endl;
  }

  void init(int ID, const char *Name, int Height) {
    id = ID;
    strcpy(name, Name);
    height = Height;
  }
};

void personSwap(Person a[2]) {
  struct Person temp;
  temp.init(a[0].getID(), a[0].getName(), a[0].getHeight());
  a[0].init(a[1].getID(), a[1].getName(), a[1].getHeight());
  a[1].init(temp.getID(), temp.getName(), temp.getHeight());
}

int main() {
  struct Person student[2];

  student[0].init(20201125, "wnsh", 33);
  student[1].init(2020132, "hana", 33);

  for (int i = 0; i < 2; i++) {
    student[i].printStudentInfo();
  }

  cout << "값 교환 후" << endl;
  personSwap(student);

  for (int i = 0; i < 2; i++) {
    student[i].printStudentInfo();
  }
}