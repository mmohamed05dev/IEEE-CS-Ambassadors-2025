#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int N;
    cin >> N;  
    
    while (N--) {
        string S, T;
        cin >> S >> T; 
        
        string result = ""; 
        
        int lenS = S.length();
        int lenT = T.length();
        int minLength = min(lenS, lenT);
        
        for (int i = 0; i < minLength; ++i) {
            result += S[i];  
            result += T[i];  
        }
        
        if (lenS > lenT) {
            result += S.substr(lenT); 
        } else if (lenT > lenS) {
            result += T.substr(lenS);  
        }
        
        cout << result << endl;
    }
    
    return 0;
}