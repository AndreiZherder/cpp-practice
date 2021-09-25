/*Во входной строке записана последовательность чисел через пробел.
Для каждого числа выведите слово YES (в отдельной строке), если это число ранее встречалось в последовательности или NO, если не встречалось.

Входные данные

Вводится число N - количество элементов списка, а затем N чисел.

Выходные данные

Выведите ответ на задачу.

Sample Input:

6
1 2 3 2 3 4
Sample Output:

NO
NO
NO
YES
YES
NO
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
        if (a.find(x) == a.end()){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
        a.insert(x);
    }
    return 0;
}