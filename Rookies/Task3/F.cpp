#include <iostream>
using namespace std;
 
int calculateS(int X, int N) {
    int result = 0;
    
    for (int i = 0; i <= N; i += 2) {
        int term = 1;
        
        for (int j = 0; j < i; j++) {
            term *= X;
        }
        
        if (i == 0) {
            result += (term - 1);  
        } else {
            result += term;
        }
    }
    
    return result;
}
 
int main() {
    int X, N;
    
    cin >> X >> N;
    
    cout << calculateS(X, N) << endl;
    
    return 0;
}