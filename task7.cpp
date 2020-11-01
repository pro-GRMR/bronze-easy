#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> m >> n;
    if(m>n){
        if(n%2!=0){
            cout << "Akshat" << endl;
        }
        else{
            cout << "Malvika" << endl;
        }
    }
    else{
        if(m%2!=0){
            cout << "Akshat" << endl;
        }
        else{
            cout << "Malvika" << endl;
        }
    }
    return 0;
}
