/*Вводится один символ, измените его регистр. То есть, если была введена строчная буква - сделайте ее заглавной и наоборот.
Символы, не являющиеся латинской буквой, нужно выводить без изменений.

Входные данные

Вводится единственый символ.

Выходные данные

Выведите ответ на задачу.

Sample Input:

b
Sample Output:

B
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z'){
        cout << char(int('A') + int(c) - int('a'));
    } else if (c >= 'A' && c <= 'Z') {
        cout << char(int('a') + int(c) - int('A'));
    } else {
        cout << c;
    }
}