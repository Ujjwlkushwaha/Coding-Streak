/*

👉 179. Largest Number

📌 Solved
👺 Medium


Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.
Since the result may be very large, so you need to return a string instead of an integer.

Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"
 

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 109

*/

var largestNumber = function(nums) 
{   
    // Convert numbers to strings and sort them based on their concatenation in descending order.
    const stringNums = nums.map(num => num.toString());

    // Compare two strings by concatenating them and comparing their values.
    const compare = (a, b) => {
        const val1 = a + b;
        const val2 = b + a;

        // If concatenated values are equal, sort them lexicographically.
        return val1 > val2 ? -1 : (val1 === val2 ? 0 : 1);
    };

    // Join the sorted strings to form the largest number.
    stringNums.sort(compare);

    // base case 
    if (stringNums[0] === "0") {
        return "0";
    }

    // Return the largest number string 
    return stringNums.join('');
};

// Test cases

console.log(largestNumber([10,2])); // "210"
console.log(largestNumber([3,30,34,5,9])); // "9534330"
console.log(largestNumber([0,0,0])); // "0"
console.log(largestNumber([1,2,3,4,5])); // "54321"
console.log(largestNumber([1,0,2,3,4,5])); // "54321"

/*
👻 Walkthrough:

    Example 1: Input [10, 2]

1️⃣ step 1.
    Conversion to Strings: ["10", "2"]

2️⃣ step 2. 
    Custom Comparator:
    Compare "10" + "2" = "102" vs "2" + "10" = "210".
    Since "210" is larger, 2 should come before 10 in the final result.

3️⃣ step 3. 
    Sorted Array: ["2", "10"]

4️⃣ step 4.
    Final Result: Join "2" and "10" to get "210".


    Example 2: Input [3, 30, 34, 5, 9]
    Conversion to Strings: ["3", "30", "34", "5", "9"]
    Custom Comparator:
    Compare "9" + "5" = "95" vs "5" + "9" = "59". So 9 comes before 5.
    Compare "5" + "34" = "534" vs "34" + "5" = "345". So 5 comes before 34.
    Continue comparisons until the array is sorted as ["9", "5", "34", "3", "30"].
    Final Result: Join to get "9534330".
*/
