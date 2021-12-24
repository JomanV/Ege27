#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+ 1.ввод чисел и вывод чисел
+ 2.вывод каждой пары
3.вывод пар сумма которых кратна 40
4.вывод пар сумма которых кратна 40 и где хотя бы 1 элемент пары был больше сорока
5.вывод количества таких пар
*/
int n(0);
cin>>n;
vector<int> num(n,0);
for (int i(0); i<n; i++)
    cin>>num[i];
for (int i(0); i<n; i++)
		for (int j(i+1); j<n; j++)
    		cout<<num[i]<<' '<<num[j]<<endl;
}
int main()
{
    ex();
}
