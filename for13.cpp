/*Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга.
Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
Формат входных данных

Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
Sample Input 1:

1 7
2 4
3 2
4 8
5 6
6 1
7 3
8 5
Sample Output 1:

NO
Sample Input 2:

1 8
2 7
3 6
4 5
5 4
6 3
7 2
8 1
Sample Output 2:

YES
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n = 8, i, j, match = 0;
    vector <int> x(n);
    vector <int> y(n);
    for (i = 0; i < n; i++){
        cin >> x[i]; cin >> y[i];
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (j != i && (x[j] == x[i] || y[j] == y[i])){
                match = 1; i = n; j =n;
            }
            if (!match && j != i && (y[j] - y[i] == x[j] - x[i] || y[j] - y[i] == x[i] - x[j])){
                match = 1; i = n; j = n;
            }
        }
    }
    if (match){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}