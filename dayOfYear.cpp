/*
一年中的第几天
给你一个按 YYYY-MM-DD 格式表示日期的字符串 date，请你计算并返回该日期是当年的第几天。
通常情况下，我们认为 1 月 1 日是每年的第 1 天，1 月 2 日是每年的第 2 天，依此类推。每个月的天数与现行公元纪年法（格里高利历）一致。
示例 1：
输入：date = "2019-01-09"
输出：9
来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/day-of-the-year
*/
//字符串中截取子串并转为int的方法。
class Solution {
public:
    int dayOfYear(string date) {
        vector<int> day_map = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
        int year = atoi(date.substr(0, 4).c_str());
        int month = atoi(date.substr(5, 2).c_str());
        int day = atoi(date.substr(8, 2).c_str());
        int sum = 0;
        
        sum += day;
        if(month == 2)
        {
            sum += 31;
        }
        else if(month > 2)
        {
            sum += day_map[month - 1];
            if((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0))
                sum += 1;
        }
        return sum;
    }
};
