#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+ 1.���� ����� � ����� �����
+ 2.����� ������ ����
+ 3.����� ��� ����� ������� ������ 40
+ 4.����� ��� ����� ������� ������ 40 � ��� ���� �� 1 ������� ���� ��� ������ ������
5.����� ���������� ����� ���
*/
int a(0); int i(0);
vector<int> num(40000,0);
while (a!=-9999){
    cin>>a;
	  if (a!=-9999){
		  i++;
		  num[i]=a;
    }
}
for (int n(0); n<i; n++)
		for (int j(n+1); j<i; j++)
			if ((num[n]+num[j])%40==0 and (num[n]>40 or num[j]>40))
    			cout<<num[n]<<' '<<num[j]<<endl;
}
int main()
{
    ex();
}
