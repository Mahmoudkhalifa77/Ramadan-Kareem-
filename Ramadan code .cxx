#include <iostream>
#include <string>

using namespace std;

int main() {
    string time;
    cin >> time;

    string maghrib_time = "18:05";
    string fajr_time = "04:35";

    if (time >= fajr_time && time < maghrib_time) {
        cout << "mta yazn almghrb";
    } else {
        cout << "tm t3b2a alkrsh bnga7";
    }

    return 0;
}
