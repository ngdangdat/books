/**
 * @file greedy_artist.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-08-08
 * 
 * @copyright Copyright (c) 2023
 */
#include<iostream>
#include<vector>
#include<map>
#include<queue>
#define PII pair<int, int>

using namespace std;

class ScheduleComparator {
public:
    bool operator()(PII l, PII r) {
        if (l.first > r.first) return true;
        else if (l.first == r.first && l.second < r.second) return true;

        return false;
    }
};


class Solution {
public:
    int max_schedule_count(vector<PII>& schedules) {
        // vector<pair<int , int>> sorted_schedules;
        priority_queue<PII, vector<PII>, ScheduleComparator> pq_start_length;
        for (int i = 0; i < schedules.size(); i++) {
            PII schedule = schedules[i];
            pq_start_length.push(make_pair(schedule.first, schedule.second - schedule.first));
        }
        int curr_start = 0;
        int total = 0;
        while (pq_start_length.size() > 0) {
            PII curr = pq_start_length.top();
            if (curr.first >= curr_start) {
                curr_start = curr.first + curr.second;
                total += 1;
            }
            pq_start_length.pop();
        }
        return total;
    }
};

int main() {
    vector<pair<int, int>> inputs1 = {
        make_pair(1, 3),
        make_pair(2, 5),
        make_pair(3, 9),
        make_pair(6, 8),
    };
    Solution s = Solution();

    int max_schedule_count1 = s.max_schedule_count(inputs1);
    printf("result1: %d, expected: 2", max_schedule_count1);
 
    return 0;
}
