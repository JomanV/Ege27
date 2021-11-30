#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+1.считать все числа
+2.вывести все числа
+3.вывести все пары чисел
+4.вывести только достаточно далекие пары
+5.вместо вывода пары - сумма
+6.найти минимальную сумму
*/
int n(0); int min_sum(1000000);
cin>>n;
vector<int> num(n,0);
for (int i(0);i<n;i++)
    cin>>num[i];
for (int i(0);i<n;i++)
    for (int j(i+4);j<n;j++)
        if (num[i]+num[j]<min_sum)
            min_sum=num[i]+num[j];
cout<<min_sum<<endl;
}
int main()
{
    ex();
    return 0;
}
