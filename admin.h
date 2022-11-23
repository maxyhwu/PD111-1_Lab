#include "./admin/doughnut.h"
#include "./admin/fail.h"
#include <string>
#include <iostream>
using namespace std;

const int studentCnt = 50;
int currentCnt = 0;

void success(){
  if(currentCnt == studentCnt)
    doughnut();
  else
    failure();
}

string headerTable[80] = {
  "apple",
  "ball"
};

int ans[80] = {

};

void loader(){
  for (int i = 1; i <= 20; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << "#";
    }
    cout << '\n';
  }
  currentCnt++;
}

bool checker(){
  return true;
}
