#include <iostream>
using namespace std;



void twoSum(int a, int n, int arr[100]){
    int x, y, index1, index2;
    for(int i=0; i<n; i++){
        x = arr[i];
        y = a - x;
        for(int j=i+1; j<n; j++){
            if(arr[j] == y){
                index2 = j;
                index1 = i;
                break;
            }
        }
    }
    cout << '[' << index1 << "," << index2 << ']';
}

int main() {
    int a, n, arr[100] ;
    cout << "Enter a target: ";
    cin >> a;

    cout << "Enter a size of your set: ";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    twoSum(a, n, arr);

    return 0;
}