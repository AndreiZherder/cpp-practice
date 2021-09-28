#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <pair<int, int>> a = { {8, 5}, {9, 8}, {7, 1} };

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (const auto& x : a){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}