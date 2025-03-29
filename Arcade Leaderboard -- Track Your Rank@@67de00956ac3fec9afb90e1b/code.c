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