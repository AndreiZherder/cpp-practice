/*Выведите фамилии и имена учащихся в порядке убывания их среднего балла.

Входные данные

Заданы сначала количество учащихся n, затем n строк, каждая из которых содержит фамилию, имя и три числа
(оценки по трем предметам: математике, физике, информатике). Данные в строке разделены одним пробелом. Оценки принимают значение от 1 до 5.

Выходные данные

Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом.
Выводить оценки не нужно. Если несколько учащихся имеют одинаковые средние баллы, то их нужно выводить в порядке, заданном во входных данных.

Sample Input:

3
Markov Valeriy 5 5 5
Sergey Petrov 1 1 1
Petrov Petr 3 3 3
Sample Output:

Markov Valeriy
Petrov Petr
Sergey Petrov
*/

#define N 3

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    string family;
    string name;
    int score[N];
    double mean_score;
} Tman;

double mean(const int* x, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += x[i];
    }
    return double(sum) / n;
}

bool cmp(const Tman& man1, const Tman& man2) {
    return man1.mean_score > man2.mean_score;
}

int main() {
    int n;
    cin >> n;
    vector <Tman> men(n);
    for (Tman& man : men) {
        cin >> man.family >> man.name;
        for (int& x: man.score) {
            cin >> x;
        }
        man.mean_score = mean(man.score, N);
    }
    stable_sort(men.begin(), men.end(), cmp);
    for (const auto& man : men) {
        cout << man.family << " " << man.name << endl;
    }
    return 0;
}