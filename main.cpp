#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+1.������� � ��������� �����
+2.������� ��� ���� �����
+3.������ ��� ������� ������������
4.��������� ��������� ������������
5.��������� � ������� ���������� ���������� ���
*/
int n(0);
cin>>n;
vector<int> num(n,0);
for (int i(0); i<n; i++)
    cin>>num[i];
for (int i(0); i<n; i++)
		for (int j(i+1); j<n; j++)
    		cout<<num[i]*num[j]<<endl;
}
int main()
{
    ex();
}
