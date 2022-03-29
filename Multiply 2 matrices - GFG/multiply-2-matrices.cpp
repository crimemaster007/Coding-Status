// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
public:
    void Mutliply(vector<vector<int> >& matrixA, vector<vector<int>>&matrixB) {
        // Code here
        int n=matrixA[0].size();
        vector<vector<int>>C(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                C[i][j]=0;
                for(int k=0;k<n;k++){
                    C[i][j] +=(matrixA[i][k]*matrixB[k][j]);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrixA[i][j]=C[i][j];
            }
        }
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrixA(n, vector<int>(n,0));
		vector<vector<int>> matrixB(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixA[i][j];
			}
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrixB[i][j];
			}
		}
		Solution ob;
		ob.Mutliply(matrixA, matrixB);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrixA[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends