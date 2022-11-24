#include "allHeader.h"
#include "./admin/doughnut.h"
#include "./admin/fail.h"
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
using namespace std;

const int studentCnt = 26;
const int headerCnt = 26;
int currentCnt = 0;
float acceptCnt = 0;

void success(){
  if(acceptCnt / studentCnt >= 0.8)
    doughnut();
  else
    failure();
}

// @Anthony

pair <int, int> table[headerCnt] = {
  make_pair(apple, 'a' + 'p' + 'p' + 'l' + 'e'),
  make_pair(ball, 'b' + 'a' + 'l' + 'l'),
  make_pair(car, 'c' + 'a' + 'r'),
  make_pair(duck, 'd' + 'u' + 'c' + 'k'),
  make_pair(egg, 'e' + 'g' + 'g'),
  make_pair(fire, 'f' + 'i' + 'r' + 'e'),
  make_pair(good, 'g' + 'o' + 'o' + 'd'),
  make_pair(high, 'h' + 'i' + 'g' + 'h'),
  make_pair(ink, 'i' + 'n' + 'k'),
  make_pair(joy, 'j' + 'o' + 'y'),
  make_pair(kid, 'k' + 'i' + 'd'),
  make_pair(lion, 'l' + 'i' + 'o' + 'n'),
  make_pair(may, 'm' + 'a' + 'y'),
  make_pair(now, 'n' + 'o' + 'w'),
  make_pair(opt, 'o' + 'p' + 't'),
  make_pair(pro, 'p' + 'r' + 'o'),
  make_pair(quiz, 'q' + 'u' + 'i' + 'z'),
  make_pair(rest, 'r' + 'e' + 's' + 't'),
  make_pair(star, 's' + 't' + 'a' + 'r'),
  make_pair(team, 't' + 'e' + 'a' + 'm'),
  make_pair(upon, 'u' + 'p' + 'o' + 'n'),
  make_pair(vest, 'v' + 'e' + 's' + 't'),
  make_pair(work, 'w' + 'o' + 'r' + 'k'),
  make_pair(xray, 'x' + 'r' + 'a' + 'y'),
  make_pair(yoyo, 'y' + 'o' + 'y' + 'o'),
  make_pair(zoo, 'z' + 'o' + 'o')
};

//

void loader(){
  for (int i = 0; i < 42; i++){
    cout << "Loading";
    for (int j = 0; j <= i; j++){
      cout << ".";
    }
    std::this_thread::sleep_for(std::chrono::nanoseconds(10000000));
    cout << endl;
  }
  currentCnt++;
  cout << "=================================================" << endl;
  cout << endl;
  cout << endl;
  if(acceptCnt == 0)
    cout << "        Current Accepted Rate: " << 0 << "%" << endl;
  else
    cout << "        Current Accepted Rate: " << setprecision(2) << 100 * (acceptCnt / currentCnt) << "%" << endl;
  cout << endl;
  cout << endl;
  cout << "=================================================" << endl;
  std::this_thread::sleep_for(std::chrono::seconds(1));
  //system("cls");
}

bool checker(){
  if (currentCnt == studentCnt)
    return false;
  if(table[currentCnt].first == table[currentCnt].second)
    acceptCnt++;
  return true;
}
