class Solution
{
    public:
        vector<int> findBall(vector<vector < int>> &grid)
        {

            int n = grid.size();
            int m = grid[0].size();

            vector<int> ans;

            for (int i=0; i < m; i++)
            {
                bool fg = false;
                int iter = n;
                int row=0;
                int col=i;
                while (fg != true && iter--)
                {
                    if (grid[row][col] == 1)
                    {
                       	//right
                        if (col + 1 < m)
                        {
                            if (grid[row][col + 1] == 1)
                            {
                                row += 1;
                                col += 1;
                            }
                            else
                            {
                                break;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    else
                    {
                       	//left
                        if (col - 1 >= 0)
                        {
                            if (grid[row][col - 1] == -1)
                            {
                                row += 1;
                                col -= 1;
                            }
                            else
                            {
                                break;
                            }
                        }
                        else
                        {
                            break;
                        }
                    }
                    
                    
                    if(row==n){
                        fg=true;
                    }
                }
                if(fg==true){
                    ans.push_back(col);
                }
                else{
                    ans.push_back(-1);
                }

                
            }
            return ans;
        }
};