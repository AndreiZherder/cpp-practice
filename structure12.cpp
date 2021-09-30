/*iterator practice
*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    string st = "12345";
    set<int> s = {1, 2, 3, 4, 5};
    multiset<int> ms = {1, 2, 3, 4, 5};
    map<int, int> m = {{1, 5}, {2, 4}, {3, 3}, {4, 2}, {5, 1}};
    multimap<int, int> mm = {{1, 5}, {2, 4}, {3, 3}, {4, 2}, {5, 1}};
    unordered_map<int, int> um = {{1, 5}, {2, 4}, {3, 3}, {4, 2}, {5, 1}};
    auto it_v = v.begin();
    auto it_st = st.begin();
    auto it_s = s.begin();
    auto it_ms = ms.begin();
    auto it_m = m.begin();
    auto it_mm = mm.begin();
    auto it_um = um.begin();
    advance(it_v, 1);
    advance(it_st, 1);
    advance(it_s, 1);
    advance(it_ms, 1);
    advance(it_m, 1);
    advance(it_mm, 1);
    advance(it_um, 1);
    return 0;
}