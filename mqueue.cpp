#include <bits/stdc++.h>
using namespace std;

class mqueue {
public:
    mqueue() {
        first = last = -1;
    }
    bool empty() {
        if (first == -1) {
            return true;
        }
        return false;
    }
    int size() {
        return last - first;
    }
    void push(int value) {
        if (empty()) {
            elements.push_back(value);
            first = last = 0;
            return;
        }
        elements.push_back(value);
        ++last;
    }
    void pop() {
        if (first == last) {
            first = last = -1;
            elements.clear();
        }
        first++;
    }
    int front() {
        int value;
        if (empty()) {
            return value;
        }
        value = elements[first];
        return value;
    }
    int dequeue() {
        int value;
        if (empty()) {
            return value;
        }
        if (first == last) {
            value = elements[first];
            first = last = -1;
            elements.clear();
            return value;
        }
        value = elements[first];
        first++;
        return value;
    }
private:
    vector<int> elements;
    int first, last;
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    mqueue myqueue;
    cout << "empty? - " << myqueue.empty() << "\n";
    myqueue.push(10);
    myqueue.push(-3);
    cout << "size - " << myqueue.size() << "\n";
    cout << "empty? - " << myqueue.empty() << "\n";
    cout << "serviced - " << myqueue.dequeue() << "\n";
    myqueue.push(1);
    cout << "front - " << myqueue.front() << "\n";
    cout << "serviced - " << myqueue.dequeue() << "\n";
    cout << "empty? - " << myqueue.empty() << "\n";
    myqueue.pop();
    cout << "front - " << myqueue.front() << "\n";
    cout << "serviced - " << myqueue.dequeue() << "\n";
    myqueue.push(-33);
    cout << "empty? - " << myqueue.empty() << "\n";
    cout << "serviced - " << myqueue.dequeue() << "\n";
    return 0;
}