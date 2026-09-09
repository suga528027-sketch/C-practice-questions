class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx = 0;

        for (vector<int>& arr : accounts) {
            int sum = 0;

            for (int i : arr) {
                sum += i;
            }

            maxx = max(maxx, sum);
        }

        return maxx;
    }
};