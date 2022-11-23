# include <iostream>
# include "allHeader.h"
using namespace std;

int main(){

  while(checker(currentCnt)){
    loader();
    currentCnt++;
  }

  success();

  return 0;
}
