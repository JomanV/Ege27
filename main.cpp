#include <iostream>
#include <vector>

using namespace std;

void ex(){
/*
+1.заполнить массив 2 на 40 нулями
+2.затем заполнить массив с счетсчиками [x>40][x%40]+=1
+3.суммитровать комплементарные остатки для 40 отдельно, 20 отдельно, остальные отдельно
*/
int a(0); int i(0);
vector< vector<int> > num(2,vector<int>(40,0));

cin>>a;

while (a!=-9999){
	num[a>40][a%40]++;
	cin>>a;
}
	
for (int j(1); j<40; j++)
	i+=num[0][j]*num[1][40-j];

for (int j(1); j<20; j++)
	i+=num[1][j]*num[1][40-j];
 
i+=num[0][0]*num[1][0]+num[1][0]*(num[1][0]-1)/2+num[1][20]*(num[1][20]-1)/2;
cout<<i<<endl;	
}
int main()
{
    ex();
}

