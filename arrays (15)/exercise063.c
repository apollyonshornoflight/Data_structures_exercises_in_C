#include <stdio.h>

int main(){

    int vote_count[5] =  {0};
    int n, most_voted_num = 0, vote;

    //Input
    printf("How many voters there are in this election?: ");
    scanf("%d", &n);
    if (n <= 0) {printf("Invalid number, please insert a number greater than 0 next time.\n"); return 1;}

    int votes[n];

    int temp_vote;
    printf("VOTATION:\n");
    for (int i = 0; i < n; i++) {printf("Please type your vote, voter %d: ", i);
        scanf("%d", &temp_vote);
        if (temp_vote > 5 || temp_vote < 1) {printf("Non existent Candidate, please try again..\n"); i-=1;}
        else votes[i] = temp_vote;
        printf("\n");
    }


    //Processing
    for (int i = 0; i < n; i++) {
        vote = votes[i] - 1;
        vote_count[vote]++;
        if (vote_count[vote] > most_voted_num) most_voted_num = vote_count[vote];
    }

    //Output
    int count = 0;
    for (int i = 0; i < 5; i++) { //Printing each vote count and defining the biggest vote count
        if (vote_count[i] == most_voted_num) count++;
        printf("Candidate %d: %d votes\n", i+1, vote_count[i]);
    }

    printf("Winner Candidate: ");
    if (count > 1) { //when there is more than 1 winner (draw)
        for (int i = 0; i < 5; i++)
        {
            if (vote_count[i] == most_voted_num && count > 2) {printf("Candidate %d, ", i+1); count -= 1;}
            else if (vote_count[i] == most_voted_num && count == 2) {printf("Candidate %d and ", i+1); count -= 1;}
            else if (vote_count[i] == most_voted_num && count == 1) {printf("Candidate %d (Draw)\n", i+1); break;}
        }
    }

    else { 
        for (int i = 0; i < 5; i++) if (vote_count[i] == most_voted_num) {printf("Candidate %d\n", i+1); break;}
    }


    return 0;
}

/**
 * 63. In a certain election, there are 5 candidates identified by the values
 *     1, 2, ..., 5. An election can be represented as an array where
 *     each position indicates a voter and the content of that position is their
 *     vote. For example, the sequence (1, 2, 1, 2, 3, 5) indicates
 *     the existence of six voters, with candidates 1 and 2 getting two votes each
 *     and candidates 3 and 5 getting one vote each. Build a program
 *     that reads the votes of n voters, indicates how many votes each candidate
 *     received, and which candidate obtained the highest number of votes.
 */