#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ex(){
/*
+1.ввод всех данных,
+2.добавление служебных переменных для решения задачи,
+3.вычисление ответа по этим служебным переменным.
*/
int n(0); int a(0);
cin>>n;
vector<int> num(n,0);
vector<int> num_1(n,0);
vector<int> b(3,-1);
for (int i(0); i<n; i++){
    cin>>a;
    num[i]=a;
    num_1[i]=a;}
for (int i(0); i<n-1; i++)
    for (int j(i+1); j<n; j++){
     if (num_1[i]==num_1[j])
        num[j]=-1;}

sort(num.begin(),num.end());

for (int i(0); i<n; i++)
    cout<<num[i]<<' ';
}
int main()
{
    ex();
}
