#include <iostream>
using namespace std;

int main() {
    int tt;
    cin >> tt;

    while (tt--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;


        int waysToWin = 0;


        int suneetWins = 0;
        int slavicWins = 0;
        if (a1 > b1) suneetWins++;
        if (a2 > b2) suneetWins++;
        if (b1 > a1) slavicWins++;
        if (b2 > a2) slavicWins++;
        if (suneetWins > slavicWins) waysToWin++;


        suneetWins = 0;
        slavicWins = 0;
        if (a1 > b2) suneetWins++;
        if (a2 > b1) suneetWins++;
        if (b2 > a1) slavicWins++;
        if (b1 > a2) slavicWins++;
        if (suneetWins > slavicWins) waysToWin++;


        suneetWins = 0;
        slavicWins = 0;
        if (a2 > b1) suneetWins++;
        if (a1 > b2) suneetWins++;
        if (b1 > a2) slavicWins++;
        if (b2 > a1) slavicWins++;
        if (suneetWins > slavicWins) waysToWin++;


        suneetWins = 0;
        slavicWins = 0;
        if (a2 > b2) suneetWins++;
        if (a1 > b1) suneetWins++;
        if (b2 > a2) slavicWins++;
        if (b2 > a2) slavicWins++;
        if (b1 > a1) slavicWins++;
        if (suneetWins > slavicWins) waysToWin++;

        cout << waysToWin << endl;
    }

    return 0;
}
