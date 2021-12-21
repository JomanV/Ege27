#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+1.ввод чисел,
+2.вывод чисел на экран,
3.вывод пар, вывод троек,
4.вывод только подходящих троек,
5.подсчёт подходящих троек
*/
int n(0);
cin>>n;
vector<int> num(n,0);
for (int i(0); i<n; i++)
    cin>>num[i];
for (int i(0); i<n; i++)
    cout<<num[i]<<' ';
}
int main()
{
    ex();
}
