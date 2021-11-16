#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
void max_sum(){
    ifstream ifs("data.txt");
/*
 + 1.считать число и сохранить
2.вывести пары
3.вместо пар вывести сумму
4.проверить делимость сумм
5.вывести наиб сумму
*/
    int n(0);
    ifs >> n;
    vector<int> numbers(n);
    for (int i(0);i<n;i++)
        ifs >> numbers[i];
    for (int i(0);i<n;i++)
        cout << numbers[i] << " ";
}



int main()
{
    max_sum();
    return 0;
}
