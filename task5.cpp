#include <iostream>
using namespace std;

int main()
{
    string n;
    int m, x=0;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> n;
        if(n[1]=='+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
