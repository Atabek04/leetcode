#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


// Swaps two numbers in array
void swapNums(double nums[],
              int first, int second)
{
    int curr = nums[first];
    nums[first] = nums[second];
    nums[second] = curr;
}

// Sort function
void sort(double num[], int len)
{
    bool isSwapped;

    /**
    * Here we are running n-1 steps,
    for each step, max item will
    come at the last respective
    index and
     swap element if the
    element is smaller than the
    previous one.
    **/
    for (int i = 0; i < len; i++)
    {
        isSwapped = false;
        for (int j = 1; j < len - i; j++)
        {
            if (num[j] < num[j - 1])
            {
                swapNums(num, j, (j - 1));
                isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            break;
        }
    }
}


int main()
{
    double nums1[100], nums2[100];
    int n1, n2;
    cout << "The length of the first array: ";
    cin >> n1;
    cout << "Enter elements: ";
    for(int i=0; i<n1; i++){
        cin >> nums1[i];
    }

    cout << "The length of the second array: ";
    cin >> n2;
    cout << "Enter elements: ";
    for(int i=0; i<n2; i++){
        cin >> nums2[i];
    }

    //merging to array
    for(int i=n1; i<n1+n2; i++){
        nums1[i] = nums2[i-n1];
    }

    //sorting an array
    sort(nums1, n1+n2);

    for(int i=0; i<n1+n2; i++){
        cout << nums1[i] << " ";
    }
    double rez = 0;
    if((n1+n2-1)%2 == 0){
        rez = nums1[(n1+n2-1)/2];
    }else{
        int x = ceil((n1+n2-1)/2);
        int y = floor((n1+n2-1)/2);
        rez = (nums1[x]+nums1[y])/2;
    }

    cout << rez;

    return 0;
}