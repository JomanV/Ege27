#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+1.���� �����
+2.������� ��������, �������� ��������� ������ �� �������
+3.����� ����������� ����� �� ���� ��������� �� ������� �����
4.����� ������������ ����� � ��������� � ������ ��������, ������ ��� ��� ���� ������
5.����� ����������� ����� �� ���� ���
*/
int n(0); int a(1001); vector<int> worm(4,0);
cin>>n;
vector<int> min_n(n-4,0);
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
    min_n[i-4]=a;
    }
for (int i(0);i<n-4;i++)
    cout<<min_n[i]<<" ";
}
int main()
{
    ex();
}
