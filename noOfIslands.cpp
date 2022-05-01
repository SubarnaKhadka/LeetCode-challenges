/* 
Date: 2022-01-05
question-link: https://leetcode.com/problems/number-of-islands/
title:Number of Islands
Problem-no:200
difficulty:medium
Algorithm:Breadth First Search(BFS)
*/

class Solution {
public:
	void BFS(vector<vector<char>>& grid,int x, int y,int n, int m){
		if(x<0 || x>=n || y<0 || y>=m || grid[x][y] !='1')
		return;
		
			grid[x][y] = '0';
			BFS(grid,x-1,y,n,m); //left
			BFS(grid,x+1,y,n,m); //right
			BFS(grid,x,y-1,n,m); //top
			BFS(grid,x,y+1,n,m);
	}
    int numIslands(vector<vector<char>>& grid) {
    	 int n = grid.size();
        int m = grid[0].size();
        
        int islands = 0;
        for(int i =0; i<n;i++){
        	for(int j = 0; j<m;j++){
        		if(grid[i][j] == '1'){
        			islands++;
        			BFS(grid,i,j,n,m);
				}
			}
		}
		return islands;
    }
};
