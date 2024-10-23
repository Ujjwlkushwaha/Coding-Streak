// #include<iostream>
// using namespace std;

// class Solution {
// public:
//     int Count(long curr, long next, int n) {
//         long countnum = 0;
//         while (curr <= n) {
//             countnum += (next - curr);
//             curr *= 10;
//             next *= 10;
//             next = min(next, (long)n + 1);
//         }
//         return countnum;
//     }

//     int findKthNumber(int n, int k) {
//         int curr = 1;
//         k -= 1;
//         while (k > 0) {
//             int count = Count(curr, curr + 1, n);
//             if (count <= k) {
//                 curr++;
//                 k -= count;
//             } else {
//                 curr *= 10;
//                 k -= 1;
//             }
//         }
//         return curr;
//     }
// };

// int main(){
    
// }

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int  laxicographicalNumbers(int n, int k )
{

    // laxicographical numbers 1 se hi start hote haii
    int curr = 1;
    
    // for storing numbers
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        result.push_back(curr);

        if(i == k-1){
            return curr;
        }

        if (curr * 10 <= n)
        {
            // becouse after 1 next lexicographical number is 10 then 11 etc...
            curr *= 10;
        }

        else
        {

            // if any how e got 19 or 199 so next number is 2
            while (curr % 10 == 9 or curr >= n)
            {

                // usko sigle digit tak laane ke liyee
                curr /= 10;
            }
            // For next lexicographical number
            curr++;
        }
    }
}


int main()
{

    int n = 90;
    cout << laxicographicalNumbers(n , 80);
}