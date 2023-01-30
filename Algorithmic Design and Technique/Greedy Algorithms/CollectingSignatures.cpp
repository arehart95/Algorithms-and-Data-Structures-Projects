#include <bits/stdc++.h>
using namespace std;


struct Segment {
    int start, end;
};

vector<int> optimal_points(vector<Segment> &segments) {

    // sort the vector according to the end points
    sort(segments.begin(), segments.end(), []( Segment &a, Segment &b) -> bool {
        return a.end < b.end;
    });

    vector<int> points; // create a vector to store the common points in the segments
    int point = segments[0].end; // set the point to the first end point i-e shortest end point
    points.push_back(point);

    for (int i = 1; i < segments.size(); ++i) {
        if (point < segments[i].start || point > segments[i].end) { // if the point is not in the segment
            point = segments[i].end; // update the point to the end point of the current segment
            points.push_back(point); // store it in the vector
        }
    }

    return points;
}

int main() {
    unsigned int n;
    cin >> n;
    vector<Segment> segments(n);
    for (int i = 0; i < segments.size(); ++i) {
        cin >> segments[i].start >> segments[i].end;
    }
    vector<int> points = optimal_points(segments);
    cout << points.size() << "\n";
    for (int i = 0; i < points.size(); ++i) {
        cout << points[i] << " ";
    }
    return 0;
}
