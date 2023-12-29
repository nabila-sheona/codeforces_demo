#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int ai;
    int bi;
} Lamp;

int compare(const void* a, const void* b) {
    Lamp* lamp1 = (Lamp*)a;
    Lamp* lamp2 = (Lamp*)b;

    return lamp2->bi - lamp1->bi;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        Lamp* lamps = (Lamp*)malloc(n * sizeof(Lamp));

        for (int i = 0; i < n; i++) {
            scanf("%d %d", &lamps[i].ai, &lamps[i].bi);
        }

        qsort(lamps, n, sizeof(Lamp), compare);

        int x = 0;
        long long points = 0;

        for (int i = 0; i < n; i++) {
            if (lamps[i].ai > x) {
                break;
            }
            points += lamps[i].bi;
            x++;
        }

        printf("%lld\n", points);

        free(lamps);
    }

    return 0;
}
