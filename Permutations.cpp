#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<int>
#define vecl vector<long long>
#define e "\n"
#define en endl
#define pb push_back
#define ep emplace_back
#define ist insert
#define mp make_pair
#define forf for (auto i=0; i<n; i++)
#define fore for (auto ch: )

void swap(int& x, int& y) 
{ 
    int temp = x; 
    x = y; 
    y = temp; 
} 
  
// Function to find the possible 
// permutations 
void permutations(vector<vector<int> >& res, 
                  vector<int> nums, int l, int h) 
{ 
    // Base case 
    // Add the vector to result and return 
    if (l == h) { 
        res.push_back(nums); 
        return; 
    } 
  
    // Permutations made 
    for (int i = l; i <= h; i++) { 
  
        // Swapping 
        swap(nums[l], nums[i]); 
  
        // Calling permutations for 
        // next greater value of l 
        permutations(res, nums, l + 1, h); 
  
        // Backtracking 
        swap(nums[l], nums[i]); 
    } 
} 
  
// Function to get the permutations 
vector<vector<int> > permute(vector<int>& nums) 
{ 
    // Declaring result variable 
    vector<vector<int> > res; 
    int x = nums.size() - 1; 
  
    // Calling permutations for the first 
    // time by passing l 
    // as 0 and h = nums.size()-1 
    permutations(res, nums, 0, x); 
    return res; 
} 
int main()
{
    ll int n;
    cin>>n;

    vec v(n);
    auto j=1;
    for(auto i=0;i<n;i++)
      v.ep(j++);

    vector<vector<int>> ans = permute(v);
    vec last_ans;
    for (auto i=0; i<ans.size(); i++) {
        for (auto j=0; j<ans[0].size()-1; j++) {
            if (abs(ans[i][j]-ans[i][j+1]) == 1)
               last_ans.ep(ans[i][j]);
            
            else {
                last_ans.clear();
                break;
            }
        }
    }

    return 0;
}