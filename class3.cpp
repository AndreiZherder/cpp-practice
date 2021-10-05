/*class practice
*/

#include <iostream>
#include <vector>
using namespace std;
class Pet {
public:
    string getPetType();
    string getPetBreed();
    string getPetColor();
    virtual string doVoice() = 0;
protected:
    string type;
    string breed;
    string color;
};

class Dog : public Pet {
public:
    Dog(string type, string breed, string color);
    string doVoice() override;
protected:
    const string voice = "wow";
};

class Cat : public Pet {
public:
    Cat(string type, string breed, string color);
    string doVoice() override;
protected:
    const string voice = "myaw";
};

string Pet::getPetType() {
    return type;
}

string Pet::getPetBreed() {
    return breed;
}

string Pet::getPetColor() {
    return color;
}

Dog::Dog(string type, string breed, string color) {
    this->type = type;
    this->breed = breed;
    this->color = color;
}

string Dog::doVoice() {
    return voice;
}

Cat::Cat(string type, string breed, string color) {
    this->type = type;
    this->breed = breed;
    this->color = color;
}

string Cat::doVoice() {
    return voice;
}

int main(){
    Dog dog("dog", "retriever", "brown");
    Cat cat("cat", "persian", "grey");
    vector<Pet*> pet(2);
    pet[0] = &dog;
    pet[1] = &cat;
    for (auto now : pet) {
        cout << now->getPetType() << " " << now->getPetBreed() << " " << now->getPetColor() << " " << now->doVoice() << " " << now->doVoice() << endl;
    }
    return 0;
}