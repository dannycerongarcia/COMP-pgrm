// Comparison operator
// pair sorting
#include <bits/stdc++.h>
#include <string>
void pairSortingTest(std::vector<std::pair<int,int>> v)
{
    std::cout<<"Before Sortign\n";
    for (size_t i =0; i<v.size(); i++)
    {
        std::cout<<'('<<v[i].first<<'-'<<v[i].second<<')'<<' ';
    }

    std::sort(v.begin(),v.end());
    
    std::cout<<"\nAfter Sortign\n";
    for (size_t i =0; i<v.size(); i++)
    {
        std::cout<<'('<<v[i].first<<'-'<<v[i].second<<')'<<' ';
    }
    std::cout<<'\n';
}

void tupleSortingTest(std::vector<std::tuple<int,int,int>> v)
{
    int int_1,int_2,int_3;
    std::cout<<"Before Sortign\n";
    for(size_t i = 0;i<v.size();i++)
    {
        std::tie(int_1,int_2,int_3) = v[i];
        std::cout<<'('<<int_1<<'-'<<int_2<<'-'<<int_3<<')';
    }
    std::sort(v.begin(),v.end());

    std::cout<<"\nAfter Sortign\n";
    for(size_t i = 0;i<v.size();i++)
    {
        std::tie(int_1,int_2,int_3) = v[i];
        std::cout<<'('<<int_1<<'-'<<int_2<<'-'<<int_3<<')';
    }
    std::cout<<'\n';
}
// Comparison Function
bool comp(std::string a, std::string b)
{
    if(a.size() != b.size()) return a.size() < b.size();
    return a < b;
}
