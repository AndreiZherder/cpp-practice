/*В сети интернет каждому компьютеру присваивается четырехбайтовый код, который принято записывать в виде четырех чисел,
каждое из которых может принимать значения от 0 до 255, разделенных точками. Вот примеры правильных IP-адресов:
127.0.0.0
192.168.0.1
255.0.255.255
Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.

Входные данные

Программа получает на вход строку из произвольных символов.

Выходные данные

Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.

Примечание

Для перевода из строки в число удобно пользоваться функцией stoi, которая принимает на вход строку, а возвращает число.

Sample Input:

127.0.0.1
Sample Output:

YES
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s, s1, s2, s3, s4;
    int si1, si2, si3, si4;
    unsigned int pos1, pos2, pos3;
    cin >> s;
    unsigned int size = s.size();
    for (int i = 0; i < size; i++){
        if (s[i] != '.' && (s[i] < '0' || s[i] > '9')){
            cout << "NO";
            return 0;
        }
    }
    pos1 = s.find('.');
    if ((pos1 == -1) || (pos1 == 0) || (pos1 > 3)){
        cout << "NO";
        return 0;
    }
    pos2 = s.find('.', pos1 + 1);
    if ((pos2 == -1) || ((pos2 - pos1) == 1) || ((pos2 - pos1) > 4)){
        cout << "NO";
        return 0;
    }
    pos3 = s.find('.', pos2 + 1);
    if ((pos3 == -1) || ((pos3 - pos2) == 1) || ((pos3 - pos2) > 4) || (pos3 == (size - 1))){
        cout << "NO";
        return 0;
    }
    if (s.find('.', pos3 + 1) != -1){
        cout << "NO";
        return 0;
    }
    s1 = s.substr(0, pos1);
    s2 = s.substr(pos1 + 1, pos2 - pos1 - 1);
    s3 = s.substr(pos2 + 1, pos3 - pos2 - 1);
    s4 = s.substr(pos3 + 1, size - pos3 - 1);
    si1 = stoi(s1);
    si2 = stoi(s2);
    si3 = stoi(s3);
    si4 = stoi(s4);
    if (si1 < 0 || si1 > 255 || si2 < 0 || si2 > 255 || si3 < 0 || si3 > 255 || si4 < 0 || si4 > 255){
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}