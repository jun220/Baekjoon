#include <iostream>
#include <algorithm>
#include <string>


using namespace std;



int main(void) {
    //cin.tie(NULL);
    //ios_base::sync_with_stdio(false);

    string s;
    int count{ 0 };
    bool flag{ true };
    getline(cin, s);


    
    
    for (char letter : s) {
        if (letter == ' ') {
            flag = true;
            continue;
        }
        if (flag == true) {
            flag = false;
            count++;
        }
    }
    cout << count;

    return 0;
}