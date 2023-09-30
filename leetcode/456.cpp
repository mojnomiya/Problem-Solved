 /**
* Author : Mojnu
* Created : 30-09-2023 	 15:30:23
**/
#include<bits/stdc++.h>
using namespace std;

bool find132pattern(vector<int>& nums) {
    if(nums.size()<3) return false;
    stack<int> stk;
    vector<int> min_array(nums.size());
    min_array[0] = nums[0];

    for (size_t i = 1; i < nums.size(); i++) {
        min_array[i] = min(min_array[i - 1], nums[i]);
    }

    // for(int i=0; i<min_array.size(); i++)
    // {
    //     cout << min_array[i] << " ";
    // }
    // cout << endl;

    for (size_t j = nums.size() - 1; j > 0; j--) {
        if (nums[j] <= min_array[j]) {
            continue;
        }
        while (!stk.empty() and stk.top() <= min_array[j]) {
            stk.pop();
        }
        if (!stk.empty() and stk.top() < nums[j]) {
            return true;
        }
        stk.push(nums[j]);
    }
    return false;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++) cin >> nums[i];

    cout << find132pattern(nums) << "\n";
    
    return 0;
}