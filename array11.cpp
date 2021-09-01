/*По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “диагоналями”, как показано в примере.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5
Sample Output:

   1   2   4   7  10
   3   5   8  11  13
   6   9  12  14  15
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    int n, m, i, j, j1, k = 1;
    cin >> n >> m;
    vector <vector <int> > a(n, vector <int> (m));
    for (j = 0; j < m + n - 1; j++){
        for (j1 = j, i = 0; j1 >= 0 && i < n; j1--, i++){
            if (j1 < m){
                a[i][j1] = k;
                k++;
            }
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}