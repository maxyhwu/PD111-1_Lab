#include "allHeader.h"
#include "./admin/doughnut.h"
#include "./admin/fail.h"
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
using namespace std;

const int studentCnt = 35;
const int headerCnt = 80;
int currentCnt = 0;
float acceptCnt = 0;

void success(){
  if(acceptCnt / studentCnt >= 0.8)
    doughnut();
  else
    failure();
}

// @Anthony

pair <string, int> table[headerCnt] = {
  make_pair("a", 0),
};

int result[headerCnt] = {
  apple,

};

//

void loader(){
  for (int i = 0; i <= 42; i++){
    cout << "Loading";
    for (int j = 0; j <= i; j++){
      cout << ".";
    }
    std::this_thread::sleep_for(std::chrono::nanoseconds(30000000));
    cout << endl;
  }
  currentCnt++;
  cout << "=================================================" << endl;
  cout << endl;
  cout << endl;
  cout << "        Current Accepted Rate: " << setprecision(2) << 100 * (acceptCnt / studentCnt) << "%" << endl;
  cout << endl;
  cout << endl;
  cout << "=================================================" << endl;
  std::this_thread::sleep_for(std::chrono::seconds(3));
}

bool checker(){
  if(result[currentCnt] == table[currentCnt].second)
    acceptCnt++;
  return true;
}
