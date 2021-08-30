/*Даны вещественные числа a, b, c, d, e, f. Известно, что система линейных уравнений
ax + by = e
cx + dy = f
имеет ровно одно решение. Выведите два числа x и y, являющиеся решением этой системы.

Формат входных данных

Вводятся шесть чисел - коэффициенты уравнений системы.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

1
0
0
1
3
3
Sample Output:

3 3
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double a, b, c, d, e, f, x, y, delta, deltax, deltay;
    cin >> a >> b >> c >> d >> e >> f;
    delta = a * d - b * c;
    deltax = e * d - b * f;
    deltay = a * f - e * c;
    x = deltax / delta;
    y = deltay / delta;
    cout << setprecision(11) << fixed << x << " " << y;
    return 0;
}