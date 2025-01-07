#include <iostream>
using namespace std;

void linearsearch(int array[], int n, int value) {
    int pos = -1; 
    for (int i = 0; i < n; i++) { 
        if (array[i] == value) { 
            pos = i; 
            cout << "Value found at position: " << pos << endl;
            return; 
        }
    }
    if (pos == -1) {
        cout << "Value not present" << endl;
    }
}

int main(){
            int arr[] = {10, 20, 30, 40, 50};
    int n;
    int value = 30;

    linearsearch(arr, n, value);

    return 0;
}