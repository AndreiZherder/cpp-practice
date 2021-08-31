/*По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”, как показано в примере.

Формат входных данных
Вводятся два числа n и m, каждое из которых не превышает 30.
Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

3 5
Sample Output:

   1   2   3   4   5
  10   9   8   7   6
  11  12  13  14  15
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, m, i, j, k = 1;
    cin >> n >> m;
    vector <vector <int> > a(n, vector <int> (m));
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (i % 2 == 0){
                a[i][j] = k;
            }else{
                a[i][m - j - 1] = k;
            }
            k++;
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (a[i][j] >= 100){
                cout << " " << a[i][j];
            }else if (a[i][j] >= 10){
                cout << "  " << a[i][j];
            }else{
                cout << "   " << a[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}