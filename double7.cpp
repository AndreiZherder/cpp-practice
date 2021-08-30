/*Дана последовательность натуральных чисел x1, x2, ..., xn.
Определите стандартное отклонение для данной последовательности натуральных чисел, завершающейся числом 0.

Формат входных данных

Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
В последовательности не менее двух чисел до 0.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
7
9
0
Sample Output:

4.16333199893
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int x, n;
    long sum_of_sqr, sum;
    double sigma;
    sum_of_sqr = 0;
    sum = 0;
    n = 0;
    cin >> x;
    while (x != 0){
        sum_of_sqr += x * x;
        sum += x;
        n++;
        cin >> x;
    }
    if (n != 0){
        sigma = sqrt((sum_of_sqr - (double)sum * sum / n) / (n - 1));
    }
    else{
        sigma = 0;
    }

    cout << setprecision(11) << fixed;
    cout << sigma;
    return 0;
}