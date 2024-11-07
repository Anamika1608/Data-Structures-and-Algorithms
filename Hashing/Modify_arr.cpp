#include <bits/stdc++.h>
using namespace std;

int count(vector<int> nums, int n, int k)
{
    int same = 0;
    for (int i = 0; i <= n; i++)
    {
        nums[i] = nums[n] - nums[i];
        if (nums[i] <= k)
            same += 1;
    }
    return same;
}

int maxFrequency(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    int ans = 1;
    for (int i = nums.size() - 1; i > 0; i--)
    {
        int dupli = count(nums,i,k);
        if (dupli > ans)
            ans = dupli;
    }

    return ans;
}

int main()
{
    long long t;

    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << maxFrequency(arr, k);
    }
    return 0;
}
