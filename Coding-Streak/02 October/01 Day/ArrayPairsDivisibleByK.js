let arr = [-1,1,-2,2,-3,3,-4,4];
let k = 3;
let len = arr.length;

let s = 0 ;
let e = len-1;
let mid = s  + ( e - s ) / 2;



for( let i = 0 ; i <= mid ; i++ )
{
        console.log(arr[i] , arr[len-i-1]);
        
}