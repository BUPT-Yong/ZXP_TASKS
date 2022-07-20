#include<stdlib.h>
#include<vector>
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