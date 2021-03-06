/*В обувном магазине продается обувь разного размера.
Известно, что одну пару обуви можно надеть на другую, если она хотя бы на три размера больше. В магазин пришел покупатель.
Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так, чтобы он смог надеть их все одновременно.

Входные данные

Сначала вводится размер ноги покупателя (обувь меньшего размера он надеть не сможет), затем количество пар обуви в магазине и размер каждой пары.
Размер — натуральное число, не превосходящее 100, количество пар обуви в магазине не превосходит 1000.

Выходные данные

Выведите единственное число — максимальное количество пар обуви.

Sample Input:

26
5
30 35 40 41 42
Sample Output:

3
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int foot;
    cin >> foot;
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0;
        return 0;
    }
    vector <int> boots(n);
    for (int i = 0; i < n; i++) {
        cin >> boots[i];
    }
    sort(boots.begin(), boots.end());
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (boots[i] >= foot){
            k++;
            foot = boots[i] + 3;
        }
    }
    cout << k;
    return 0;
}