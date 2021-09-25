/*Вам дан словарь, состоящий из пар слов. Каждое слово является синонимом к парному ему слову. Все слова в словаре различны. Для одного данного слова определите его синоним.

Входные данные

Программа получает на вход количество пар синонимов N. Далее следует N строк, каждая строка содержит ровно два слова-синонима. После этого следует одно слово.

Выходные данные

Программа должна вывести синоним к данному слову.

Sample Input:

3
Hello Hi
Bye Goodbye
List Array
Goodbye
Sample Output:

Bye
*/

#include <iostream>
#include <map>
using namespace std;
int main(){
    map <string, string> a, b;
    string s1, s2;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> s1 >> s2;
        a[s1] = s2;
        b[s2] = s1;
    }
    cin >> s1;
    cout << a[s1];
    cout << b[s1];
    return 0;
}