#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+1.��������� ������ 2 �� 40 ������
+2.����� ��������� ������ � ����������� [x>40][x%40]+=1
+3.������������ ��������������� ������� ��� 40 ��������, 20 ��������, ��������� ��������
*/
int a(0); int i(0);
vector< vector<int> > num(2,vector<int>(40,0));

cin>>a;

while (a!=-9999){
	num[a>40][a%40]++;
	cin>>a;
}
	
for (int j(1); j<40; j++)
	i+=num[0][j]*num[1][40-j];

for (int j(1); j<20; j++)
	i+=num[1][j]*num[1][40-j];
 
i+=num[0][0]*num[1][0]+num[1][0]*(num[1][0]-1)/2+num[1][20]*(num[1][20]-1)/2;
cout<<i<<endl;	
}
int main()
{
    ex();
}

