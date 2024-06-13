#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string time;
        cin >> time;

        int hour = stoi(time.substr(0, 2));
        int minute = stoi(time.substr(3, 2));

        string symbol = (hour < 12) ? "AM" : "PM";

        if (hour == 0) {
            hour = 12;
        } else if (hour > 12) {
            hour -= 12;
        }

        printf("%02d:%02d %s\n", hour, minute, symbol.c_str());
    }

    return 0;
}
