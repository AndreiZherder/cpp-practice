/*Определите среднее значение всех элементов последовательности, завершающейся числом 0.

Формат входных данных

Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
7
9
0
Sample Output:

5.66666666667
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double mean;
    int x, sum, k;
    k = 0;
    sum = 0;
    cin >> x;
    while (x != 0){
        sum += x;
        k++;
        cin >> x;
    }
    if (k != 0){
        mean = (double)sum / k;
    }
    else{
        mean = 0;
    }
    cout << setprecision(11) << fixed;
    cout << mean;
    return 0;
}