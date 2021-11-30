#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
void ex(){
ifstream ifs("data.txt");
/*
+1.считать 4 числа в червяка
2.число в хвосте червяка-потенциальный минимум из пройденных
3.сдвинуть все числа в червяке влево
4.считать пятоу число в зубы червыку
5.------------вывести червяка и пройденный минимм для проверки
6.собрать пару из того, что в зубах червяка, и пройденного минимума
7.это кондидат на минииальную пару
8.один зод чераяка закончен, повторяем
*/
int n(0);
ifs>>n;
vector<int> num(n,0);
vector<int> worm(4,0);

for (int i(0);i<n;i++)
    ifs>>num[i];
for (int i(0);i<n-3;i++){
    for (int j(0);j<4;j++)
        worm[j]=num[i+j];
    cout<<worm[0]<<" "<<worm[1]<<" "<<worm[2]<<" "<<worm[3]<<endl;
    }
}

int main()
{
    ex();
    return 0;
}
