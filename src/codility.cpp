# include "codility.h"
#include <vector>
#include <algorithm>
using namespace std;
int codility::binaryGap(int n) {
        int ans = 0, gap = -1; 
        while (n) {  //10000010001
            if (n % 2 == 1) { 
                if (gap != -1) { 
                    ans = max(ans, gap);
                }
                gap = 0; 
            } else if (gap >= 0) { 
                gap++;
            }
            n = n >> 1;
        }
        return ans;
    }

vector<int> codility::rotate(vector<int> &A, int k){ //3,8,9,7,6
    reverse(A.begin(), A.end());   //6,7,9,8,3
    reverse(A.begin(), A.begin() + k); //6,7,9,8,3
    reverse(A.begin() + k, A.end()); //6,3,8,9,7
    return A;
}