/*
 * 
 * @param {*} arr1 
 * @param {*} arr2 
 * @returns 
 * 
 * 👍👍Approach
        as i said first we convert the arrays into string and sort them in any order you like
        now we have to traverse any one array while comparing the other arrays corresponding string
        we will use 2 pointers to indicate which two numbers or strings are under scrutiny
        we will move these pointers according to the relation between the elements under scrutiny
        we will move the i pointer if ele[i]<ele[j]
        we will mpve the j pointer if ele[j]<ele[i]
        we will move both if equal

        we will use a while loop to find the longest prefix and return it
        thats it

        Complexity
        Time complexity:O(NlogN)
        Space complexity:O(1)
 */

var longestCommonPrefix = function (arr1, arr2) {
    arr1 = arr1.map(x => x.toString())
    arr2 = arr2.map(x => x.toString())
    arr1.sort()
    arr2.sort()
    let max = 0
    let y = 0
    for (let i = 0; i < arr1.length; i++) {
        let e1 = arr1[i]
        let e2 = arr2[y]
        if (!e1 || !e2) break
        let se = e1[0]
        if (e2[0] < se) {
            y++
            i--
            continue
        }
        else if (e2[0] > se) continue
        else {
            let ci = 0
            while (e1[ci] === e2[ci] && ci < e1.length) {
                ci++
            }
            max = Math.max(max, ci)
            if (e1 > e2) {
                y++
                i--
            }
            else if (e1 == e2) y++

        }

    }
    return max
};