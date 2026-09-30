#include <stdio.h>

int main() {
     //First we must the variable//
    int score;
    //then the input which is score or numeric score//
    printf("Enter your score: ");
    //the process//
    scanf("%d", &score);
    //we can use the if else logic that looks like nested if too that mr. Patalita introduce to us//
    if (score >= 90 && score <= 100) {
        //the printf's here is the output if the condition is true or yes//
        //if the score that has been type there is false it will go down to the process of else if//
        printf("Grade: A\n");
    } else if (score >= 80 && score <= 89) {
        printf("Grade: B\n");
    } else if (score >= 70 && score <= 79) {
        printf("Grade: C\n");
    } else if (score >= 60 && score <= 69) {
        printf("Grade: D\n");
    } else if (score < 60 && score >= 0) {
        printf("Grade: F\n");
        //this is the last output if you put numbers that below 0 or beyond 100//
    } else {
        printf("not valid score!,Please enter a number between 0 and 100.\n");
    }

    return 0;
}