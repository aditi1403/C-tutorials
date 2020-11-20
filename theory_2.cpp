// TIME  COMPLEXITY OF BINARY SEARCH
//* after first iteration, length of array----> n
//* after second iteration,length of array----> n/2
//* after third teration, length of array---->(n/2)/2=n/(2^2)
//* after k iterations, length of array---->n/(2^k)

//* let the length of array become 1 after k iterations
// n/(2^k)=1
// n=2^k
// log2(n)=log2(2^k)
// log2(n)=klog2(2)
// k=log2(n)

//TIME COMPLEXITY
// O(log2(n))
