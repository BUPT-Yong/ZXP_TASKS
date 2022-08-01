#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main()
{
    string m;
    int buffer[4];
    int a[4];//存放m*A mod 26的结果
    int b[16];//存放m和A的转置矩阵的乘积
              //矩阵A的转置矩阵
    int A[] = { 8,6,5,10,
        6,9,8,6,
        9,5,4,11,
        5,10,9,4 };
    //A的逆矩阵的转置矩阵
    //int B[] = { 23,2,2,25,
    //  20,11,20,2,
    //  5,18,6,22,
    //  1,1,25,25 };
    cout << "输入明文：" << endl;
    cin >> m;
    system("title = 加密");
    //把字符转化成10进制整数
    for (int i = 0; m[i] != '\0'; i++)
    {
        buffer[i] = m[i] - 97;
    }

    cout << "buffer数组中的元素：" << endl;
    for (int i = 0; i<4; i++)
    {
        cout << buffer[i] << ",";
    }
    cout << endl;
    //加密C = m * A mod 26，把结果放入数组a
    for (int i = 0; i<16; i++)
    {
        b[i] = buffer[i % 4] * A[i];
    }
    cout << "b数组中的元素：" << endl;
    for (int i = 0; i<16; i++)
    {
        cout << b[i] << ",";
    }
    cout << endl;
    for (int i = 0; i < 16; i += 4)
    {
        a[i / 4] = (b[i] + b[i + 1] + b[i + 2] + b[i + 3]) % 26;
        if (a[i / 4] < 0)
            a[i / 4] += 26;
    }

    cout << "a数组中的元素：" << endl;
    for (int i = 0; i<4; i++)
    {
        cout << a[i] << ",";
    }
    cout << endl;
    //转换为字符
    cout << "密文为：" << endl;
    for (int i = 0; i<4; i++)
    {
        m[i] = a[i] + 97;
        cout << m[i];
    }
    cout << endl;
    system("pause");
    return 0;
}