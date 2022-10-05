#include <iostream>

using namespace std;

int main() {
    
    int n, c = 0, count, x;
    
    cin >> n;
    
    for( int i=0; i<n; i++ ) {
        cin >> x;
        
        if( x > c ) {
            c = x; 
            count = 1;
        }
        else if( x == c )
           count++;
    }
    
    cout <<count;
    
    return 0;
}
