#include "allHeader.h"
#include "admin/doughnut.h"
#include "admin/fail.h"
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>
using namespace std;

const int studentCnt = 52; // to be determined
const int headerCnt = 52;
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
  make_pair(zoo, 'z' + 'o' + 'o'),
  make_pair(air, 'a' + 'i' + 'r'),
  make_pair(book, 'b' + 'o' + 'o' + 'k'),
  make_pair(cash, 'c' + 'a' + 's' + 'h'),
  make_pair(dice, 'd' + 'i' + 'c' + 'e'),
  make_pair(eagle, 'e' + 'a' + 'g' + 'l' + 'e'),
  make_pair(fine, 'f' + 'i' + 'n' + 'e'),
  make_pair(gone, 'g' + 'o' + 'n' + 'e'),
  make_pair(hello, 'h' + 'e' + 'l' + 'l' + 'o'),
  make_pair(inter, 'i' + 'n' + 't' + 'e' + 'r'),
  make_pair(jam, 'j' + 'a' + 'm'),
  make_pair(kick, 'k' + 'i' + 'c' + 'k'),
  make_pair(lemon, 'l' + 'e' + 'm' + 'o' + 'n'),
  make_pair(money, 'm' + 'o' + 'n' + 'e' + 'y'),
  make_pair(nice, 'n' + 'i' + 'c' + 'e'),
  make_pair(omg, 'o' + 'm' + 'g'),
  make_pair(play, 'p' + 'l' + 'a' + 'y'),
  make_pair(queue, 'q' + 'u' + 'e' + 'u' + 'e'),
  make_pair(read, 'r' + 'e' + 'a' + 'd'),
  make_pair(stop, 's' + 't' + 'o' + 'p'),
  make_pair(temp, 't' + 'e' + 'm' + 'p'),
  make_pair(under, 'u' + 'n' + 'd' + 'e' + 'r'),
  make_pair(vent, 'v' + 'e' + 'n' + 't'),
  make_pair(what, 'w' + 'h' + 'a' + 't'),
  make_pair(xat, 'x' + 'a' + 't'),
  make_pair(yes, 'y' + 'e' + 's'),
  make_pair(zip, 'z' + 'i' + 'p')
};

//

void loader(){
  cout << "\x1b[2J";
  cout << "\x1b[H";
  for (int i = 0; i < 42; i++){
    cout << "\x1b[2J";
    cout << "\x1b[H";
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
    cout << "        Current Accepted Rate: " << 100 * (acceptCnt / studentCnt) << "%" << endl;
  cout << endl;
  cout << endl;
  cout << "=================================================" << endl;
  std::this_thread::sleep_for(std::chrono::seconds(2));
}

bool checker(){
  if (currentCnt == studentCnt)
    return false;
  if(table[currentCnt].first == table[currentCnt].second)
    acceptCnt++;
  return true;
}
