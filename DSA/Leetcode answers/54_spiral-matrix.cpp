class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m=matrix.size(),n=matrix[0].size(),c=0,total=m*n;
        int startrow=0,endrow=m-1,startcol=0,endcol=n-1;
        
        while(c<total){
            //print start row
            for(int i=startcol;c<total && i<=endcol;i++){
                ans.push_back(matrix[startrow][i]);
                c++;
            }
            startrow++;
            
            //print end col
            for(int i=startrow;c<total && i<=endrow;i++){
                ans.push_back(matrix[i][endcol]);
                c++;
            }
            endcol--;
            
            //print end row
            for(int i=endcol;c<total && i>=startcol;i--){
                ans.push_back(matrix[endrow][i]);
                c++;
            }
            endrow--;
            
            //print start col
            for(int i=endrow;c<total && i>=startrow;i--){
                ans.push_back(matrix[i][startcol]);
                c++;
            }
            startcol++;
        }
        return ans;
    }
};