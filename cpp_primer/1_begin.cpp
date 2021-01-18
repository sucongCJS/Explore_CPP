#include <iostream>
#include <typeinfo>
using namespace std;

int main(){

const double pi = 3.14;
const double *cptr = &pi;

double dval = 10;
cptr = &dval;
}