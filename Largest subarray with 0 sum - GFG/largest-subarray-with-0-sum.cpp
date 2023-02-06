//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&arr, int N)
    {   
        // Your code here
        //brute force
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=A[j];
        //         if(sum==0){
        //             ans=max(ans,j-i+1);
        //         }
                
        //     }
        // }
        // return ans;
        
        
        
        //optimized approach
      unordered_map<int, int> presum;
 
    int sum = 0; // Initialize the sum of elements
    int max_len = 0; // Initialize result
 
    // Traverse through the given array
    for (int i = 0; i < N; i++) {
 
        // Add current element to sum
        sum += arr[i];
        if (sum == 0)
            max_len = i + 1;
 
        // Look for this sum in Hash table
        if (presum.find(sum) != presum.end()) {
 
            // If this sum is seen before, then update
            // max_len
            max_len = max(max_len, i - presum[sum]);
        }
        else {
            // Else insert this sum with index
            // in hash table
            presum[sum] = i;
        }
    }
 
    return max_len;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends