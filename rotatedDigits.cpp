 
/*
旋转数字
我们称一个数 X 为好数, 如果它的每位数字逐个地被旋转 180 度后，我们仍可以得到一个有效的，且和 X 不同的数。要求每位数字都要被旋转。

如果一个数的每位数字被旋转以后仍然还是一个数字，?则这个数是有效的。0, 1, 和 8 被旋转后仍然是它们自己；2 和 5 可以互相旋转成对方；6 和 9 同理，除了这些以外其他的数字旋转以后都不再是有效的数字。

现在我们有一个正整数?N, 计算从?1 到?N 中有多少个数?X 是好数？

示例:
输入: 10
输出: 4
解释: 
在[1, 10]中有四个好数： 2, 5, 6, 9。
注意 1 和 10 不是好数, 因为他们在旋转之后不变。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotated-digits

*/
class Solution {
public:
    int rotatedDigits(int N) {
        int tag1 = 0;
        int num = 0;
        int tag2 = 0;
        for(int i = 0; i < N + 1; ++i)
        {
            if(i > 10)
            {
                int a = i;
                while(a > 0)
                {
                    int b = a % 10;
                    if(b == 2 || b == 5 || b == 6 || b == 9)
                        tag1 = 1;
                    else if(b == 3 || b == 4 || b == 7)
                        tag2 = 1;
                    a = a / 10;
                }
                if(tag1 == 1 && tag2 == 0)
                    ++num;
                tag1 = 0;
                tag2 = 0;
            }
            else
            {
                if(i == 2 || i == 5 || i == 6 || i == 9)
                    ++num;
            }
        }
        return num;
    }
};


/*
给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

示例:

输入: [0,1,0,3,12]
输出: [1,3,12,0,0]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/move-zeroes
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //快慢指针
        int i = 0;
        for(int j = 0; j < nums.size(); ++j)
        {
            if(nums[j] != 0)
            {
                nums[i] = nums[j];
                ++i;
            }
        }
        for(int j = i; j < nums.size(); ++j)
        {
            nums[j] = 0;
        }
    }
};