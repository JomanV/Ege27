#include <iostream>

using namespace std;
void ex() {
    /*
    +1.������� �����
    +2.�������� ������������ �����
    +3.�������� ������ �� �������� ������������ �����
    +4.��������� �� ������ ��� ����� �� ��������
    5.������� ����� ������ ������������ �����
    6.��������� �� ���������������� �����
    */
    int n(0); int m(-1001); int m2(-1001); int num(0);
    cin >> n;
    for (int i(0); i < n; i++) {
        cin >> num;
        if (num > m2 and num % 2 == 1)
            m2 = num;
        else if (num > m and num % 2 == 0)
            m = num;
    }
    cout << m2 <<" "<< m;
}
int main()
{
    ex();
}