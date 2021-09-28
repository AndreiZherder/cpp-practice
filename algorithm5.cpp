/*Выведите все исходные точки в порядке возрастания их расстояний от начала координат.

Входные данные

Программа получает на вход набор точек на плоскости.
Сначала задано количество точек n, затем идет последовательность из n строк, каждая из которых содержит два числа: координаты точки.
Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 103.

Выходные данные

Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.

Sample Input:

2
1 2
2 3
Sample Output:

1 2
2 3
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct {
    int x;
    int y;
    int r;
} Tpoint;

bool cmp(Tpoint& point1, Tpoint& point2) {
    return point1.r < point2.r;
}

int main() {
    int N;
    cin >> N;
    vector <Tpoint> points(N);
    for (int i = 0; i < N; i++) {
        cin >> points[i].x >> points[i].y;
        points[i].r = points[i].x * points[i].x + points[i].y * points[i].y;
    }
    sort(points.begin(), points.end(), cmp);
    for (auto point : points) {
        cout << point.x << " " << point.y << endl;
    }
    return 0;
}