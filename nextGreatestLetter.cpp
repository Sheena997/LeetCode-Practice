/*
给定一个只包含小写字母的有序数组letters 和一个目标字母 target，寻找有序数组里面比目标字母大的最小字母。
数组里字母的顺序是循环的。举个例子，如果目标字母target = 'z' 并且有序数组为 letters = ['a', 'b']，则答案返回 'a'。
示例:
输入:
letters = ["c", "f", "j"]
target = "a"
输出: "c"
输入:
letters = ["c", "f", "j"]
target = "c"
输出: "f"
输入:
letters = ["c", "f", "j"]
target = "d"
输出: "f"
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-smallest-letter-greater-than-target
*/
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size() - 1;
        while(left <= right)
        {
            int mid = left + (right - left) / 2;
            if(target < letters[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        
        //循环结束时left指向数组中比目标字母大的最
        //小字母，如果目标字母比所有字母都大，则 
        //l = letters.size()，l mod letters.size() = 0，指向数组第一个字母
        return letters[left % letters.size()];
    }
};