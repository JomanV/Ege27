#include <iostream>

using namespace std;
void number_of_products_div() {
    /*
    «адание #2
    +1. читать входные числа
    +2. отсортировать числа по кратности 154, 7, 2, 11 и остальные
    +3. вывести каждую группу
    4. вывести количество пар кратных 154
    */
    int n(0); int n154(0); int n77(0); int n22(0); int n14(0);
    int n2(0); int n7(0); int n11(0); int n0(0); int num(0);
    unsigned int result;
    cin >> n;
    for (int i(0); i < n; i++)
    {
        cin >> num;
        if (num % 154 == 0)
            n154++;
        else if (num % 77 == 0)
            n77++;
        else if (num % 22 == 0)
            n22++;
        else if (num % 14 == 0)
            n14++;
        else if (num % 11 == 0)
            n11++;
        else if (num % 7 == 0)
            n7++;
        else if (num % 2 == 0)
            n2++;
        else
            n0++;
    }
    result =
        n14 * n22 +
        n77 * n22 +
        n77 * n14 +
        n14 * n11 +
        n77 * n2 +
        n22 * n7 +
        (n14 + n22 + n77 + n0 + n7 + n2 + n11) * n154 +
        n154 * (n154 - 1) / 2;
    cout << result << endl;
}
int main()
{
    number_of_products_div();
}