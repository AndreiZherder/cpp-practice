/*set practice
*/

#include <iostream>
#include <set>
using namespace std;
int main(){
    multiset <int> a = {5, 4, 3, 2, 1, 5};
    for (auto x : a){
        cout << x << " ";
    }
    cout << endl;

    a.insert(5);
    a.insert(6);
    for (auto x : a){
        cout << x << " ";
    }
    cout << endl;
    if (a.find(6) == a.end()) {
        cout << "Not found" << endl;
    } else {
        cout << "Found" << endl;
    }

    int k = 0;
    for (auto x = a.lower_bound(5); x != a.upper_bound(5); x++){
        k++;
    }
    cout << "k = " << k << endl;

    return 0;
}