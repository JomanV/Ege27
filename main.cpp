#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+1.���� �����
+2.������� ��������, �������� ��������� ������ �� �������
+3.����� ����������� ����� �� ���� ��������� �� ������� �����
+4.����� ������������ ����� � ��������� � ������ ��������, ������ ��� ��� ���� ������
+5.����� ����������� ����� �� ���� ���
*/
int n(0); int a(1001); vector<int> worm(4,0);
cin>>n;
int b(10000);
cin>>worm[0];
cin>>worm[1];
cin>>worm[2];
cin>>worm[3];
for (int i(4);i<n;i++){
    if (a>worm[0])
        a=worm[0];
    worm[0]=worm[1];
    worm[1]=worm[2];
    worm[2]=worm[3];
    cin>>worm[3];
    if (b>a+worm[3])
        b=a+worm[3];
    }
cout<<b<<endl;
}
int main()
{
    ex();
}
