//
//  main.cpp
//  11
//
//  Created by lidayi on 15/12/14.
//  Copyright © 2015年 lidayi. All rights reserved.
//
/*
#include <iostream>
#include <vector>
#include <algorithm>
int p;

int hahaha(int a[],int bb)
{
    for (int i = 0;i<bb;++i)
    {
        for (int j = i ; j <bb; ++j)
        {
            p = 0;
            if(a[i] == a[j])
                ++p;
        }
        if (p == 1) std::cout<<a[i];
    }
    return 0;
}
int main()
{
    int a;
    std::cin >> a;
    int b[a];
    for(int i = 0;i<a;++i)
    {
        int c;
        std::cin>>c;
        b[i] = c;
    }

    //sort(b.begin(),b.end());
    hahaha(b,a);
}
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int hahaha(vector<int> a, int b);
int main()
{
    int let;
    cin>>let;
    if(let == 2||let == 3)return 0;
    int c;
    vector<int> arr;
    for(int i = 0;i<let;++i)
    {
        std::cin>>c;
        arr.push_back(c);
    }    if (let == 1)
    {
        cout<<arr[0];
    }
    else
    {
    sort(arr.begin(), arr.end());
    hahaha(arr, let);
    }
}
/*
int hahaha(vector<int> a,int b)
{
    int one,two;
    if (a[b-1] != a[b-2])
    {
        cout<<a[b-1];
    }
    for (int i=0; i<(b-1)/3; ++i)
    {
        one = a[3*i];
        two = a[3*i+1];
        //thr = a[3*i+2];
        if (one != two)
        {
            cout<<one;
        }
    }
    return 0;
}
*/
int hahaha(vector<int> a,int b)
{
    int ones = 0, twos = 0, xthrees = 0;
    for (int i=0;i<b;++i)
    {
        twos |= (ones&a[i]);
        ones ^= a[i];
        xthrees =~(ones&twos);
        ones &= xthrees;
        twos &= xthrees;
        
    }
    cout<<ones;
    return 0;
}
























