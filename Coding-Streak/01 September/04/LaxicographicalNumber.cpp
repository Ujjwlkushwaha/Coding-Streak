#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> laxicographicalNumbers(int n )
{

    // laxicographical numbers 1 se hi start hote haii
    int curr = 1;

    // for storing numbers
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        result.push_back(curr);

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
            curr += 1;
        }
    }

    return result;
}


int main()
{

    int n = 90;
    int k = 89;
    vector<int> result = laxicographicalNumbers(n);

    cout << result[k-1] << endl;
    
    for ( int ele  : result ){
        cout << ele << " ";
    }
}