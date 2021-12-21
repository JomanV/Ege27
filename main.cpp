#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ex(){
/*
+1.ввод всех данных,
+2.добавление служебных переменных для решения задачи,
3.вычисление ответа по этим служебным переменным.
*/
int n(0);
cin>>n;
vector<int> num(n,0);
vector<int> a(3,-1);
for (int i(0); i<n; i++)
    cin>>num[i];

sort(num.begin(),num.end());

for (int i(0); i<n; i++)
    cout<<num[i]<<' ';5
}
int main()
{
    ex();
}
