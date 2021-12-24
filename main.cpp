#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+1.считать и запомнить числа
+2.вывести все пары чисел
+3.вместо пар вывести произведения
+4.проверить делимость произведений
+5.посчитать и вывести количество подходящих пар
*/
int n(0);int a(0);
cin>>n;
vector<int> num(n,0);
for (int i(0); i<n; i++)
    cin>>num[i];
for (int i(0); i<n; i++)
		for (int j(i+1); j<n; j++)
			if ((num[i]*num[j])%15==0)
			a++;
cout<<a<<endl;
}
int main()
{
    ex();
}
