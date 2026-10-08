class Solution {
public:

    void get(vector<vector<char>>& grid, vector<vector<int>>& v,int i,int j){
        if(i<0 || j<0 || i >= grid.size() || j>= grid[0].size()) return;
        if(v[i][j] ==1) return;
        v[i][j] =1;
        if(grid[i][j] == '0') return;
        get(grid,v,i+1,j);
        get(grid,v,i,j+1);
        get(grid,v,i-1,j);
        get(grid,v,i,j-1);
    }

    int numIslands(vector<vector<char>>& grid) {
        vector<vector<int>> v(grid.size(),vector<int>(grid[0].size(),0));
        int c=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j] == '1' && v[i][j] == 0){
                    get(grid,v,i,j);
                    c++;
                }
            }
        }
        return c;
    }
};
