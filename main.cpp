#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
void max_sum(){
    ifstream ifs("data.txt");
/*
 + 1.������� ����� � ���������
2.������� ����
3.������ ��� ������� �����
4.��������� ��������� ����
5.������� ���� �����
*/
    int n(0);
    ifs >> n;
    vector<int> numbers(n);
    for (int i(0);i<n;i++)
        ifs >> numbers[i];
    for (int i(0);i<n;i++)
        cout << numbers[i] << " ";
}



int main()
{
    max_sum();
    return 0;
}
