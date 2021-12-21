#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ex(){
/*
+1.ввод чисел,
+2.вывод чисел на экран,
+3.вывод пар,
+4.вывод троек,
+5.вывод только подходящих троек,
+6.подсчёт подходящих троек
*/
int n(0); int sum_3(0);; int max_3(0); int a(0);
cin>>n;
vector<int> num(n,0);
vector<int> num_1(n,0);
vector<int> max_n(3,0);

for (int i(0); i<n; i++){
    cin>>a;
    num[i]=a;
    num_1[i]=a;}
for (int i(0); i<n-1; i++)
    for (int j(i+1); j<n; j++){
     if (num_1[i]==num_1[j])
        num[j]=-1;
}
for (int i(0); i<n-2; i++)
    for (int j(i+1); j<n-1; j++)
            for (int z(j+1); z<n; z++){
                if(num[i]>-1 and num[j]>-1 and num[z]>-1 ){
                    sum_3=num[i]+num[j]+num[z];
                    if (sum_3%4==0 and max_3<sum_3)
                        max_3=sum_3;
                        max_n[0]=num[i];
                        max_n[1]=num[j];
                        max_n[2]=num[z];}
                }
cout<<max_n[0]<<' '<<max_n[1]<<' '<<max_n[2]<<endl;
}
int main()
{
    ex();
}
