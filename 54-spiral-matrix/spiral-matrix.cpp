class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row= matrix.size();
        int col=matrix[0].size();

        int count=0;
        int total=row*col;
        
        int startingrow=0;
        int startingcol=0;
        int endrow=row-1;
        int endcol=col-1;


        while(count<total){
            for(int j=startingcol;count<total &&j<=endcol;j++){
                ans.push_back(matrix[startingrow][j]);
                count++;
            }
            startingrow++;


             for(int j=startingrow;count<total && j<=endrow;j++){
                ans.push_back(matrix[j][endcol]);
                count++;



        }
        endcol--;
        
         for(int j=endcol;count<total && j>=startingcol;j--){
                ans.push_back(matrix[endrow][j]);
                count++;
    }
    endrow--;

     for(int j=endrow;count<total && j>=startingrow;j--){
                ans.push_back(matrix[j][startingcol]);
                count++;
        }
        startingcol++;


        }
        return ans;

    }
};