/*(ѧ����ôȡ�����д�������һ��Ԫ��)
����һ����������A��һ����ѯ����queries��

���ڵ�i�β�ѯ����?val =?queries[i][0], index?= queries[i][1]�����ǻ��?val?�ӵ�?A[index]?�ϡ�Ȼ�󣬵�?i?�β�ѯ�Ĵ��� A ��ż��ֵ�ĺ͡�

���˴�������?index = queries[i][1]?�Ǵ� 0 ��ʼ��������ÿ�β�ѯ���������޸�����?A����

�������в�ѯ�Ĵ𰸡���Ĵ�Ӧ��������?answer?������answer[i]?Ϊ��?i?�β�ѯ�Ĵ𰸡�

?

ʾ����

���룺A = [1,2,3,4], queries = [[1,0],[-3,1],[-4,0],[2,3]]
�����[8,6,2,4]
���ͣ�
��ʼʱ������Ϊ [1,2,3,4]��
�� 1 �ӵ� A[0] ��֮������Ϊ [2,2,3,4]��ż��ֵ֮��Ϊ 2 + 2 + 4 = 8��
�� -3 �ӵ� A[1] ��֮������Ϊ [2,-1,3,4]��ż��ֵ֮��Ϊ 2 + 4 = 6��
�� -4 �ӵ� A[0] ��֮������Ϊ [-2,-1,3,4]��ż��ֵ֮��Ϊ -2 + 4 = 2��
�� 2 �ӵ� A[3] ��֮������Ϊ [-2,-1,3,6]��ż��ֵ֮��Ϊ -2 + 6 = 4��

��Դ�����ۣ�LeetCode��
���ӣ�https://leetcode-cn.com/problems/sum-of-even-numbers-after-queries
*/

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> answers;
        int sum = 0;
        for(int  i = 0; i < A.size(); ++i)
        {
            if(A[i] %2 == 0)//�Ƚ�����ż�����
                sum += A[i];
        }
        
        for(int i = 0; i < queries.size(); ++i)
        {
            if(A[queries[i][1]] % 2 == 0 && queries[i][0] % 2 == 0)//����ż����A[queries[i][1]]��ȡҪ�ӵ���A������ĸ�λ���ϡ�
                sum += queries[i][0];
            if(A[queries[i][1]] % 2 == 0 && queries[i][0] % 2 != 0)//Aԭ����ż��������һ��������
                sum -= (A[queries[i][1]]);
            //if(A[queries[i][1]] % 2 != 0 && queries[i][0] % 2 == 0)//A������������ż����
              //  sum += 0;
            if(A[queries[i][1]] % 2 != 0 && queries[i][0] % 2 != 0)//��������ż����
                sum += (queries[i][0] + A[queries[i][1]]);
            answers.push_back(sum);
            A[queries[i][1]] += queries[i][0];
        }
        return answers;
    }
};

