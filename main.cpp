#include <iostream>
#include <vector>

using namespace std;
void ex(){
/*
+1.считывание N чисел
+2.вывод всех пар
+3.вывод всех сумм
+4.вывод всех сумм, где каждое число не дальше 9 чисел 
+5.вывод пар кратных 36
6.вывод количества сумм кратных 36
*/
int n(0); int sum(0);
cin>>n;
vector<int> all(n,0);
for (int i(0);i<n;i++)
  cin>>all[i];
for (int i(0);i<n;i++)
  for (int j(i+1);j<n and (j-i)<=9;j++){
    sum=all[i]+all[j];
    if (sum%36==0)
      cout<<sum<<' ';}
}
int main()
{
    ex();
    return 0;
}
