#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
void ex(){
ifstream ifs("data.txt");
/*
+1.������� 4 ����� � �������
+2.����� � ������ �������-������������� ������� �� ����������
+3.�������� ��� ����� � ������� �����
+4.������� ����� ����� � ���� �������
+5.------------������� ������� � ���������� ������ ��� ��������
6.������� ���� �� ����, ��� � ����� �������, � ����������� ��������
7.��� �������� �� ����������� ����
8.���� ��� ������� ��������, ���������
*/
int n(0); int min_num(99999);
ifs>>n;
vector<int> num(n,0);
vector<int> worm(4,0);

for (int i(0);i<n;i++)
    ifs>>num[i];
for (int i(0);i<n-3;i++){
    for (int j(0);j<4;j++)
        worm[j]=num[i+j];
    if (min_num>worm[0])
        min_num=worm[0];
    cout<<worm[0]<<" "<<worm[1]<<" "<<worm[2]<<" "<<worm[3]<<"   "<<min_num<<endl;
    }
}

int main()
{
    ex();
    return 0;
}
