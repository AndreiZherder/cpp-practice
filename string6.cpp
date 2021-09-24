/*Найдите в данной строке самое длинное слово и выведите его.

Входные данные

Вводится одна строка. Слова в ней отделены одним пробелом.

Выходные данные

Выведите самое длинное слово. Если таких слов несколько, то выводить нужно, которое встречается раньше.

Sample Input:

Everyone of us has all we need
Sample Output:

Everyone
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    string max_s;
    getline(cin, s);
    unsigned int pos = 0;
    unsigned int prev_pos = -1;
    unsigned int length = 0;
    unsigned int max_length = 0;
    while (pos != -1){
        pos = s.find(' ', prev_pos + 1);
        if (pos != -1){
            length = pos - 1 - prev_pos;
            if (length > max_length){
                max_length = length;
                max_s = s.substr(prev_pos + 1, length);
            }
            prev_pos = pos;
        }
    }
    length = s.size() - 1 - prev_pos;
    if (length > max_length){
        max_length = length;
        max_s = s.substr(prev_pos + 1, length);
    }
    cout << max_s;
}