/*Шахматный ферзь ходит по диагонали, горизонтали или вертикали. Даны две различные клетки шахматной доски, определите, может ли ферзь попасть с первой клетки на вторую одним ходом.

Формат входных данных
Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
Формат выходных данных
Программа должна вывести YES, если из первой клетки ходом ферзя можно попасть во вторую или NO в противном случае.
Sample Input 1:

1
1
2
2
Sample Output 1:

YES
Sample Input 2:

1
1
2
3
Sample Output 2:

NO
*/
#include <iostream>
using namespace std;
int main(){
    int v1, h1, v2, h2;
    cin >> v1 >> h1 >> v2 >> h2;
    int dv = v2 - v1;
    int dh = h2 - h1;
    if ((dv == 0) || (dh == 0) || (dv == dh) || (dv == -dh)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}