/*
����һ�����ڣ��������һ���㷨���ж����Ƕ�Ӧһ���е���һ�졣

����Ϊ����������day��month ��?year���ֱ��ʾ�ա��¡��ꡣ

�����صĽ���������⼸��ֵ�е�һ��?{"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}��

?

ʾ�� 1��

���룺day = 31, month = 8, year = 2019
�����"Saturday"

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/day-of-the-week

*/
//��ķ����ɭ��ʽ
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

//��ͨ����
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        string weekday[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        int Day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        //1971-01-01 ������
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
