/*Дано три числа. Упорядочите их в порядке неубывания.

Формат входных данных
Вводятся три числа.
Формат выходных данных
Выведите ответ на задачу.
*/
#include <iostream>
using namespace std;
int main(){
    int a, b, c, tmp;
    cin >> a >> b >> c;
    if (a > b){
        tmp = b;
        b = a;
        a = tmp;
    }
    if (b > c){
        tmp = b;
        b = c;
        c = tmp;
    }
    if (a > b){
        tmp = b;
        b = a;
        a = tmp;
    }
    cout << a << " " <<  b  << " " << c;
    return 0;
}