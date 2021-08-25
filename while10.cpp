/*Последовательность Фибоначчи определяется так:

F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).

По данному числу N определите N-е число Фибоначчи F(N).

Формат входных данных
Вводится натуральное число N.
Формат выходных данных
Выведите ответ на задачу.
Sample Input:

6
Sample Output:

8
*/
#include <iostream>
using namespace std;
int main(){
    int N, FN, FN1, FN2, i;
    cin >> N;
    if (N == 0){
        FN = 0;
    }else if (N == 1){
        FN = 1;
    }else{
        FN1 = 1;
        FN2 = 0;
        i = 2;
        while (i <= N) {
            FN = FN1 + FN2;
            FN2 = FN1;
            FN1 = FN;
            i++;
        }
    }
    cout << FN;
    return 0;
}