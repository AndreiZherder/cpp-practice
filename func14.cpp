/*Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.

Формат входных данных
Задано единственное число N. (N ≤ 10)

Формат выходных данных
Выведите ответ на задачу.
Подсказка
Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец.
Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), то такой вариант даже не стоит рассматривать.
Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
Sample Input:

8
Sample Output:

92
*/

#include <iostream>
#include <vector>
using namespace std;
int k = 0;
bool beat(int x1, int y1, int x2, int y2){//функция определяет, бьют ли два ферзя друг друга
    int dx = x2 - x1;
    int dy = y2 - y1;
    if ((dx == 0) || (dy == 0) || (dx == dy) || (dx == -dy)){
        return true;
    }
    else {
        return false;
    }
}
void out(int n, vector <int>& f){//функция выводит на экран положение ферзей на доске
    vector <vector <char> > a(n, vector <char> (n, '-'));
    for (int col = 0; col < n; col++){
        a[col][f[col]] = '*';
    }
    for (int y = 0; y < n; y++){
        for (int col = 0; col < n; col++){
            cout << a[col][n - y - 1] << " ";
        }
        cout << endl;
    }
    for (int y = 0; y < n; y++){
        cout << f[y] << " ";
    }
    cout << endl;
}

void set(int col, int n, vector <int>& f){
    int match;
    for (int y = 0; y < n; y++){//ищем координату y, где ферзь не будет бить ферзей в предыдущих столбцах
        match = 0;
        for (int x = 0; x < col; x++){
            if (beat(col, y, x, f[x])){
                match = 1;//ферзь (col, y) бьет одного из ферзей в предыдущих столбцах
                break;
            }
        }
        if (!match){//если ферзь (col, y) не бьет ферзей в предыдущих столбцах, ставим ферзя в (col, y)
            f[col] = y;
            if (col == n - 1){//если ферзь был поставлен в последний столбец, увеличиваем счетчик
                k++;
                //out(n, f);//вывод доски
                return;
            }
            set(col + 1, n, f);
        }
    }
    //не удалось поставить ферзя в столбец col
}
int main(){
    int n;
    cin >> n;
    vector <int> f(n, 0);
    set(0, n, f);
    cout << k;
}