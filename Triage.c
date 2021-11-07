#include <stdio.h>
#include "Triage.h"

//this code describes the behaviour of the first thing you see when you open the application!
//the user will be triaged by answering a series of survey questions that will direct them to resources
//accordingly




int main() {
    int moodRating, YesorNo, count = 0;

    // while loop to get initial survey input -- rating of the user's day
    //this rating will determine which resources are recommended the user today
    printf("Hey There!\nHow are you feeling today?\n");

    moodRating = getMoodRating();


    if (moodRating == 5 || moodRating == 4) { //if you're having an exceptional day, you will be guided to document it!

        goodMood();

    } else if (moodRating == 3 || moodRating == 2 || moodRating == 1) {
        count = notSoGoodMood(moodRating);
        resourcesAndCare(count, YesorNo);

    }}