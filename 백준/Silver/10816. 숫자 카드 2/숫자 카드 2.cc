#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct Person {
    int age;
    string name;
};

bool compare(const Person& a, const Person& b) {
    return a.age < b.age;
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N, M;
    cin >> N;


    int card;
    unordered_map<int, int> cards;

    for (int i = 0; i < N; i++) {
        cin >> card;
        cards[card]++;
    }

    //for (auto kv : cards) {
    //    cout << kv.first << ": " << kv.second << '\n';
    //}

    cin >> M;
    
    for (int i = 0; i < M; i++) {
        cin >> card;
        cout << cards[card] << ' ';
    }
    
}