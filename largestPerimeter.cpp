/*
�����ε�����ܳ�
������һЩ�����������ȣ���ɵ����� A����������������������ɵġ������Ϊ��������ε�����ܳ���

��������γ��κ������Ϊ��������Σ�����?0��
ʾ�� 1��
���룺[3,2,3,4]
�����10
��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/largest-perimeter-triangle
*/
class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(), A.end());
        int max = 0;
        int d = 0;
        for(int i = A.size() - 1; i >= 0; --i)
        {
            if((i - 2) >= 0)
            {
                int a = A[i - 2];
                int b = A[i - 1];
                int c = A[i];
                if((b - a < c) && (a + b > c))
                    d = a + b + c;
                if(max < d)
                    max = d;
            }
        }
        return max;
    }
};
