/*Даны два списка чисел, которые могут содержать до 100000 чисел каждый.  Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.

Входные данные

Вводится число N - количество элементов первого списка, а затем N чисел первого списка.

Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.

Выходные данные

Выведите ответ на задачу.

Sample Input:

3
1 3 2
3
4 3 2
Sample Output:

2 3
*/

#include <iostream>
#include <set>
using namespace std;
int main(){
    set <int> a, b;
    int N, M, x;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> x;
        a.insert(x);
    }
    cin >> M;
    for (int i = 0; i < M; i++){
        cin >> x;
        if (a.find(x) != a.end()){
            b.insert(x);
        }

    }
    for (auto y : b){
        cout << y << " ";
    }
    return 0;
}