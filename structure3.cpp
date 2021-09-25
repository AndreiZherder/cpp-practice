/*map practice
*/

#include <iostream>
#include <map>
using namespace std;
int main(){
    map <string, string> phonebook;
    phonebook["+79212222222"] = "Mom";
    phonebook["+79213333333"] = "Dad";
    phonebook["+79211111111"] = "Bro";

    for (auto record : phonebook){
        cout << record.first << " " << record.second << endl;
    }
    for (auto record = phonebook.begin(); record != phonebook.end(); record++){
        cout << record->first << " " << record->second << endl;
    }
    auto record = phonebook.find("+79213333333");
    if (record != phonebook.end()){
        cout << record->first << " " << record->second;
    }
    return 0;
}