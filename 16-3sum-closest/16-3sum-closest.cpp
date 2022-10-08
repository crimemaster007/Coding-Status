class Solution
{
    public:
        int threeSumClosest(vector<int> &nums, int target)
        {

            sort(nums.begin(), nums.end());
            long long ans = INT_MAX;
            long long final_ans = -1;

            for (int i = 0; i < nums.size() - 2; i++)
            {
                long long first = nums[i];
                int l = i + 1;
                int r = nums.size() - 1;
                while (l < r)
                {
                    long long second = nums[l];
                    long long third = nums[r];
                    long long sum = first + second + third;
                    if (target - sum > 0)
                    {
                        if (abs(target - sum) < ans)
                        {
                            final_ans = sum;
                            ans = abs(target - sum);
                        }

                        l++;
                    }
                    else if (target - sum == 0)
                    {
                        if (abs(target - sum) < ans)
                        {
                            final_ans = sum;
                            ans = abs(target - sum);
                        }
                        l++;
                        r--;
                    }
                    else
                    {
                        if (abs(target - sum) < ans)
                        {
                            final_ans = sum;
                            ans = abs(target - sum);
                        }
                        r--;
                    }
                }
            }
            return final_ans;
        }
};