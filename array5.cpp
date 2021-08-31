/*Дано число n, не превосходящее 10, и массив размером n × n.
Проверьте, является ли этот массив симметричным относительно главной диагонали.
Выведите слово “YES”, если массив симметричный, и слово “NO” в противном случае.

Sample Input:

3
0 1 2
1 2 3
2 3 4
Sample Output:

YES
*/

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, i, j, stop = 0;
    cin >> n;
    vector <vector <int> > a(n, vector <int> (n));
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (a[i][j] != a[j][i]){
                stop = 1;
                break;
            }
        }
        if (stop){
            break;
        }
    }
    if (stop){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
    return 0;
}