/*Дан список целых чисел, который может содержать до 100000 чисел. Определите, сколько в нем встречается различных чисел.

Входные данные

Вводится число N - количество элементов списка, а затем N чисел.

Выходные данные

Выведите ответ на задачу.

Sample Input:

5
1 2 3 2 1
Sample Output:

3
*/

#include <iostream>
#include <set>
using namespace std;
int main(){
    set <int> a;
    int N, x;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> x;
        a.insert(x);
    }
    cout << a.size();
    return 0;
}