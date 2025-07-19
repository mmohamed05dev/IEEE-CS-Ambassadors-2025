#include <iostream>
using namespace std;
 
int main()
{
    int wordsize;
    cin >> wordsize;
    while(wordsize--) {
        string value;
        cin >> value;
        int size = value.size();
        if(size > 10) {
            cout << value[0] << size - 2 << value[size - 1] << endl;
        } else {
            cout << value << endl;
        }
    }
    return 0;
}