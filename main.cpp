#include <iostream>

using namespace std;
void ex() {
    /*
    +1.������� �����
    +2.�������� ������������ �����
    3.�������� ������ �� �������� ������������ �����
    4.������� ����� ������ ������������ �����
    */
    int n(0); int max(-1001); int num(0);
    cin >> n;
    for (int i(0); i < n; i++) {
        cin >> num;
        if (num > max)
            max = num;
    }
    cout << max;
}
int main()
{
    ex();
}
