/*Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.

Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input 1:

5
0 1 2 3 4
Sample Output 1:

1
Sample Input 2:

5
2 4 6 8 10
Sample Output 2:

0
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int n, i, found = 0, min = INT_MAX;
    cin >> n;
    vector <int> a(n);

    for (i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] % 2 != 0){
            found = 1;
            if (a[i] < min){
                min = a[i];
            }
        }
    }
    if (found == 0){
        cout << 0;
    }else {
        cout << min;
    }
    return 0;
}