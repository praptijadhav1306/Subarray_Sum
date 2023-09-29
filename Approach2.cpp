#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 4, 7, 2, -3, 1, 4, 2};
    int n = (int)v.size();
    int k = 7;
    int count =0, sum=0;

    unordered_map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if(sum==k){count++;}
        if(mpp.find(sum-k)!=mpp.end()){
            count = mpp[sum-k]+count;
        }
        if(mpp.find(sum-k)!=mpp.end()){
            mpp[sum]++;
        }
        else{
            mpp[sum]=1;
        }
    }

    cout << "\n The total subarrays present are: " << count << "\n" << endl;
    return 0;
}