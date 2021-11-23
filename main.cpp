#include <iostream>

using namespace std;

void ex()
{
int n(0); int n11(0);int n7(0); int n77(0);int n0(0);int num(0);
cin>>n;
for (int i(0);i<n;i++){
    cin>>num;
    if (num%77==0)
        n77++;
    else if (num%11==0)
        n11++;
    else if (num%7==0)
        n7++;
    }
//cout<<n77<<" "<<n7<<" "<<n0<<" "<<n11<<endl;
cout<<n77*(n77-1)/2+n77*n0+n77*n7+n77*n11+n7*n11<<endl;
}
int main()
{
    ex();
}
