#include <iostream>

using namespace std;
void number_of_products_div() {
    /*
    «адание #2
    +1. читать входные числа
    2. отсортировать числа по кратности 154, 7, 2, 11 и остальные
    3. вывести каждую группу
    4. вывести количество пар кратных 154
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i < n; i++)
        cin >> numbers[i];
    for (int i(0); i < n; i++)
        cout << numbers[i] << " ";
}



int main()
{
    number_of_products_div();
}
