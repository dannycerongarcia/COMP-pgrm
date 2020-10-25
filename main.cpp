#include <bits/stdc++.h>
#include "maxSubArrSum.h"
int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    int arr1[] = {1,2,3,-4,12,4,-6,-7,-8,12,3,-5};
    int best = maxSubSum1(arr1,(int)(sizeof(arr1)/sizeof(*arr1)));
    std::cout<<"Algorithm 1: "<< best<<'\n';
    best = maxSubSum2(arr1,(int)(sizeof(arr1)/sizeof(*arr1)));
    std::cout<<"Algorithm 2: "<< best<<'\n';
    best = maxSubSum3(arr1,(int)(sizeof(arr1)/sizeof(*arr1)));
    std::cout<<"Algorithm 3: "<< best<<'\n';
    return 0;
}