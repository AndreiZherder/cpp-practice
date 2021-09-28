/*iterator practice
*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;
int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    auto it = v.begin();
    while (it != v.end()) {
        cout << *it << " ";
        it++;
        if (it == v.end() - 1) {
            break;
        }
    }
    cout << endl;

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    string s = "Hello, my dear friends!";
    for (char i : s) {
        cout << i;
    }
    cout << endl;

    vector <string> words;
    s.push_back(' ');
    int pos = 0;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == ' ')  {
            words.push_back(s.substr(pos, i - pos));
            pos = i + 1;
        }
    }
    for (const auto& word : words) {
        cout << word << endl;
    }

    map <string, int> scores;
    pair <string, int> rec;
    rec = {"Tom", 5};
    scores.insert(rec);
    rec = {"Ann", 4};
    scores.insert(rec);
    rec = {"Kate", 4};
    scores.insert(rec);
    rec = {"Jim", 3};
    scores.insert(rec);
    rec = {"Jim", 4};
    scores.insert(rec);
    scores["Jim"] = 6;
    for (const auto& score : scores){
        cout << score.first << " " << score.second << endl;
    }
    auto it1 = scores.find("Kate");
    cout << it1->first << " " << it1->second << endl;
    it1 = scores.find("Andy");
    if (it1 == scores.end()){
        cout << "Andy NOT FOUND" << endl;
    }
    return 0;
}