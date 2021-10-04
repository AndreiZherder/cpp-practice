/*class practice
*/

#include <iostream>
using namespace std;
class Person {
public:
    Person(string n, int a);
    explicit Person(string n);
    Person();
    virtual void about();
    void setName(string n);
    string getName();
    void setAge(int a);
    int getAge() const;
protected:
    string name;
    int age;
};

class Employee : public Person {
public:
    Employee(string n, int a, string c);
    void setCompany(string c);
    void about() override;
protected:
    string company;
};

Person::Person(string n, int a) {
    name = n;
    age = a;
}

Person::Person(string n) {
    name = n;
    age = 0;
}

Person::Person() {
    name = "Unknown";
    age = 0;
}

void Person::about() {
    cout << "Name = " << name << ", age = " << age << endl;
}
void Person::setName(string n) {
    name = n;
}
string Person::getName() {
    return name;
}
void Person::setAge(int a) {
    age = a;
}
int Person::getAge() const {
    return age;
}

Employee::Employee(string n, int a, string c) : Person(n, a) {
    company = c;
}

void Employee::setCompany(string c) {
    company = c;
}

void Employee::about() {
    cout << "Name = " << name << ", age = " << age << ", company = " << company << endl;
}

int main(){
    Person a = Person("Andrei", 37);
    a.about();
    Person b = Person("Bob");
    b.about();
    Person u = Person();
    u.about();
    u.setName("Vasya");
    u.setAge(15);
    u.about();
    Employee d = Employee("Dan", 31, "Facebook");
    d.about();
    return 0;
}