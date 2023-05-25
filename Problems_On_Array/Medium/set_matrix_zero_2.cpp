// Given a matrix of  size n x m. 
// Your task is to make Zeroes, that means in whole matrix when you find a zero,
// convert its upper, lower, left, and right value to zero and make that 
// element the sum of the upper, lower, left and right value. Do the following tasks according to the initial matrix.

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void MakeZeros(vector<vector<int> >& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        int top, bottom, left, right;
        vector < vector <int>> sum (n, vector<int> (m,0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                top = i>0?matrix[i-1][j]:0;
                bottom = i<n-1?matrix[i+1][j]:0;
                left = j>0?matrix[i][j-1]:0;
                right = j<m-1?matrix[i][j+1]:0;
                sum [i][j] = top + left + right + bottom;
            }
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(sum[i][j] != 0){
                    if(i > 0){matrix[i-1][j] = 0;}
                    if(i < n-1){matrix[i+1][j] = 0;}
                    if(j > 0){matrix[i][j-1] = 0;}
                    if(j < m-1){matrix[i][j+1] = 0;}
                    matrix[i][j] = sum[i][j];
                }
            }
        }
    }
};

//{ Driver Code Starts.
int main(){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.MakeZeros(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	return 0;
}
// } Driver Code Ends