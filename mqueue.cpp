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
    void push(int value) {
        if (empty()) {
            elements.push_back(value);
            first = last = 0;
            return;
        }
        elements.push_back(value);
        ++last;
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
    mqueue payments;
    cout << "empty? - " << payments.empty() << "\n";
    payments.push(10);
    payments.push(-3);
    cout << "empty? - " << payments.empty() << "\n";
    cout << "serviced - " << payments.dequeue() << "\n";
    payments.push(1);
    cout << "serviced - " << payments.dequeue() << "\n";
    cout << "empty? - " << payments.empty() << "\n";
    cout << "serviced - " << payments.dequeue() << "\n";
    payments.push(-33);
    cout << "serviced - " << payments.dequeue() << "\n";
    cout << "empty? - " << payments.empty() << "\n";
    cout << "serviced - " << payments.dequeue() << "\n";
    return 0;
}