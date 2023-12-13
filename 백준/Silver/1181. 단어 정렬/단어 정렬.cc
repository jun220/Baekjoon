#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

bool compare(const string& s1, const string& s2) {
    if (s1.length() == s2.length()) {
        return s1 < s2; // 길이가 같으면 사전 순으로 정렬
    }
    return s1.length() < s2.length(); // 길이가 짧은 것부터 정렬
}

int main() {
    int N;
    cin >> N;
    
    vector<string> words;
    set<string> uniqueWords; // 중복을 제거하기 위한 set

    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        uniqueWords.insert(word); // 중복된 단어는 set에 추가
    }

    for (const string& word : uniqueWords) {
        words.push_back(word); // 중복이 제거된 단어들을 vector에 추가
    }

    sort(words.begin(), words.end(), compare);

    for (const string& word : words) {
        cout << word << '\n';
    }

    return 0;
}
