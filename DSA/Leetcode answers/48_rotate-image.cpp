class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        
        // transpose
        for(int i=0;i<n;i++){
            for(int j=i;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // reverse columns, using 2 ptr
        for(int i=0;i<n;i++){
            
            int l=0,r=m-1;
            
            while(l<r){
                swap(matrix[i][l],matrix[i][r]);
                l++;
                r--;
            }
            
        }
        
    }
};