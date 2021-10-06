//stream practice

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream f;
    f.open("../lyrics.txt", ios::in);
    if (f.is_open()) {
        string s;
        while (getline(f, s)) {
            cout << s << "\n";
        }
    } else {
        cerr << "File open error\n";
    }

    f.close();
    return 0;
}