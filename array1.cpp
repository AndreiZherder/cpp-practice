/*Найдите индексы первого вхождения максимального элемента.

Формат входных данных
Программа получает на вход размеры массива n и m, затем n строк по m чисел в каждой. n и m не превышают 100.

Формат выходных данных
Выведите два числа: номер строки и номер столбца, в которых стоит наибольший элемент в двумерном массиве.
Если таких элементов несколько, то выводится тот, у которого меньше номер строки, а если номера строк равны, то тот, у которого меньше номер столбца.

Sample Input:

3 4
0 3 2 4
2 3 5 5
5 1 2 3
Sample Output:

1 2
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m, i, j, max, maxi, maxj;
    cin >> n >> m;
    vector <vector <int> > a(n, vector <int> (m));
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    max = a[n-1][m-1];
    for (i = n - 1; i>=0; i--){
        for (j = m - 1; j>=0; j--){
            if (a[i][j] >= max){
                max = a[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    cout << maxi << " " << maxj;
    return 0;
}