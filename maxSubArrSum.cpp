#include <bits/stdc++.h>

// Algorithm 1. O(n³)
int maxSubSum1(int s[],int n)
{
    int best=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n;j++)
        {
            int sum =0;
            for(int k=i; k<j; k++)
            {
                sum += s[k];
            }
            best = std::max(best,sum);
        }
    }
    return best;
}
// Algorithm 2 O(n²)
int maxSubSum2(int s[],int n)
{
    int best = 0;
    for(int i = 0;i<n;i++)
    {
        int sum = 0;
        for(int k=i;k<n;k++)
        {
            sum += s[k];
            best = std::max(best,sum);
        }
    }
    return best;
}
// Algorithm 3 O(n)
int maxSubSum3(int s[],int n)
{
    int best=0, sum=0;
    for(int k=0;k<n;k++)
    {
        sum = std::max(s[k],sum+s[k]);
        best = std::max(best,sum);
    }
    return best;
}