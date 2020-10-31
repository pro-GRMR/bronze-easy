#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum=2, f_n1=1, f_n2=2, f_n3=3;
    while(f_n3<=n){
        f_n1=f_n2;
        f_n2=f_n3;
        if(f_n3%2==0){
            sum+=f_n3;
        }
        f_n3=f_n1+f_n2;
    }
    cout << sum << endl;
}
