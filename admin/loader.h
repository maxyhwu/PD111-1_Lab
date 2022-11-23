#include <iostream>
#include "admin.h"
using namespace std;

void loader(){
  for(int i = 1; i <= 20; i++){
    for(int j = 1; j <= i; j++){
      cout << "#";
    }
    cout << '\n';
  }
  currentCnt++;
}
