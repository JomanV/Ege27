#include <iostream>
#include <vector>

using namespace std;
void ex(){
/*
+1.считывание N чисел
2.вывод всех пар
3.вывод всех сумм
4.вывод всех сумм, где каждое число не дальше 9 чисел 
5.вывод количества сумм равных 36
*/
int n(0);
cin>>n;
vector<int> all(n,0);
for (int i(0);i<n;i++)
  cin>>all[i];
for (int i(0);i<n;i++)
  cout<<all[i]<<' ';
}
int main()
{
    ex();
    return 0;
}
