#include <stdio.h>

void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int unique_ranked[100], j = 0;

    // Removing duplicates from ranked array
    unique_ranked[j++] = ranked[0];
    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            unique_ranked[j++] = ranked[i];
        }
    }

    // Finding ranks for each player's score
    int rankIndex = j - 1;  // Start from the lowest rank
    for (int i = 0; i < m; i++) {
        while (rankIndex >= 0 && player[i] >= unique_ranked[rankIndex]) {
            rankIndex--;  // Move up the leaderboard
        }
        result[i] = rankIndex + 2; // +2 because index starts from 0
    }
}

int main() {
    int ranked[] = {100, 100, 50, 40, 40, 20, 10};
    int n = sizeof(ranked) / sizeof(ranked[0]);
    int player[] = {5, 25, 50, 120};
    int m = sizeof(player) / sizeof(player[0]);
    int result[m];

    trackPlayerRanks(ranked, n, player, m, result);

    // Print results
    for (int i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }
    return 0;
}

            else{
                s++;
            }
        }
    }

}