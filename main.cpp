#include <bits/stdc++.h>
#include "maxSubArrSum.h"
#include "comparisonOperators.h"
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

    // Comparison operators
    std::cout<<"\nComparison operators\n";
    std::cout<<"Pairs\n";
    std::vector<std::pair<int,int>> v;
    v.push_back({1,5});
    v.push_back({2,3});
    v.push_back({1,2});
    
    pairSortingTest(v);
    std::cout<<"\nTuples\n";
    std::vector<std::tuple<int,int,int>> v2;
    v2.push_back({2,1,4});
    v2.push_back({1,5,3});
    v2.push_back({2,1,3});
    tupleSortingTest(v2);

    std::cout<<"\nComparison functions\n";
    std::string s = "monkey";
    std::vector<std::string> vString;
    vString.push_back("abc");
    vString.push_back("acb");
    vString.push_back("cba");
    vString.push_back("aaa");
    vString.push_back("bbb");
    vString.push_back("ccc");
    vString.push_back("a");
    vString.push_back("b");

    std::cout<<'\n';
    for(int i=0;i < vString.size();i++)
    {std::cout<<vString[i]<<"-";}
    std::sort(vString.begin(),vString.end(),comp); std::cout<<'\n';
    for(int i=0;i < vString.size();i++)
    {std::cout<<vString[i]<<"-";}std::cout<<'\n';

    // binary Search 
    // method 1
    std::cout<<"\nBinary Search method 1\n";
    int binArr[] ={1,2,4,6,8,69,434,2000,3500,6450,9000};
    int n=(int)(sizeof(binArr)/sizeof(*binArr)), x=2,a = 0, b = n-1;
    while(a<=b)
    {
        int k = (a+b)/2;
        if(binArr[k]== x)
        {
            std::cout<<" Found "<<binArr[k];
            break;
        }
        if(binArr[k]<x)
        {a=k+1;}
        else b = k-1;
    }
    std::cout<<'\n';
    // method 2
    std::cout<<"Methoud2\n";
    int k =0;
    x = 9000;
    for(int b=n/2;b>=1;b/=2)
    {
        while(k+b < n && binArr[k+b]<= x) k += b;
    }
    if(binArr[k]== x){std::cout<<" Found "<<binArr[k]<<'\n'; }
    return 0;
}