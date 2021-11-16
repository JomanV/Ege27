#include <iostream>
#include <vector>

using namespace std;
void max_sum(){
/*
 + 1.считать число и сохранить
 + 2.вывести пары
 + 3.вместо пар вывести сумму
 + 4.проверить делимость сумм
  5.вывести наиб сумму
*/
    int n(0);
    int maxN(-1001);
    cin >> n;
    vector<int> numbers(n,0);
    for (int i(0);i<n;i++)
        cin>>numbers[i];
    for (int j(0);j<n-1;j++)
    for (int i(j+1);i<n;i++)
    {
        int cur_sum(numbers[j] + numbers[i]);
        if (cur_sum%2==1 and maxN<cur_sum)
        maxN=cur_sum;
    }
    if (maxN==-1001)
        maxN=-1;
    cout <<maxN<<endl;
}


int main()
{
    max_sum();
    return 0;
}
