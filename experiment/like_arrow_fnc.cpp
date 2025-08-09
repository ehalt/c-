#include<bits/stdc++.h>
using namespace std;
#define doura ios::sync_with_stdio(0);cin.tie(0)
#define ll long long
#define sesh '\n';


void myfunc() {
    cout << "I just got executed!";
}

int main() {
    #ifndef TORI
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    
    auto add = [&](int a, int b) {
        return a + b;
    };

    auto sub = [&](int a, int b) {
        if (a < 0) {
            cout << "you must have to insert a number which is greater than 0";
            return 0; // here if i don't use return zero, it will give me a warrning like " non void lambda does not return a value in all control paths [-wreturn type ] 
        }
        else {
            
            return a - b;
        }
    };

    cout << add(23, 12) << '\n' << sub(23, 12);



    return 0;
}














