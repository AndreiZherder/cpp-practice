/*Яша плавал в бассейне размером N×M метров и устал.
В этот момент он обнаружил, что находится на расстоянии X метров от одного из длинных бортиков (не обязательно от ближайшего) и Y метров от одного из коротких бортиков.
Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик?

Формат входных данных
Программа получает на вход числа N, M, X, Y.
Формат выходных данных
Программа должна вывести число метров, которое нужно проплыть Яше до бортика.

Sample Input:

23
52
8
43
Sample Output:

8
*/
#include <iostream>
using namespace std;
int main(){
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;
    int longside_size, shortside_size;
    if (N > M){
        longside_size = N;
        shortside_size = M;
    }
    else {
        longside_size = M;
        shortside_size = N;
    }
    int a = X;
    int b = shortside_size - X;
    int c = Y;
    int d = longside_size - Y;
    int min = a;
    if (b < min){
        min = b;
    }
    if (c < min){
        min = c;
    }
    if (d < min){
        min = d;
    }
    cout << min;
    return 0;
}