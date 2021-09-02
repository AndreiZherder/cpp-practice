/*pointers practice
*/

#include <iostream>
using namespace std;
int main(){
    int *b;
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    b = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << *(b+i) << " ";
    }
    cout << endl;
    free(b);

    b = new int[n * sizeof(int)];
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        cout << *(b+i) << " ";
    }
    cout << endl;
    delete [] b;

    int a = 0;
    int *p = &a;
    cout << "a = " << a << endl;
    cout << "&a = " << &a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

    return 0;
}