#include <iostream>
using namespace std;
int main(){
    // here we are defining and initalising and array of integers with a length of 5 (0 indexed)
    int numsFirst[5]={1,2,3,4,5};
    for (int i=0;i<5;i++){
        cout<<numsFirst[i]<<"\n";
    }
    // here we are defining but not initalising a new array of intergers with a lenght of 5
    int numsSecond[5];
    for (int i=0;i<5;i++){
        numsSecond[i]=numsFirst[4-i];
        cout<<numsSecond[i]<<"\n";
    }
}