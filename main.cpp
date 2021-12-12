#include <iostream>

using namespace std;
void ex() {
    /*
    +1.считать числа
    +2.находить максимальное число
    +3.находить второе по величине максимальное число
    +4.проверять на второе мах число на четность
    5.вывести сумму первых максимальных чисел
    6.проверять на действительность числа
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