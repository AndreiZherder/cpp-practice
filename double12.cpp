/*Даны вещественные числа a, b, c, d, e, f. Решите систему линейных уравнений
ax + by = e; y = -a/b*x + e/b; x = -b/a*y + e/a;
cx + dy = f; y = -c/d*x + f/d; x = -d/c*y + f/c;
Формат входных данных

Вводятся шесть чисел - коэффициенты уравнений системы.
Формат выходных данных
Вывод программы зависит от вида решения этой системы.

Если система не имеет решений, то программа должна вывести единственное число 0.

Если система имеет бесконечно много решений, каждое из которых имеет вид y=kx+n, то программа должна вывести число 1, а затем значения k и n.

Если система имеет единственное решение (x0, y0), то программа должна вывести число 2, а затем значения x0 и y0.

Если система имеет бесконечно много решений вида x=x0, y — любое, то программа должна вывести число 3, а затем значение x0.

Если система имеет бесконечно много решений вида y=y0, x — любое, то программа должна вывести число 4, а затем значение y0.

Если любая пара чисел (x, y) является решением, то программа должна вывести число 5.
Sample Input 1:

1
0
0
1
3
3
Sample Output 1:

2 3 3
Sample Input 2:

1
1
2
2
1
2
Sample Output 2:

1 -1 1
Sample Input 3:

0
2
0
4
1
2
Sample Output 3:

4 0.5
Sample Input 4:

2
3
4
6
1
2
Sample Output 4:

1 -0.666667 0.333333
Sample Input 5:

0
1
0
3
5
15
Sample Output 5:

4 5
Sample Input 6:

1
0
1
0
3
3
Sample Output 6:

3 3
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double a, b, c, d, e, f, x0, y0, delta, deltax, deltay;
    cin >> a >> b >> c >> d >> e >> f;
    if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0){
        cout << 5;
    }else if((a == 0 && b == 0 && e != 0) || (c == 0 && d == 0 && f != 0)){
        cout << 0;
    }else if (a == 0 && c == 0){
        if (e * d == b * f){
            if (b == 0){
                cout << 4 << " " << f / d;
            }else{
                cout << 4 << " " << e / b;
            }
        }
        else{
            cout << 0;
        }
    }else if(b == 0 && d == 0){
        if (e * c == a * f){
            if (a == 0){
                cout << 3 << " " << f / c;
            }else{
                cout << 3 << " " << e / a;
            }
        }else{
            cout << 0;
        }
    }else if (a * d == b * c && e * d == b * f){
        if (b == 0){
            cout << 1 << " " << -c / d << " " << f / d;
        }else{
            cout << 1 << " " << -a / b << " " << e / b;
        }
    }else if (a * d == b * c){
        cout << 0;
    }else{
        delta = a * d - b * c;
        deltax = e * d - b * f;
        deltay = a * f - e * c;
        x0 = deltax / delta;
        y0 = deltay / delta;
        cout << setprecision(11) << fixed << 2 << " " << x0 << " " << y0;
    }
    return 0;
}