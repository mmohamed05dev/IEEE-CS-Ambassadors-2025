#include <iostream>
using namespace std;
 
void findMinMax(int arr[], int N) {
    int min = arr[0]; 
    int max = arr[0];  
    
    for (int i = 1; i < N; i++) {
        if (arr[i] < min) {
            min = arr[i];  
        }
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    
    cout << min << " " << max << endl;
}
 
int main() {
    int N;
    
    cin >> N;
    
    int arr[N];  
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    findMinMax(arr, N);
    
    return 0;
}