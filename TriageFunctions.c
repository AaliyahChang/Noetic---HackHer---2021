#include "Triage.h"
#include <stdio.h>
#include <unistd.h>
#include <process.h>
#include <stdlib.h>

int getMoodRating (void){
    int moodRating, x = 1 ;
    while (x == 1) {
        printf("Rate your mood from 1 :( to 5 :D");
        scanf("%d", &moodRating);
        if (1 <= moodRating && moodRating <= 5) x = 0;
        else printf("Please enter a valid rating.\n\n");
    }
    return moodRating;}

    int goodMood (void) {
        printf("I'm glad you're having a good day!!\nTell me about it!\n");
        sleep(1);
        printf("Go Ahead... \t Tell me why your day was so great!\n");
        //here... we would be using the GOOGLE CLOUD TEXT TO SPEECH
};

int notSoGoodMood (int moodRating){
    printf("I'm sorry to hear your day wasn't great...\n");
    sleep(1);
    printf("What are your struggling with?\n");
    printf("For the following questions, input ""1"" for yes and ""0"" for no.\n\n");
    sleep(1);

    int x = 0, YesorNo, count;
    switch (moodRating) {
        case 1:
            count = 3;
            break;
        case 2:
            count = 2;
            break;
        case 3:
            count = 1;
            break;
    }

    while (x == 0) {
        printf("Are you feeling overwhelmed?");
        scanf("%d", &YesorNo);
        if (YesorNo != 1 && YesorNo != 0) printf("please input either ""1"" for yes and ""0"" for no\n\n");

        else if (YesorNo == 1) {
            count += 3;
            x = 1;
        } else if (YesorNo == 0) {
            x = 1;
        }
    }
    sleep(1);
    x = 0;

    while (x == 0) {
        printf("Are you feeling stressed?");
        scanf("%d", &YesorNo);
        if (YesorNo != 1 && YesorNo != 0) printf("please input either ""1"" for yes and ""0"" for no.\n\n");
        else if (YesorNo == 1) {
            count += 2;
            x = 1;
        } else if (YesorNo == 0) {
            x = 1;
        }
    }
    sleep(1);
    x = 0;
    while (x == 0) {
        printf("Are you feeling lonely?");
        scanf("%d", &YesorNo);
        if (YesorNo != 1 && YesorNo != 0) printf("please input either ""1"" for yes and ""0"" for no.\n\n");
        else if (YesorNo == 1) {
            count += 1;
            x = 1;
        } else if (YesorNo == 0) {
            x = 1;
        }
    }
    sleep(1);
    x = 0;
    while (x == 0) {
        printf("Are you feeling anxious?");
        scanf("%d", &YesorNo);
        if (YesorNo != 1 && YesorNo != 0) printf("please input either ""1"" for yes and ""0"" for no.\n\n");
        else if (YesorNo == 1) {
            count += 2;
            x = 1;
        } else if (YesorNo == 0) {
            x = 1;
        }
    }
    sleep(1);
    x = 0;
    while (x == 0) {
        printf("Are you feeling tired?");
        scanf("%d", &YesorNo);
        if (YesorNo != 1 && YesorNo != 0) printf("please input either ""1"" for yes and ""0"" for no.\n");
        else if (YesorNo == 1) {
            count += 1;
            x = 1;
        } else if (YesorNo == 0) {
            x = 1;
        }
    }
    sleep(1);
    return count;
};

void Default (void){
    printf("Ok, would you like to try...\n");
    sleep (1);
    int selfCareChoice;
    printf("1) Guided Meditation?\n");
    sleep(1);
    printf("2) Breathing Exercises?\n");
    sleep(1);
    printf("3) Calming Music?\n");
    sleep(1);
    printf("4) Calling a friend?\n");

    scanf("%d",selfCareChoice);

    switch (selfCareChoice) {
        case 1:
            printf("Try this video: ");
            break;
        case 2:
            printf ("Try these three!");
            breathing();
            break;
        case 3:
            printf("Try this playlist: //YOUTUBE PLAYLIST LINK//");
            break;
        case 4:
        printf("Try calling Mom!");
    }
}

void breathing(){

        system("cls");

        printf("Welcome to guided breathing!\n\n");
        printf("Intentional breathing has been scientifically proven to decrease stress levels,\nlower your heart rate, and reduce depression. Among many others benefits.\n");
        printf("By completing one of the following breathing techniques you are taking control\nof your health - mental and physical.\n");
        printf("\nPlease choose one of the following breathing methods by inputting \nthe corresponding number when prompted.\n");
        printf("\n------------------------(1) Breathing to Focus Technique------------------------\n\n");
        printf("This technique allows you remove distracting thoughts from your mind - calming\nthe body allowing for deep focus.\n");
        printf("If your stress or anxiety is getting in the way of your productivity or to\nground mind and body try this exercise.\n");
        printf("\n-----------------------------(2) Humming Bee Breath-----------------------------\n\n");
        printf("This technique instantly calms the mind, releasing tension in the forehead.\n");
        printf("Feeling yourself start to spiral? Feeling overwhlemed? Feeling a tension headache coming?\nTry this breathing exercise!\n");
        printf("\n------------------------(3) Alternate Nostril Breathing------------------------\n\n");
        printf("This technique lowers heart rate and enhances cardiovascular function.\n");
        printf("If you are feeling nervous or worried try this exercise to slow down and reflect.\n");
        printf("\n-------------------------------------------------------------------------------\n");
        int c;
        printf("Please input your breathing technique choice:");
        scanf("%d", &c);
        switch (c) {
            case 1:
                printf("Let's begin your Breathing to Focus practice!\n\n"); sleep(1);
                printf("Sit or lye down in a comfortable place\n"); sleep(4);
                printf("Bring your awareness to your breaths without trying to change how you are breathing.\n"); sleep(4);
                printf("Alternate between normal and deep breaths a few times.\n"); sleep(2);
                printf("Notice any differences between normal breathing and deep breathing.\n"); sleep(2);
                printf("Notice how your abdomen expands with deep inhalations.\n"); sleep(8);
                printf("Note how shallow breathing feels compared to deep breathing.\n"); sleep(3);
                printf("Practice your deep breathing for a few minutes.\nYou will be prompted when your time is up.\n"); sleep(90);
                printf("Place one hand below your belly button, keeping your belly relaxed\nand notice how it rises with each inhale and falls with each exhale.\n"); sleep(10);
                printf("Let out a loud sigh with each exhale.\n"); sleep(5);
                printf("Begin the practice of breath focus by combining this deep breathing with imagery\nand a focus word or phrase that will support relaxation.\n"); sleep(10);
                printf("You can imagine that the air you inhale brings waves of peace and calm throughout your body.\nMentally say, Inhaling peace and calm.\n"); sleep(15);
                printf("Imagine that the air you exhale washes away tension and anxiety.\nYou can say to yourself, Exhaling tension and anxiety.\n"); sleep(10);
                break;

            case 2:
                printf("Let's begin your Humming Bee Breath practice!\n\n"); sleep(1);
                printf("Choose a comfortable seated position.\n"); sleep(3);
                printf("Let all the muscles in your face fall.\n"); sleep(3);
                printf("Place your first fingers on the tragus cartilage (innner part of your ear) that partially covers your ear canal.\n"); sleep(4);
                for (int i=0; i<2; i++) {
                    printf("Inhale, and as you exhale gently press your fingers into the cartilage.\n"); sleep(4);
                    printf("Keeping your mouth closed, make a loud humming sound.\n\n"); sleep(6);
                }
                for (int i=0; i<3; i++) {
                    printf("Inhale.\n");
                    sleep(3);
                    printf("Exhale.\n");
                    sleep(3);
                }
                break;

            case 3:
                printf("Let's begin your Alternate Nostril Breathing practice!\n"); sleep(3);
                printf("Choose a comfortable seated position.\n"); sleep(6);
                printf("Lift up your right hand toward your nose, pressing your pointer, index and ring finger\ndown toward your palm and leaving your pinky and thumb extended.\n"); sleep (20);
                printf("After an exhale, use your right thumb to gently close your right nostril.\n"); sleep(6);
                printf("Inhale through your left nostril and then close your left nostril with your right pinky.\n"); sleep(6);
                printf("Release your thumb and exhale out through your right nostril.\n"); sleep(6);
                printf("Inhale through your right nostril and then close this nostril.\n"); sleep(6);
                printf("Release your fingers to open your left nostril and exhale through this side.\n\n"); sleep(6);
                for (int i=0; i<4; i++) {
                    printf("Inhale.\n");
                    sleep(3);
                    printf("Exhale.\n");
                    sleep(3);
                }
                break;
            default:
                printf("Sorry that is not a valid breathing technique. Please input 1, 2, or 3.\n");
        }
        printf("Take 10 seconds to set an intention for the day to end your practice.\n"); sleep(10);
        printf("======================================== CONGRATS! ========================================\n\n");
        printf("You have completed your breathing exercise. Thank you for taking the time to slow down.\n");

}

//this function provides resources and self-care suggestions based on how you scored your mood
void resourcesAndCare(int count, int YesorNo){
    switch (count) {
        case 12:
            printf("Would you like to talk to someone about this?\n");
            scanf("%d", &YesorNo);
            sleep(1);
            switch (YesorNo) {
                case 1:
                    printf("Here are some helpful resources:\n"
                           "Kids Help Phone\n"
                           "\n"
                           "Text Services: Text \"CONNECT\" to 686868 (also serving adults)\n"
                           "Chat Services: https://kidshelpphone.ca/live-chat/\n"
                           "\n"
                           "Youthspace.ca (NEED2 Suicide Prevention, Education and Support)\n"
                           "\n"
                           "Youth Text (6pm-12am PT): (778) 783-0177\n"
                           "\n"
                           "Youth Chat (6pm-12am PT): www.youthspace.ca\n"
                           "\n"
                           "Crisis Services Canada\n"
                           "\n"
                           "Toll Free (24/7): 1 (833) 456-4566\n"
                           "\n"
                           "Text support (4pm-12am ET daily): 45645\n"
                           "\n"
                           "Canadian Crisis Hotline\n"
                           "\n"
                           "1 (888) 353-2273");
                    break;
                default:
                    printf("Ok, here is a breathing exercise for you to try:");
                    breathing();
                    break;

            }
            break;
        case 11:
            printf("Would you like to talk to someone about this?\n");
            scanf("%d", &YesorNo);
            sleep(1);
            switch (YesorNo) {
                case 1:
                    printf("Here are some helpful resources:\n"
                           "Kids Help Phone\n"
                           "\n"
                           "Text Services: Text \"CONNECT\" to 686868 (also serving adults)\n"
                           "Chat Services: https://kidshelpphone.ca/live-chat/\n"
                           "\n"
                           "Youthspace.ca (NEED2 Suicide Prevention, Education and Support)\n"
                           "\n"
                           "Youth Text (6pm-12am PT): (778) 783-0177\n"
                           "\n"
                           "Youth Chat (6pm-12am PT): www.youthspace.ca\n"
                           "\n"
                           "Crisis Services Canada\n"
                           "\n"
                           "Toll Free (24/7): 1 (833) 456-4566\n"
                           "\n"
                           "Text support (4pm-12am ET daily): 45645\n"
                           "\n"
                           "Canadian Crisis Hotline\n"
                           "\n"
                           "1 (888) 353-2273");
                    break;
                default:
                    printf("Ok, here is a breathing exercise for you to try:");
                    breathing();
            }
            break;
        case 10:
            printf("Would you like to talk to someone about this?\n");
            scanf("%d", &YesorNo);
            sleep(1);
            switch (YesorNo) {
                case 1:
                    printf("Here are some helpful resources:\n"
                           "Kids Help Phone\n"
                           "\n"
                           "Text Services: Text \"CONNECT\" to 686868 (also serving adults)\n"
                           "Chat Services: https://kidshelpphone.ca/live-chat/\n"
                           "\n"
                           "Youthspace.ca (NEED2 Suicide Prevention, Education and Support)\n"
                           "\n"
                           "Youth Text (6pm-12am PT): (778) 783-0177\n"
                           "\n"
                           "Youth Chat (6pm-12am PT): www.youthspace.ca\n"
                           "\n"
                           "Crisis Services Canada\n"
                           "\n"
                           "Toll Free (24/7): 1 (833) 456-4566\n"
                           "\n"
                           "Text support (4pm-12am ET daily): 45645\n"
                           "\n"
                           "Canadian Crisis Hotline\n"
                           "\n"
                           "1 (888) 353-2273");
                    break;
                default:
                    printf("Ok, here is a breathing exercise for you to try:");
                    breathing();
            }
            break;

        case 9:
            printf("Would you like to talk to someone about this?\n");
            scanf("%d", &YesorNo);
            sleep(1);
            switch (YesorNo) {
                case 1:
                    printf("Here are some helpful resources:\n"
                           "Kids Help Phone\n"
                           "\n"
                           "Text Services: Text \"CONNECT\" to 686868 (also serving adults)\n"
                           "Chat Services: https://kidshelpphone.ca/live-chat/\n"
                           "\n"
                           "Youthspace.ca (NEED2 Suicide Prevention, Education and Support)\n"
                           "\n"
                           "Youth Text (6pm-12am PT): (778) 783-0177\n"
                           "\n"
                           "Youth Chat (6pm-12am PT): www.youthspace.ca\n"
                           "\n"
                           "Crisis Services Canada\n"
                           "\n"
                           "Toll Free (24/7): 1 (833) 456-4566\n"
                           "\n"
                           "Text support (4pm-12am ET daily): 45645\n"
                           "\n"
                           "Canadian Crisis Hotline\n"
                           "\n"
                           "1 (888) 353-2273");
                    break;
                default:
                    printf("Ok, let's try some journaling:");
                    break;
            }
            break;
        case 8:
            printf("Would you like to talk to someone about this?\n");
            scanf("%d", &YesorNo);
            sleep(1);
            switch (YesorNo) {
                case 1:
                    printf("Here are some helpful resources:\n"
                           "Kids Help Phone\n"
                           "\n"
                           "Text Services: Text \"CONNECT\" to 686868 (also serving adults)\n"
                           "Chat Services: https://kidshelpphone.ca/live-chat/\n"
                           "\n"
                           "Youthspace.ca (NEED2 Suicide Prevention, Education and Support)\n"
                           "\n"
                           "Youth Text (6pm-12am PT): (778) 783-0177\n"
                           "\n"
                           "Youth Chat (6pm-12am PT): www.youthspace.ca\n"
                           "\n"
                           "Crisis Services Canada\n"
                           "\n"
                           "Toll Free (24/7): 1 (833) 456-4566\n"
                           "\n"
                           "Text support (4pm-12am ET daily): 45645\n"
                           "\n"
                           "Canadian Crisis Hotline\n"
                           "\n"
                           "1 (888) 353-2273");
                    break;
                default:
                    printf("Ok, let's try some journaling:");
                    break;
            }
            break;
        case 7:
            printf("Would you like to talk to someone about this?\n");
            scanf("%d", &YesorNo);
            sleep(1);
            switch (YesorNo) {
                case 1:
                    printf("Here are some helpful resources:\n"
                           "Kids Help Phone\n"
                           "\n"
                           "Text Services: Text \"CONNECT\" to 686868 (also serving adults)\n"
                           "Chat Services: https://kidshelpphone.ca/live-chat/\n"
                           "\n"
                           "Youthspace.ca (NEED2 Suicide Prevention, Education and Support)\n"
                           "\n"
                           "Youth Text (6pm-12am PT): (778) 783-0177\n"
                           "\n"
                           "Youth Chat (6pm-12am PT): www.youthspace.ca\n"
                           "\n"
                           "Crisis Services Canada\n"
                           "\n"
                           "Toll Free (24/7): 1 (833) 456-4566\n"
                           "\n"
                           "Text support (4pm-12am ET daily): 45645\n"
                           "\n"
                           "Canadian Crisis Hotline\n"
                           "\n"
                           "1 (888) 353-2273");
                    break;
                default:
                    printf("Ok, let's try some guided meditation:");
                    //printf list of videos from youtube
                    break;
            }
            break;
        case 6:
            printf("Would you like to talk to someone about this?\n");
            scanf("%d", &YesorNo);
            sleep(1);
            switch (YesorNo) {
                case 1:
                    printf("Here are some helpful resources:\n"
                           "Kids Help Phone\n"
                           "\n"
                           "Text Services: Text \"CONNECT\" to 686868 (also serving adults)\n"
                           "Chat Services: https://kidshelpphone.ca/live-chat/\n"
                           "\n"
                           "Youthspace.ca (NEED2 Suicide Prevention, Education and Support)\n"
                           "\n"
                           "Youth Text (6pm-12am PT): (778) 783-0177\n"
                           "\n"
                           "Youth Chat (6pm-12am PT): www.youthspace.ca\n"
                           "\n"
                           "Crisis Services Canada\n"
                           "\n"
                           "Toll Free (24/7): 1 (833) 456-4566\n"
                           "\n"
                           "Text support (4pm-12am ET daily): 45645\n"
                           "\n"
                           "Canadian Crisis Hotline\n"
                           "\n"
                           "1 (888) 353-2273");
                    break;
                default:
                    printf("Ok, let's try some guided meditation:");
                    //printf list of videos from youtube
                    break;
            }
            break;
        default:
            Default();
            break;
    }}