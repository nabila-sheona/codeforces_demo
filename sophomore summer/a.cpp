#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int nums[3] = {a, b, c};


        sort(nums, nums + 3);

        int increases = 5;
        while (increases > 0) {

            sort(nums, nums + 3);

            nums[0]++;

            increases--;
        }


        int result = nums[0] * nums[1] * nums[2];
        cout << result << endl;
    }
    return 0;
}
