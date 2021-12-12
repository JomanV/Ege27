#include <iostream>

using namespace std;
void number_of_products_div() {
    /*
    +1. читать и выводить входные числа
    +2. отсортировать и посчитать числа кратные 15, кратные 5, кратные 3 и не кратные этим числам 
    +3. вывести каждую группу
    4. вывести количество пар кратных 15
    */
    int n(0); int n3(0); int n5(0); int n15(0); int n0(0); int num(0);
    cin >> n;
    for (int i(0); i < n; i++) {
        cin >> num;
        if (num % 15 == 0)
            n15++;
        else if (num % 3 == 0)
            n3++;
        else if (num % 5 == 0)
            n5++;
        else
            n0++;
    }
    cout << n15 << " " << n5 << " " << n3 << " " << n0 << endl;
}
int main()
{
    number_of_products_div();
}
