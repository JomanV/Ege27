#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void ex(){
ifstream ifs("data.txt");
/*
+1.считать все числа
+2.вывести все числа
+3.вывести все пары чисел
4.вывести только достаточно далекие пары
5.вместо вывода пары - сумма
6.найти минимальную сумму
*/
int n(0);
ifs>>n;
vector<int> num(n,0);
for (int i(0);i<n;i++)
    ifs>>num[i];
for (int i(0);i<n;i++)
    for (int j(i+1);j<n;j++)
        cout<<num[i]<<" "<<num[j]<<endl;
}
int main()
{
    ex();
    return 0;
}
