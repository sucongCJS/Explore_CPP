#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i;
    const auto j2 = i, &k2 = i;
    cout<<typeid(k).name()<<endl;
    cout<<typeid(k2).name()<<endl;
}