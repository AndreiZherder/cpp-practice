/*Однажды, разбирая старые книги на чердаке, школьник Вася нашёл англо-латинский словарь.
Английский он к тому времени знал в совершенстве, и его мечтой было изучить латынь. Поэтому попавшийся словарь был как раз кстати.
К сожалению, для полноценного изучения языка недостаточно только одного словаря: кроме англо-латинского необходим латинско-английский.
За неимением лучшего он решил сделать второй словарь из первого.

Как известно, словарь состоит из переводимых слов, к каждому из которых приводится несколько слов-переводов.
Для каждого латинского слова, встречающегося где-либо в словаре, Вася предлагает найти все его переводы
(то есть все английские слова, для которых наше латинское встречалось в его списке переводов), и считать их и только их переводами этого латинского слова.

Помогите Васе выполнить работу по созданию латинско-английского словаря из англо-латинского.

Входные данные

В первой строке содержится единственное целое число N — количество английских слов в словаре.
Далее следует N описаний. Каждое описание содержится в отдельной строке, в которой записано сначала английское слово,
затем отделённый пробелами дефис (символ номер 45), затем разделённые запятыми с пробелами переводы этого английского слова на латинский.
Переводы отсортированы в лексикографическом порядке. Порядок следования английских слов в словаре также лексикографический.
Все слова состоят только из маленьких латинских букв, длина каждого слова не превосходит 15 символов. Общее количество слов на входе не превышает 100000.

Выходные данные

В первой строке программа должна вывести количество слов в соответствующем данному латинско-английском словаре.
Со второй строки выведите сам словарь, в точности соблюдая формат входных данных.
В частности, первым должен идти перевод лексикографически минимального латинского слова, далее — второго в этом порядке и т.д.
Внутри перевода английские слова должны быть также отсортированы лексикографически.

Sample Input:

3
apple - malum, pomum, popula
fruit - baca, bacca, popum
punishment - malum, multa
Sample Output:

7
baca - fruit
bacca - fruit
malum - apple, punishment
multa - punishment
pomum - apple
popula - apple
popum - fruit
*/

#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    int N;
    map <string, set <string>> dict;
    cin >> N;
    string s, eng, lat;
    getline(cin, s);
    for (int i = 0; i < N; i++){
        getline(cin, s);
        unsigned int pos = s.find(" - ");
        eng = s.substr(0, pos);
        pos = pos + 3;
        unsigned int pos2 = s.find(',', pos);
        while (pos2 != -1){
            lat = s.substr(pos, pos2 - pos);
            dict[lat].insert(eng);
            pos = pos2 + 2;
            pos2 = s.find(',', pos);
        }
        pos2 = s.size();
        lat = s.substr(pos, pos2 - pos);
        dict[lat].insert(eng);
    }
    cout << dict.size() << endl;
    for (auto & now1 : dict){
        cout << now1.first << " - ";
        int k = 0;
        for (const auto & now2 : now1.second){
            cout << now2;
            if (k < now1.second.size() - 1){
                cout << ", ";
            }
            k++;
        }
        cout << endl;
    }
    return 0;
}