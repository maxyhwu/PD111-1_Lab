#include "doughnut.h"
#include "fail.h"

const int studentCnt = 50;
int currentCnt = 0;

void success(){
  if(currentCnt == studentCnt)
    doughnut();
  else
    failure();
}
