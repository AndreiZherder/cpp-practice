/*Дан прямоугольный массив размером n×m. Поверните его на 90 градусов по часовой стрелке, записав результат в новый массив размером m×n.

Формат входных данных
Вводятся два числа n и m, не превосходящие 100, затем массив размером n×m.
Формат выходных данных
Выведите получившийся массив. Числа при выводе разделяйте одним пробелом.

Sample Input:

3 4
11 12 13 14
21 22 23 24
31 32 33 34
Sample Output:

31 21 11
32 22 12
33 23 13
34 24 14
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m, i, j, tmp;
    cin >> n >> m;
    vector <vector <int> > a(n, vector <int> (m));
    vector <vector <int> > b(m, vector <int> (n));
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (j = 0; j < m; j++){
        for (i = 0; i < n; i++){
            b[j][i] = a[n - i - 1][j];
        }
    }
    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}