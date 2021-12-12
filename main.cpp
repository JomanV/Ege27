#include <iostream>

using namespace std;
void ex() {
    /*
    +1.считать числа
    +2.находить максимальное число
    3.находить второе по величине максимальное число
    4.вывести сумму первых максимальных чисел
    */
    int n(0); int m(-1001); int m2(-1001); int num(0);
    cin >> n;
    for (int i(0); i < n; i++) {
        cin >> num;
        if (num > m2) {
            m2 = num;
                if (m2 > m) {
                    m = m + m2;
                    m2 = m - m2;
                    m = m - m2;
                }
        }
    }
    cout << m2;
}
int main()
{
    ex();
}
