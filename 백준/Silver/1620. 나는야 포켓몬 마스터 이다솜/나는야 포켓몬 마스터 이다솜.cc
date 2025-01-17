#include <iostream>
#include <stack>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;

    vector<string> pokemons;
    unordered_map<string, int> pokemons_by_name;

    pokemons.push_back("");

    for (int i = 1; i <= N; i++) {
        string temp;
        cin >> temp;

        pokemons.push_back(temp);
        pokemons_by_name.insert({ temp, i });
    }

    //cout << "\n### 도감 입력 완료 ###\n";
    for (int i = 0; i < M; i++) {
        string question;
        cin >> question;
        char first = question[0];

        if (isdigit(first)) {
            cout << pokemons[stoi(question)];
        }
        else {
            cout << pokemons_by_name[question];
        }
        cout << '\n';
    }
}