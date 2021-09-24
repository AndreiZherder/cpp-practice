/*Дана строка, содержащая пробелы. Найдите, сколько в ней слов
(слово – это последовательность непробельных символов, слова разделены одним пробелом, первый и последний символ строки – не пробел).

Входные данные

На вход подается несколько строк.

Выходные данные

Необходимо вывести количество слов в первой из введенных строк.

Примечание
В этой задаче может быть полезен метод find с двумя параметрами. Первый из них - искомая подстрока, второй - позиция, начиная с которой нужно искать первое вхождение.
Sample Input:

In the town where I was born
Sample Output:

7
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    unsigned int pos = 0; int k = 0;
    while (pos != -1){
        pos = s.find(' ', pos + 1);
        if (pos != -1){
            k++;
        }
    }
    cout << k + 1;
}