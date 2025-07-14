#include <iostream>
#include <vector>
#include <climits> 
using namespace std;
 
int main() {
    int T;
    cin >> T;
 
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        int minResult = INT_MAX;  
        
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N; j++) {
                int result = A[i] + A[j] + (j - i);
                minResult = min(minResult, result); 
            }
        }
        
        cout << minResult << endl;
    }
 
    return 0;
}