#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int j;
    for(int i=2, k=1; i<1000000; i++,k=sqrt(i)){
        for(j=2 ; j<=k; j++){
            if(i%j==0){
                break;
            }
        }
        if(j>k){
            cout << i << endl;
        }
    }
    return 0;
}
