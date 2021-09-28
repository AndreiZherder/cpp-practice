/*Во время проведения олимпиады каждый из участников получил свой идентификационный номер – натуральное число.
Необходимо отсортировать список участников олимпиады по количеству набранных ими баллов.

Входные данные

На первой строке дано число N (1 ≤ N ≤ 1000) – количество участников.
На каждой следующей строке даны идентификационный номер и набранное число баллов соответствующего участника. Все числа во входном файле не превышают 105.

Выходные данные

В выходной файл выведите исходный список в порядке убывания баллов.
Если у некоторых участников одинаковые баллы, то их между собой нужно упорядочить в порядке возрастания идентификационного номера.

Sample Input 1:

3
101 80
305 90
200 14
Sample Output 1:

305 90
101 80
200 14
Sample Input 2:

3
20 80
30 90
25 90
Sample Output 2:

25 90
30 90
20 80
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    int number;
    int score;
} Tman;

bool cmp(Tman& man1, Tman& man2) {
    if (man1.score > man2.score) {
        return true;
    } else if (man1.score < man2.score) {
        return false;
    } else {
        return man1.number < man2.number;
    }
}

int main() {
    int N;
    cin >> N;
    vector <Tman> men(N);
    for (int i = 0; i < N; i++) {
        cin >> men[i].number >> men[i].score;
    }
    sort(men.begin(), men.end(), cmp);
    for (auto man : men) {
        cout << man.number << " " << man.score << endl;
    }
    return 0;
}