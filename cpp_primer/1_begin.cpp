#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    double obj = 3.14, *pd = &obj;

void *pv;
pv = &obj;  //
pv = pd;
    cout<<"hell";
}