#include <iostream>
#include <set>
#include <string>
using namespace std;


int main(){
    set<string> words;
    while (true)
    {
        string temp = to_string(rand());
        if (words.contains(temp))
        words.insert(to_string(rand()));
    }
    

    
}