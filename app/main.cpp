#include <iostream>
#include <vector>
#include "codility.h"
using namespace std;

int main() {
    int n = 1041;
    cout << "The result is: " << codility::binaryGap(n) << endl;
    vector<int> A = { 3,8,9,7,6 };
    int N = A.size();
    int k = 1; 
    k = k % N;
    codility::rotate(A,k);
    cout << "The result is : ";
    for (int i = 0; i < N; i++)
        cout << A[i] << ' ';
    return 0;
}