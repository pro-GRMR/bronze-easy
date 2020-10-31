#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int x)
{
    int j=sqrt(x);
    for(int i=2; i<=j; i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
    long int n;
    cin >> n;
    int x;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n%i ==0 && is_prime(i)){
            x=i;
        }
    }
    cout << x << endl;
}
