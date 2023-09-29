#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3,4,7,2,-3,1,4,2};
    int n = (int)v.size();
    int k=7;
    int count =0;
    for(int i=0; i<n;i++){
        int sum = 0;
        
        for (int j = i; j < n; j++)
        {
            sum+=v[j];
            if(sum == k){
                count++;
                // cout << "the number is "<<v[j]<<" " << sum << " "<< count << endl;
            }
        }
       
    }
    cout<<"\n The total subarrays present are: "<<count<<"\n"<<endl;
    return 0;
}

