//Leetcode-295
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class MedianFinder {
public:
    priority_queue<int> left; //maxHeap
    priority_queue<int, vector<int>, greater<int>> right; //minHeap
    MedianFinder() { //default constructer

    }

    void addNum(int num) {
        if(left.size() == 0 || num < left.top()) left.push(num);
        else right.push(num);

        if(left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        }
        if(left.size() + 1 < right.size()) {
            left.push(right.top());
            right.pop();
        }
    }

    double findMedian() {
        if(left.size() == right.size()) return (left.top() + right.top()) / 2.0;
        else {
            if(left.size() > right.size()) return left.top();
            else return right.top();
        }

    }
};
int main() {

}