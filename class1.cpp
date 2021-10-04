/*class practice
*/

#include <iostream>
#include <utility>
using namespace std;
class Person {
public:
    Person(string n, int a) : name(std::move(n)), age(a) {}
    explicit Person(string n) : name(std::move(n)), age(0) {}
    Person() : name("Unknown"), age(0) {}
    void about();
    void setName(string name);
    string getName();
    void setAge(int age);
    int getAge() const;
private:
    string name;
    int age;
};

void Person::about() {
    cout << "Name = " << name << ", age = " << age << endl;
}
void Person::setName(string n) {
    name = std::move(n);
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
    return 0;
}