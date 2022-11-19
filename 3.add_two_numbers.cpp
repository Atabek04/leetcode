
#include <iostream>
using namespace std;


int main()
{
    int l1[100], l2[100], res[100], n1, n2, max_digits_len;
    int n = 100 - 1;
    for (int i=0; i <= n; i++){
        l1[i] = 0;
        l2[i] = 0;
        res[i] = 0;
    }
    
    cout << "The length of l1: ";
    cin >> n1;
    cout << "Enter your elements: ";
    for(int i=0; i<n1; i++){
        cin >> l1[n-i];
    }

    cout << "The length of l2: ";
    cin >> n2;
    cout << "Enter your elements: ";
    for(int i=0; i<n2; i++){
        cin >> l2[n-i];
    }
    max_digits_len = n1;
    if (n2 > n1){
        max_digits_len = n2;
    }
    
    int extra_val = 0;
    
    for (int i=0; i < max_digits_len; i++){
        res[n-i] = (l1[n-i] + l2[n-i] + extra_val) % 10;
        extra_val = (l1[n-i] + l2[n-i] + extra_val) / 10;
    }
    if (extra_val > 0){
        res[n-max_digits_len] = extra_val;
        max_digits_len ++;
    }
    
    cout << "RES: ";
    for (int i=0; i < max_digits_len; i++){
        cout << res[n-i]<< " ";
    }
    
    
    return 0;
}
