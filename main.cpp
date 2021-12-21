#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+1.ввод чисел,
+2.вывод чисел на экран,
+3.вывод пар,
+4.вывод троек,
+5.вывод только подходящих троек,
6.подсчёт подходящих троек
*/
int n(0); int sum_3(0);
cin>>n;
vector<int> num(n,0);
for (int i(0); i<n; i++)
    cin>>num[i];
for (int i(0); i<n-2; i++)
    for (int j(i+1); j<n-1; j++)
            for (int z(j+1); z<n; z++){
                sum_3=num[i]+num[j]+num[z];
                if (sum_3%4==0)
                    cout<<num[i]<<' '<<num[j]<<' '<<num[z]<<endl;
                }
}
int main()
{
    ex();
}
