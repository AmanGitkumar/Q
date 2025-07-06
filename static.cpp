#include<bits/stdc++.h>
using namespace std;

    void fn(){

       static int x = 0;
        cout << x << endl;
        x++;
    }

int main(){

    fn();
    fn();
    fn();
}