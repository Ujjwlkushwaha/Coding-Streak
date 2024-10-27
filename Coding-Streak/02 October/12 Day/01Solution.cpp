#include <bits/stdc++.h>
using namespace std;

int minGroups(vector<vector<int>> &intervals)
{
    vector<pair<int, int>> events;

    // Create start and end events for each interval
    for (const auto &interval : intervals)
    {
        int left = interval[0], right = interval[1];
        events.push_back({left, 1});       // Start of an interval
        events.push_back({right + 1, -1}); // End of an interval (right + 1 to handle inclusive overlap)
    }

    // Sort events by time; in case of tie, end events (-1) should come before start events (1)
    sort(events.begin(), events.end());

    int max_groups = 0;
    int current_groups = 0;

    // Sweep through the events
    for (const auto &event : events)
    {
        current_groups += event.second; // Add 1 for start, subtract 1 for end
        max_groups = max(max_groups, current_groups);
    }

    return max_groups;
}

int main()
{
    vector<vector<int>> intervals = {{5,10},{6,8},{1,5},{2,3},{1,10}};
    int min_groups = minGroups(intervals);
    cout << "Minimum number of groups: " << min_groups << endl;
}