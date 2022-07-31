//
//  liangshuzhihe.cpp
//  mao_pao_pai_xu
//
//  Created by 赵霄鹏 on 2022/7/16.
//
#include<stdlib.h>
/*#include<vector>
#include<iostream>
#include<random>
#include<time.h>

void bubbleSort(std::vector<int>& intVec, bool reverse=false) {
  if (intVec.size() <= 1) {
    return;
  }

  for (int i = 0; i < intVec.size(); i++) {
    for (int j = 0; j < intVec.size()-1; j++) {
      if (!reverse && intVec[j] > intVec[j+1]) {
        int tmp = intVec[j];
        intVec[j] = intVec[j+1];
        intVec[j+1] = tmp;
      }
      if (reverse && intVec[j] < intVec[j+1]) {
        int tmp = intVec[j];
        intVec[j] = intVec[j+1];
        intVec[j+1] = tmp;
      }
    }
  }
}


int main() {
  clock_t start, end;
  // 随机数种子
  srand((unsigned)time(NULL));
  std::vector<int> input;
  // 生成初始随机数组
  for (int i = 0; i < 1000; i++) {
    input.push_back(rand());
  }

  std::cout << "befor sort:";
  for(auto i : input) {
    std::cout << i << ",";
  }
  std::cout << std::endl;

  start = clock();

  // sort
  bubbleSort(input);

  end = clock();

  std::cout << "after sort:";
  for(auto i : input) {
    std::cout << i << ",";
  }
  std::cout << std::endl;

  std::cout << "time cost: " << (end - start) / 1000 << "ms";
}

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int al = a.size();
        int bl = b.size();
        while(al < bl) //让两个字符串等长，若不等长，在短的字符串前补零，否则之后的操作会超出索引
        {
            a = '0' + a;
            ++ al;
        }
        while(al > bl)
        {
            b = '0' + b;
            ++ bl;
        }
        for(int j = a.size() - 1; j > 0; -- j) //从后到前遍历所有的位数，同位相加
        {
            a[j] = a[j] - '0' + b[j];
            if(a[j] >=  '2') //若大于等于字符‘2’，需要进一
            {
                a[j] = (a[j] - '0') % 2 + '0';
                a[j-1] = a[j-1] + 1;
            }
        }
        a[0] = a[0] - '0' + b[0]; //将ab的第0位相加
        if(a[0] >= '2') //若大于等于2，需要进一
        {
            a[0] = (a[0] - '0') % 2 + '0';
            a = '1' + a;
        }
        return a;
    }
};
 */
#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<=9;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << j << "*" << i << "=" << j*i << " ";
        }
        cout << endl;
    }
    system ("pause");
    return 0 ;
}
