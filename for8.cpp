/*Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

6
1 2 2 3 3 3
Sample Output:

3
*/

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main(){
    int n, i, k = 1;
    cin >> n;
    vector <int> a(n);
    cin >> a[0];
    for (i = 1; i < n; i++){
        cin >> a[i];
        if (a[i] > a[i-1]){
            k++;
        };
    }
    cout << k;
    return 0;
}