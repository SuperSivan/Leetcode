
自己的思路：先找到0的位置，然后通过erase删除，最后不足末尾的零

class Solution {
public:
    void moveZeroes(vector<int>& nums) {        
        int Left=0;
        int Right=nums.size();
        int NumOfZero=0;
        vector<int> pos;
        //FindPositionOf0
        for (int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i]==0) pos.push_back(i);
        }
        int pointer=0;
        for (int i=0;i<pos.size();i++)
        {
            nums.erase(nums.begin() + pos[i]-pointer);
            pointer++;
            nums.push_back(0);
        }
    }
};


思路一：双指针将所有非零数字都放在左边

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]!=0)
             {
                 swap(nums[i],nums[j]);
                 i++;
             }
        } 
    }
};


