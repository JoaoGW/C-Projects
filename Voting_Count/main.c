#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

int main()
{
    //Taking characters information
    setlocale(LC_ALL, "English");

    //Storing Variables Values
    int candidate1 = 0; //Total Votes for Candidate A
    int candidate2 = 0; //Total Votes for Candidate B
    int candidate3 = 0; //Total Votes for Candidate C
    int blankvote = 0; //A protest vote
    int totalvotes = 0; //Total Votes including all the candidates
    int vote; //Which candidate has the voter choose
    int votersforsection; //Total Voters for this Section
    char voterName [10]; //First Name of the Voter


    printf("Voting System V1.1 - by João Pedro do Carmo R.\n");
    printf("---------------------------------------------\n\n");
    sleep(2);


    //Ask operator how many people will vote in this section
    printf("Operator, how many people will be in this session?");
    scanf("%d", &votersforsection);


    do {
        //Showing the Candidates
        printf("Candidate A - Press 19\n");
        printf("Candidate B - Press 71\n");
        printf("Candidate C - Press 45\n");
        printf("Blank Vote - Press 99\n\n");

        //Taking Voter First Name
        printf("Enter the First Name of the Next Voter: ");
        scanf("%s", voterName);

        //In Case of User's mistake
        tryagain:
        //Taking Voter's vote
        printf("What is your vote, %s? ", voterName);
        scanf("%d", &vote);

        //Checking which one was choosen
        if(vote == 19) {
            candidate1 = candidate1 + 1;
            totalvotes += 1;
            printf("Computed Vote! Thank You\n\n");
        }
        else if(vote == 71) {
            candidate2 = candidate2 + 1;
            totalvotes += 1;
            printf("Computed Vote! Thank You\n\n");
        }
        else if(vote == 45) {
            candidate3 = candidate3 + 1;
            totalvotes += 1;
            printf("Computed Vote! Thank You\n\n");
        }
        else if(vote == 99) {
            blankvote = blankvote + 1;
            totalvotes += 1;
            printf("Computed Vote! Thank You\n\n");
        }
        else {
            printf("Invalid Option, Try Again\n\n");
            goto tryagain;
        }
    }while (totalvotes < votersforsection);


    //When Finished all Voting
    if (totalvotes == votersforsection) {
        printf("Voting Closed\n");
        printf("Calculating the results, wait a second...\n\n");
        sleep(2);
        printf("Total of Voters for this section was %d voters\n", totalvotes);
        printf("Candidate A has %d vote(s)\n", candidate1);
        printf("Candidate B has %d vote(s)\n", candidate2);
        printf("Candidate C has %d vote(s)\n", candidate3);
        printf("Total of blank votes: %d\n\n", blankvote);
        if (candidate1 > candidate3 && candidate1 > candidate2) {
            printf("Candidate A has Won!\n\n");
        }
        else if (candidate2 > candidate1 && candidate2 > candidate3) {
            printf("Candidate B has Won!\n\n");
        }
        else if (candidate3 > candidate1 && candidate3 > candidate2) {
            printf("Candidate C has Won!\n\n");
        }
        else {
            printf("Some error ocurred, you will need to check manually who have won!\n\n");
        }
    }
    return 0;
}
