#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
1.��������� ������ 2 �� 40 ������
2.����� ��������� ������ � ����������� [x>40][x%40]+=1
3.������������ ��������������� ������� ��� 40 ��������, 20 ��������, ��������� ��������
*/
int a(0); int i(0);
vector< vector<int> > num(2,vector<int>(40,0));

for (int n(0); n<2; n++){
		for (int j(0); j<40; j++)
		cout<<num[n][j]+n*40+j<<" ";
	cout<<endl;}
	
}
int main()
{
    ex();
}

