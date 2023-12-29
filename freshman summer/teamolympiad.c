#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int children[3][5000];
    int count[3] = {0};

    for (int i = 0; i < n; ++i) {
        int skill;
        scanf("%d", &skill);
        children[skill - 1][count[skill - 1]] = i + 1;
        count[skill - 1]++;
    }

    int min_teams = count[0];

    for (int i = 1; i < 3; ++i) {
        if (count[i] < min_teams) {
            min_teams = count[i];
        }
    }

    printf("%d\n", min_teams);

    for (int i = 0; i < min_teams; ++i) {
        printf("%d %d %d\n", children[0][i], children[1][i], children[2][i]);
    }

    return 0;
}
