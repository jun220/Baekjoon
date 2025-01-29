#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Person {
    int index;
    int age;
    string name;
};

bool compare(const Person& a, const Person& b) {
    if (a.age != b.age) {
        return a.age < b.age;
    }
    return a.index < b.index;
}


int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int N;
    cin >> N;

    int age;
    string name;

    vector<Person> people;

    for (int i = 0; i < N; i++) {
        cin >> age >> name;
        Person p{ i, age, name };
        people.push_back(p);
    }

    sort(people.begin(), people.end(), compare);
    
    for (Person p : people) {
        cout << p.age << ' ' << p.name << '\n';
    }

}