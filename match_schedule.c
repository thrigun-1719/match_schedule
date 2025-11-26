#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_LEN 50

// Global arrays (NO STRUCTS)
int matchID[MAX];
char team1[MAX][MAX_LEN];
char team2[MAX][MAX_LEN];
char date[MAX][MAX_LEN];
char timeMatch[MAX][MAX_LEN];
char venue[MAX][MAX_LEN];

int count = 0;

// Function declarations
void addMatch();
void viewMatches();
void searchMatch();
void updateMatch();
void deleteMatch();
int idExists(int id);

// ---------------- MAIN MENU ----------------
int main() {
    int choice;

    do {
        printf("\n==============================\n");
        printf("    MATCH SCHEDULING SYSTEM   \n");
        printf("==============================\n");
        printf("1. Add Match\n");
        printf("2. View All Matches\n");
        printf("3. Search Match\n");
        printf("4. Update Match\n");
        printf("5. Delete Match\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: addMatch(); break;
            case 2: viewMatches(); break;
            case 3: searchMatch(); break;
            case 4: updateMatch(); break;
            case 5: deleteMatch(); break;
            case 6: printf("Exiting. Goodbye!\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}

// ---------------- ADD MATCH ----------------
void addMatch() {
    int id;

    if (count >= MAX) {
        printf("Storage full! Cannot add more matches.\n");
        return;
    }

    printf("\nEnter Match ID: ");
    scanf("%d", &id);
    getchar();

    if (idExists(id)) {
        printf("Match ID already exists!\n");
        return;
    }

    matchID[count] = id;

    printf("Enter Team 1: ");
    fgets(team1[count], MAX_LEN, stdin);
    team1[count][strcspn(team1[count], "\n")] = 0;

    printf("Enter Team 2: ");
    fgets(team2[count], MAX_LEN, stdin);
    team2[count][strcspn(team2[count], "\n")] = 0;

    printf("Enter Date (DD/MM/YYYY): ");
    fgets(date[count], MAX_LEN, stdin);
    date[count][strcspn(date[count], "\n")] = 0;

    printf("Enter Time (HH:MM): ");
    fgets(timeMatch[count], MAX_LEN, stdin);
    timeMatch[count][strcspn(timeMatch[count], "\n")] = 0;

    printf("Enter Venue: ");
    fgets(venue[count], MAX_LEN, stdin);
    venue[count][strcspn(venue[count], "\n")] = 0;

    count++;

    printf("Match added successfully!\n");
}

// ---------------- CHECK ID EXISTS ----------------
int idExists(int id) {
    for (int i = 0; i < count; i++) {
        if (matchID[i] == id)
            return 1;
    }
    return 0;
}

// ---------------- VIEW MATCHES ----------------
void viewMatches() {
    if (count == 0) {
        printf("No match records available.\n");
        return;
    }

    printf("\n%-10s %-15s %-15s %-12s %-10s %-20s\n",
           "ID", "Team 1", "Team 2", "Date", "Time", "Venue");
    printf("--------------------------------------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%-10d %-15s %-15s %-12s %-10s %-20s\n",
            matchID[i], team1[i], team2[i], date[i], timeMatch[i], venue[i]);
    }
}

// ---------------- SEARCH MATCH ----------------
void searchMatch() {
    int id, found = -1;

    printf("\nEnter Match ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (matchID[i] == id) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("No match found with ID %d.\n", id);
        return;
    }

    printf("\nMatch Found:\n");
    printf("Match ID : %d\n", matchID[found]);
    printf("Team 1   : %s\n", team1[found]);
    printf("Team 2   : %s\n", team2[found]);
    printf("Date     : %s\n", date[found]);
    printf("Time     : %s\n", timeMatch[found]);
    printf("Venue    : %s\n", venue[found]);
}

// ---------------- UPDATE MATCH ----------------
void updateMatch() {
    int id, index = -1;

    printf("\nEnter Match ID to update: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (matchID[i] == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Match ID not found.\n");
        return;
    }

    printf("Enter new Date (DD/MM/YYYY): ");
    fgets(date[index], MAX_LEN, stdin);
    date[index][strcspn(date[index], "\n")] = 0;

    printf("Enter new Time (HH:MM): ");
    fgets(timeMatch[index], MAX_LEN, stdin);
    timeMatch[index][strcspn(timeMatch[index], "\n")] = 0;

    printf("Enter new Venue: ");
    fgets(venue[index], MAX_LEN, stdin);
    venue[index][strcspn(venue[index], "\n")] = 0;

    printf("Match updated successfully!\n");
}

// ---------------- DELETE MATCH ----------------
void deleteMatch() {
    int id, index = -1;

    printf("\nEnter Match ID to delete: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (matchID[i] == id) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        printf("Match not found.\n");
        return;
    }

    // Shift left
    for (int i = index; i < count - 1; i++) {
        matchID[i] = matchID[i + 1];
        strcpy(team1[i], team1[i + 1]);
        strcpy(team2[i], team2[i + 1]);
        strcpy(date[i], date[i + 1]);
        strcpy(timeMatch[i], timeMatch[i + 1]);
        strcpy(venue[i], venue[i + 1]);
    }

    count--;
    printf("Match deleted successfully!\n");
}
