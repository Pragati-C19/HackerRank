#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int x, y, q;
    cin >> x >> y;
    if(y==0)
    {
        cout<<x;
    }
    else{
        
    q = x / y;

    //cout << "Quotient = " << q << endl;
    
    int add;
    
    add=q+x;
    cout<<add;
    }
    return 0;
}
