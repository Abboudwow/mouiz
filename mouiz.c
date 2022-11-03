#include <stdio.h>
#include <time.h> 
#include <unistd.h>
#include <stdlib.h>
#include<windows.h>
 
void main(){
    /*I made some experments to see the range of the letters

    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char smallLetters[] = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < strlen(letters); i++){
        printf("%i\n", letters[i]);
    }

    for(int i = 0; i < strlen(smallLetters); i++){
        printf("%i\n", smallLetters[i]);
    }*/
    
    char targetUserName[] = "mouiz"; 
    char userName[10];
    int userNameLower[10];
    printf("Please enter your username in W3Schools: ");
    scanf("%s", &userName);

    // the code below is to convert the user input to lower case
    for(int i = 0; i < strlen(userName); i++){
        userNameLower[i] = userName[i] + 32;
        if(userNameLower[i] >= 65 && userNameLower[i] <= 122){
           userName[i] = userNameLower[i];
        } else {
            continue;
        }
    }

    int userNameCheckTest;
    for(int i = 0; i < strlen(userName) && i < strlen(targetUserName); i++){
        userNameCheckTest = userName[i] == targetUserName[i];
        if(userNameCheckTest == 0){
            break;
        }
    }
    
    if(userNameCheckTest == 1){
        userName[0] = 'M';
        printf("Hello %s!\n", userName);
        sleep(1.5);
        printf("I hope you are fine and doing well\n");
        sleep(2 );
        printf("Thanks for being around, we are best friends and more than that\n");
        sleep(3 );
        printf("XD\n");
        sleep(1);
        printf("I don't know what's more than that, XD * LOL = undefined\n");
        sleep(2);
        printf("Anyway let's keep it up and if one of us got down in the race\n");
        sleep(3);
        printf("The other one should finish the race and come back to pick up him\n");
        sleep(3.2);
        printf("Because if he stops to pick up him while the race is on both will lose :)\n");
        sleep(3.4);
        printf("So we should be strong and support each other in spite of all the difficulties\n");
        sleep(2);
        printf("But we shouldn't lose the race as well\n");
        sleep(3.6);
        printf("I am glad to have a friend like you\n");
        sleep(1.5);
        printf("I hope you liked this :), and hope you the best\n");
    } else {
        printf("Sorry :( you aren't Mouiz");
    }

}

