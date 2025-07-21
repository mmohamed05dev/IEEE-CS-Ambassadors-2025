#include <iostream>
using namespace std;
 
void shiftZeroesToRight(int arr[], int N) {
    int nonZeroIndex = 0;  
    for (int i = 0; i < N; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex] = arr[i];
            nonZeroIndex++;
        }
    }
    
    for (int i = nonZeroIndex; i < N; i++) {
        arr[i] = 0;
    }
    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main() {
    int N;
    
    cin >> N;
    
    int arr[N];  
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    shiftZeroesToRight(arr, N);
    
    return 0;
}