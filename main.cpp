#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ex(){
/*
+1.���� ���� ������,
2.���������� ��������� ���������� ��� ������� ������,
3.���������� ������ �� ���� ��������� ����������.
*/
int n(0);
cin>>n;
vector<int> num(n,0);
for (int i(0); i<n; i++)
    cin>>num[i];
for (int i(0); i<n; i++)
    cout<<num[i]<<' ';
}
int main()
{
    ex();
}
