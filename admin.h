#include "./admin/doughnut.h"
#include "./admin/fail.h"
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
using namespace std;

const int studentCnt = 50;
int currentCnt = 0;
float acceptCnt = 0;

void success(){
  if(acceptCnt / currentCnt >= 0.8)
    doughnut();
  else
    failure();
}

// @Anthony

pair <string, int> table[80] = {
  make_pair("a", 0),
};

//

void loader(){
  for (int i = 1; i <= 25; i++){
    cout << "Loading";
    for (int j = 1; j <= i; j++){
      cout << ".";
    }
    cout << '\n';
    std::this_thread::sleep_for(std::chrono::nanoseconds(50000000));
  }
  currentCnt++;
  cout << "=================================================" << endl;
  cout << endl;
  cout << endl;
  cout << "       Current Accepted Rate: " << setprecision(2) << 100 * (acceptCnt / studentCnt) << "%" << endl;
  cout << endl;
  cout << endl;
  cout << "=================================================" << endl;
  std::this_thread::sleep_for(std::chrono::seconds(3));
}

bool checker(){
  /*
  if legal
    acCnt++
  */
  return true;
}
