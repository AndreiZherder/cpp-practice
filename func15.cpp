//capitalize

#include <iostream>
#include <vector>

using namespace std;

string capitalize(string word) {
    if ('a' <= word[0] && word[0] <= 'z') {
        word[0] = word[0] + 'A' - 'a';
    }
    return word;
}

int main(){
    string s;
    getline(cin, s);
    vector<string> words;
    string word;
    for (char& ch : s) {
        if (ch != ' ') {
            word.push_back(ch);
        } else {
            words.push_back(word);
            word = "";
        }
    }
    words.push_back(word);
    for (auto& word : words) {
        word = capitalize(word);
        cout << word << " ";
    }

    return 0;
}