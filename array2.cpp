/*Дано нечетное число n, не превосходящее 15.
Создайте двумерный массив из n×n элементов, заполнив его символами "."
(каждый элемент массива является строкой из одного символа).
Затем заполните символами "*" среднюю строку массива, средний столбец массива, главную диагональ и побочную диагональ.
В результате "*" в массиве должны образовывать изображение звездочки. Выведите полученный массив на экран, разделяя элементы массива пробелами.

Sample Input:

5
Sample Output:

* . * . *
. * * * .
* * * * *
. * * * .
* . * . *
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    vector <vector <char> > a(n, vector <char> (n, '.'));
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i == j || i == n - j - 1 || i == (n - 1) / 2 || j == (n - 1) / 2){
                a[i][j] = '*';
            }
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}