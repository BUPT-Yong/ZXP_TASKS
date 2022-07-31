#include <iostream>
#include <string>
#include <stack>
using namespace std;
class Solution
{
public:
    string addBinary(string a, string b)
    {
        int a_len = a.length();
        int b_len = b.length();
        string result = "";
        stack<char> anti_result;

        if (a == "0")
            result = b;
        else if (b == "0")
            result = a;
        else
        {
            if (a_len < b_len) 
            {
                string c = a;
                a = b;
                b = c;
            }
            int flag = 0;
            int i = a.length();
            int j = b.length();
            while (i > 0 && j > 0)
            {
                if (a[i - 1] - '0' + b[j - 1] - '0' + flag > 1)
                {
                    anti_result.push((a[i - 1] - '0' + b[j - 1] - '0' + flag - 2) + '0');
                    flag = 1;
                    i -= 1;
                    j -= 1;
                }
                else
                {
                    anti_result.push((a[i - 1] - '0' + b[j - 1] - '0' + flag) + '0');
                    flag = 0;
                    i -= 1;
                    j -= 1;
                }
            }

            int k = a.length() - b.length(); 
            while (k > 0)
            {
                if (a[k - 1] - '0' + flag > 1)
                {
                    anti_result.push('0');
                    flag = 1;
                    k -= 1;
                }
                else
                {
                    anti_result.push((a[k - 1] - '0' + flag) + '0');
                    flag = 0;
                    k -= 1;
                }
            }

            if (flag == 1) 
                anti_result.push('1');
        }
        while (!anti_result.empty())
        {
            result += anti_result.top();
            anti_result.pop();
        }

        return result;
    }
};
int main()
{
    string a = "1010";
    string b = "1";
    string result;
    Solution sol;
    result = sol.addBinary(a, b);
    cout << result << endl;

    return 0;
}
/*二进制加法：
1.先把两个数对齐,和十进制计算时候第一步一样。
2.从最右边对齐的上下两个数开始。
3.1+0=1,0+0=0。如果两个数不是都是1,那么直接相加就好,直接写在下面。
4.1+1=10,把1写上面,把0写下面。
5、1 +1 +1 = 11，要注意进位。
6、依次类推，计算完成。*/