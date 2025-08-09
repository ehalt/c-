// experimenting how to throw error 

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
            throw invalid_argument("a must be >= 0");
        }
        else {
            
            return a - b;
        }
    };

    cout << add(22, 12) << '\n' << sub(23, 12);



    return 0;
}


