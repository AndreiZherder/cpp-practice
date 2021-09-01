/*По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали,
выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
Формат входных данных
Вводятся два числа n и m, не превышающие 100.

Формат выходных данных
Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.

Sample Input:

4 5
Sample Output:

   1   2   3   4   5
  14  15  16  17   6
  13  20  19  18   7
  12  11  10   9   8
*/

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    int n, m, i, j, x = 0, y = 0, k = 1, size;
    cin >> n >> m;
    vector <vector <int> > a(n, vector <int> (m, 0));
    size = n * m;
    while (k <= size){
        //go right
        while (x < m){
            if (a[y][x] != 0){
                break;
            }
            a[y][x] = k;
            x++;
            k++;
        }
        x--;
        y++;
        //go down
        while (y < n){
            if (a[y][x] != 0){
                break;
            }
            a[y][x] = k;
            y++;
            k++;
        }
        y--;
        x--;
        //go left
        while (x >= 0){
            if (a[y][x] != 0){
                break;
            }
            a[y][x] = k;
            x--;
            k++;
        }
        x++;
        y--;
        //go up
        while (y >= 0){
            if (a[y][x] != 0){
                break;
            }
            a[y][x] = k;
            y--;
            k++;
        }
        y++;
        x++;
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}