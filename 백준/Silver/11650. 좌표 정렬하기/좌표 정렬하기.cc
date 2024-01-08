#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

class Point {
public:
    int x;
    int y;
    Point(int x, int y) : x(x), y(y) {

    }

    // '==' 연산자 오버로딩
    bool operator==(const Point& other) const {
        return (x == other.x) && (y == other.y);
    }

    // '<' 연산자 오버로딩
    bool operator<(const Point& other) const {
        if (x != other.x) return x < other.x; //기본적으로는 x좌표 증가 순
        return y < other.y; //x가 같으면 y만 비교
    }

    // '>' 연산자 오버로딩
    bool operator>(const Point& other) const {
        if (x != other.x) return x > other.x;
        return y > other.y;
    }

    friend std::ostream& operator<<(std::ostream& os, const Point& point);
    
};

std::ostream& operator<<(std::ostream& os, const Point& point)
{
    os << point.x << " " << point.y << '\n';
    return os;
}

int main() {
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int N, x, y;
    vector<Point> points;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        Point point(x, y);
        points.push_back(point);
    }

    sort(points.begin(), points.end());

    for (int i = 0; i < N; i++) {
        cout << points[i];
    }
    

    return 0;
}


