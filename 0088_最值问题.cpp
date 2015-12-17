
//
//  main.cpp
//  1
//
//  Created by MEME on 15/12/16.
//  Copyright © 2015年 MEME. All rights reserved.
//  talk is cheap,show me the code
#include <iostream>
#include <vector>
#include <algorithm>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int times;
    cin>>times;
    if (times != EOF)
    {
   // vector<int> brr;
    for (int i = 0; i<times; ++i)
    {
        int len;
        cin>>len;
        int num;
        vector<int> arr;
        for (int j = 0;j<len ; ++j)
        {
            cin>>num;
            arr.push_back(num);
        }
        sort(arr.begin(), arr.end());
        cout<<arr[len-1]<<" "<<arr[len-2]<<endl;
     //   brr.push_back(arr[len-1]);
     //   brr.push_back(arr[len-2]);
    }
    }
}

/*#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int m;
    while(scanf("%d",&m)!=EOF)
        for(int k=1;k<=m;k++)
        {
            int n;
            scanf("%d",&n);
            int * s;
            s=new int[n+1];
            for(int i=1;i<=n;i++)
                scanf("%d",&s[i]);
            sort(s+1,s+n+1);
            printf("%d %d\n",s[n],s[n-1]);
        }
    return 0;
}
*/




















