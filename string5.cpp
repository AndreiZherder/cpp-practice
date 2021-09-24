/*По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).

Входные данные

На вход подается 1 строка без пробелов.

Выходные данные

Необходимо вывести yes, если строка является палиндромом, и no в противном случае.

Sample Input:

kayak
Sample Output:

yes
*/

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    bool stop = false;
    cin >> s;
    unsigned int length = s.size();
    if (length == 1){
        cout << "yes";
        return 0;
    }
    unsigned int half_length = length / 2;
    for (int i = 0; i < half_length; i++){
        if (s[i] != s[length - i - 1]){
            stop = true;
            break;
        }
    }
    if (stop){
        cout << "no";
    } else {
        cout << "yes";
    }
}