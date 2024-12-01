let arr1 = [2 , 3 , 4];
let arr2 = [1 , 2 , 3 , 5];

// combine both arrays
arr1.push(...arr2);

// make a new array using set because set contains distinct elements
let arr = [... new Set(arr1)].sort((a,b)=a-b);

