/*Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.

Формат входных данных

Вводятся три действительных числа.
Формат выходных данных
Если данное уравнение не имеет корней, выведите число 0.
Если уравнение имеет один корень, выведите число 1, а затем этот корень. Если уравнение имеет два корня, выведите число 2, а затем два корня в порядке возрастания. Если уравнение имеет бесконечно много корней, выведите число 3.
Sample Input:

1
-1
-2
Sample Output:

2 -1 2
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double a, b, c;
    double d, x1, x2;
    cin >> a >> b >> c;
    if (a == 0 && b == 0 & c == 0){
        cout << 3;
    }
    else if (a == 0 && b == 0){
        cout << 0;
    }
    else if (a == 0){
        cout << setprecision(11) << fixed << 1 << " " << -c / b;
    }
    else{
        d = b * b - 4 * a * c;
        if (d > 0){
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            if (x1 > x2){
                cout << setprecision(11) << fixed << 2 << " " << x2 << " " <<  x1;
            }
            else{
                cout << setprecision(11) << fixed << 2 << " " << x1 << " " << x2;
            }
        }
        else if (d == 0){
            x1 = -b / (2 * a);
            cout << setprecision(11) << fixed << 1 << " " << x1;
        }
        else{
            cout << 0;
        }
    }
    return 0;
}