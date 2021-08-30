/*Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента.
Формат входных данных

В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

5
1 5 2 4 3
Sample Output:

5 4
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, i;
    cin >> n;
    vector <int> a(n);
    vector <int> b;
    cin >> a[0];
    for (i = 1; i < n; i++){
        cin >> a[i];
        if (a[i] > a[i - 1]){
            b.push_back(a[i]);
        }
    }
    for (i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    return 0;
}