#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string word;
        cin >> word;

        string result;
        for (int i = 0; i < n; i++) {

            //bacedbab


             if (i < n - 1 && ((word[i] == 'b' || word[i] == 'c' || word[i] == 'd') &&
                             (word[i + 1] == 'a' || word[i + 1] == 'e') &&
                             (word[i + 2] == 'b' || word[i + 2] == 'c' || word[i + 2] == 'd')
                             &&
                                  (word[i + 3] == 'a' || word[i + 3] == 'e'))) {
                result += word[i];
                result += word[i + 1];
                result += '.';
                i=i+1;
            }

            else      if (i < n - 2 && ((word[i] == 'b' || word[i] == 'c' || word[i] == 'd') &&
                             (word[i + 1] == 'a' || word[i + 1] == 'e') &&
                             (word[i + 2] == 'b' || word[i + 2] == 'c' || word[i + 2] == 'd')
                              && (word[i + 3] == 'b' || word[i + 3] == 'c' || word[i + 3] == 'd') )) {
                result += word[i];
                result += word[i + 1];
                result += word[i + 2];
                result += '.';
                i += 2;
            }

            else {
                result += word[i];
            }
        }

        cout << result << endl;
    }

    return 0;
}
/*
6
8
bacedbab
4
baba
13
daddecabeddad
3
dac
6
dacdac
22
dababbabababbabbababba
*/
