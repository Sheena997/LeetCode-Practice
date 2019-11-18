/*
构造矩形
作为一位web开发者， 懂得怎样去规划一个页面的尺寸是很重要的。 现给定一个具体的矩形页面面积，你的任务是设计一个长度为 L 和宽度为 W 且满足以下要求的矩形的页面。要求：
1. 你设计的矩形页面必须等于给定的目标面积。
2. 宽度 W 不应大于长度 L，换言之，要求 L >= W 。
3. 长度 L 和宽度 W 之间的差距应当尽可能小。
你需要按顺序输出你设计的页面的长度 L 和宽度 W。
示例：
输入: 4
输出: [2, 2]
解释: 目标面积是 4， 所有可能的构造方案有 [1,4], [2,2], [4,1]。
但是根据要求2，[1,4] 不符合要求; 根据要求3，[2,2] 比 [4,1] 更能符合要求. 所以输出长度 L 为 2， 宽度 W 为 2。
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/construct-the-rectangle
*/
//从平方根的位置开始向下遍历
class Solution {
public:
vector<int> constructRectangle(int area) {
    vector<int> v;
    int width = sqrt(area);
    for(int w = width; w > 0; --w)
    {
        if(area % w == 0)
        {
            v.push_back(area / w);
            v.push_back(w);
            break;
        }
    }
    return v;
    }
};


/*
旋转字符串
给定两个字符串, A 和 B。
A 的旋转操作就是将 A 最左边的字符移动到最右边。 例如, 若 A = 'abcde'，在移动一次之后结果就是'bcdea' 。如果在若干次旋转操作之后，A 能变成B，那么返回True。
示例 1:
输入: A = 'abcde', B = 'cdeab'
输出: true
示例 2:
输入: A = 'abcde', B = 'abced'
输出: false
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotate-string
*/
class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.size() != B.size())
            return false;
        string C;
        C = A + A;
        return C.find(B) != -1;
    }
};
//方法二：
class Solution {
public:
    string my_reverse(string s, int n)
    {
        reverse(s.begin(), s.begin() + n);
        reverse(s.begin() + n, s.end());
        reverse(s.begin(), s.end());
        
        return s;
    }
    bool rotateString(string A, string B) {
        if(A.size() != B.size())
            return false;
        if(A.empty() && B.empty())
            return true;
        for(int i = 0; i < A.size(); ++i)
        {
            if(B == my_reverse(A, i))
                return true;
        }
        return false;
    }
};
