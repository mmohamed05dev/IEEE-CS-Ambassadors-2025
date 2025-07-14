#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
 
    int minElement = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] < minElement) {
            minElement = A[i];
        }
    }
 
    int frequency = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == minElement) {
            frequency++;
        }
    }
 
    if (frequency % 2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }
 
    return 0;
}