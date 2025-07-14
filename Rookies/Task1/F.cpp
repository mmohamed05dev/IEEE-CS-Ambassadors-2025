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
 
    for (int i = 0; i < N / 2; i++) {
        int temp = A[i];
        A[i] = A[N - i - 1];
        A[N - i - 1] = temp;
    }
 
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
 
    return 0;
}