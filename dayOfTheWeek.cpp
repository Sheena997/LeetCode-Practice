/*
给你一个日期，请你设计一个算法来判断它是对应一周中的哪一天。

输入为三个整数：day、month 和?year，分别表示日、月、年。

您返回的结果必须是这几个值中的一个?{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}。

?

示例 1：

输入：day = 31, month = 8, year = 2019
输出："Saturday"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/day-of-the-week

*/
//基姆拉尔森公式
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        if(month == 1 || month == 2)
        {
            month += 12;
            --year;
        }
        int week  = (day+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7;
        string res[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        return res[week];
    }
};

//普通方法
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        string weekday[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int Day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        //1971-01-01 星期五
        int sum = 0;
        for(int i = 1971; i < year; ++i)
        {
            if((i % 4 == 0 && i % 100 != 0) || (i % 400 ==0))
                sum += 366;
            else
                sum += 365;
        }
        
        for(int i = 0; i < month - 1; ++i)
        {
            sum += Day[i];
            if(i == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0)))
                sum += 1;
        }
        sum += day;
        return weekday[(sum + 4) % 7];
    }
};;
