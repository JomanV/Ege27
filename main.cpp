#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void ex(){
ifstream ifs("data.txt");
/*
+1.������� ��� �����
+2.������� ��� �����
+3.������� ��� ���� �����
4.������� ������ ���������� ������� ����
5.������ ������ ���� - �����
6.����� ����������� �����
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
