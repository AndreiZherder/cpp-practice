/*iterator practice
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s = "Hello, world!";
    cout << s << endl;
    for(auto y = s.rbegin(); y < s.rend(); y++){
        cout << *y;
    }
    cout << endl;

    vector <int> a = {1, 2, 3, 4, 5};
    a.push_back(6);
    a.push_back(7);
    a.push_back(8);
    for (auto y : a){
        cout << y << " ";
    }
    cout << endl;
    for(auto y = a.begin(); y < a.end(); y++){
        cout << *y << " ";
    }
    cout << endl;
    for(auto y = a.rbegin(); y < a.rend(); y++){
        cout << *y << " ";
    }
    cout << endl;

    auto iter = a.begin();
    a.insert(iter+1,66);
    for (auto y : a){
        cout << y << " ";
    }
    cout << endl;

    if (s.find("ll") != -1){
        cout << "YES" << endl;
    }

    int b[5] = {11, 12, 13, 14, 15};
    for (auto y : b){
        cout << y << " ";
    }
    cout << endl;
    return 0;
}