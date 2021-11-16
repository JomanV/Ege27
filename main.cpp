#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
void max_sum(){
    ifstream ifs("data.txt");
/*
 + 1.считать число и сохранить
 + 2.вывести пары
 + 3.вместо пар вывести сумму
 + 4.проверить делимость сумм
5.вывести наиб сумму
*/
    int n(0);
    ifs >> n;
    vector<int> numbers(n,0);
    for (int i(0);i<n;i++)
        ifs>>numbers[i];
    for (int j(0);j<n-1;j++)
        for (int i(j+1);i<n;i++)
            if ((numbers[j] + numbers[i])%2==1)
            cout <<numbers[j] + numbers[i]<<endl;
}



int main()
{
    max_sum();
    return 0;
}
