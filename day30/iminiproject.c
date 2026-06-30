#include <stdio.h>
#include <string.h>

#define MAX 10

char candidate[MAX][50];
int votes[MAX];
int totalCandidates;

// Function to add candidates
void addCandidates()
{
    int i;

    printf("Enter number of candidates: ");
    scanf("%d", &totalCandidates);

    for(i = 0; i < totalCandidates; i++)
    {
        printf("Enter Candidate %d Name: ", i + 1);
        scanf("%s", candidate[i]);
        votes[i] = 0;
    }
}

// Function to display candidates
void displayCandidates()
{
    int i;

    printf("\n------ Candidate List ------\n");
    for(i = 0; i < totalCandidates; i++)
    {
        printf("%d. %s\n", i + 1, candidate[i]);
    }
}

// Function to cast vote
void castVote()
{
    int choice;

    displayCandidates();

    printf("Enter Candidate Number to Vote: ");
    scanf("%d", &choice);

    if(choice >= 1 && choice <= totalCandidates)
    {
        votes[choice - 1]++;
        printf("Vote Cast Successfully!\n");
    }
    else
    {
        printf("Invalid Candidate Number!\n");
    }
}

// Function to display results
void displayResults()
{
    int i;

    printf("\n------ Voting Results ------\n");

    for(i = 0; i < totalCandidates; i++)
    {
        printf("%s : %d Votes\n", candidate[i], votes[i]);
    }
}

// Function to declare winner
void declareWinner()
{
    int i, max = votes[0], winner = 0;

    for(i = 1; i < totalCandidates; i++)
    {
        if(votes[i] > max)
        {
            max = votes[i];
            winner = i;
        }
    }

    printf("\nWinner is: %s\n", candidate[winner]);
    printf("Total Votes: %d\n", max);
}

// Main Function
int main()
{
    int choice;

    addCandidates();

    do
    {
        printf("\n========== ONLINE VOTING SYSTEM ==========\n");
        printf("1. Display Candidates\n");
        printf("2. Cast Vote\n");
        printf("3. Display Results\n");
        printf("4. Declare Winner\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayCandidates();
                break;

            case 2:
                castVote();
                break;

            case 3:
                displayResults();
                break;

            case 4:
                displayResults();
                declareWinner();
                break;

            case 5:
                printf("Thank You for Using Online Voting System.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}