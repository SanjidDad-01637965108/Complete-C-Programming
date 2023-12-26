// TODO: Que. ============================== Basics In One Short ==============================
/*
 * C program to print a sentence
 * C program to print an integer entered by the user
 * C program to add two integers entered by the User
 * C program to multiply two floating-point numbers
 * C program to find ASCII value of a character entered by the user
 * C program to find quotient and remainder of Two Integers
 * C program to find the size of int, float, double and char
 */

// TODO: Que. ============================== If/Else In One Short ==============================
/*
 * Check whether a number is even or odd
 * Check whether a character is a vowel or consonant
 * Find the largest number among three numbers
 * Check Whether the Entered Year is Leap Year or not
 * Check Whether a Number is Positive or Negative or Zero
 * Checker whether a character is an alphabet or not
 */

#include <stdio.h>

int main() {
    printf("Hello, Sanjid Dad.");
    printf("\n");

    // TODO: Ans. ============================== Basics In One Short ==============================
//    {
//        // Q1.Ans: C program to print a sentence
//        printf("Hello, I am a Sentence. I do nothing. \n");
//
//        // Q2.Ans: C program to print an integer entered by the user
//        int USER_ENTER_NUMBER;
//        printf("ENTER A NUMBER: \n");
//        scanf("%d", &USER_ENTER_NUMBER);
//        printf("USER ENTER NUMBER: %d \n", USER_ENTER_NUMBER);
//
//        // Q3.Ans: C program to add two integers entered by the User
//        int NUMBER_ONE;
//        int NUMBER_TWO;
//        printf("ENTER 1ST NUMBER: \n");
//        scanf("%d", &NUMBER_ONE);
//        printf("ENTER 2ND NUMBER: \n");
//        scanf("%d", &NUMBER_TWO);
//        int SUM = NUMBER_ONE + NUMBER_TWO;
//        printf("SUM OF TWO NUMBER ENTER BY USER: %d \n", SUM);
//
//        // Q4.Ans: C program to multiply two floating-point numbers
//        float NUMBER_1;
//        float NUMBER_2;
//        printf("ENTER 1ST NUMBER: \n");
//        scanf("%f", &NUMBER_1);
//        printf("ENTER 2ND NUMBER: \n");
//        scanf("%f", &NUMBER_2);
//        float MULTIPLY = NUMBER_1 * NUMBER_2;
//        printf("MULTIPLY OF TWO NUMBER ENTER BY USER: %f \n", MULTIPLY);
//
//        // Q5.Ans: C program to find ASCII value of a character entered by the user
//        fflush(stdin); // To Clear The Input Buffer.
//        char USER_ENTER_CHARACTER;
//        printf("ENTER A CHARACTER: \n");
//        USER_ENTER_CHARACTER = getchar();
//        printf("USER ENTER CHARACTER ASCII VALUE IN NUMBER: %d \n", USER_ENTER_CHARACTER);
//
//        // Q6.Ans: C program to find quotient and remainder of Two Integers
//        int NUMBER_3;
//        int NUMBER_4;
//        printf("ENTER 1ST NUMBER: \n");
//        scanf("%d", &NUMBER_3);
//        printf("ENTER 2ND NUMBER: \n");
//        scanf("%d", &NUMBER_4);
//        int REMAINDER = NUMBER_3 % NUMBER_4;
//        printf("REMAINDER OF TWO NUMBER ENTER BY USER: %d \n", REMAINDER);
//
//        // Q7.Ans: C program to find the size of int, float, double and char
//        int INT_NUMBER = 10;
//        float FLOAT_NUMBER = 10.10;
//        char CHAR_CHARACTER = 'A';
//        double DOUBLE_NUMBER = 10;
//        int INT_SIZE, FLOAT_SIZE, CHAR_SIZE, DOUBLE_SIZE;
//        INT_SIZE = sizeof(INT_NUMBER);
//        FLOAT_SIZE = sizeof(FLOAT_NUMBER);
//        CHAR_SIZE = sizeof(CHAR_CHARACTER);
//        DOUBLE_SIZE = sizeof(DOUBLE_NUMBER);
//        printf("INT: %d SIZE IN 64-BIT SYSTEM MEMORY: %d \n", INT_NUMBER, INT_SIZE);
//        printf("FLOAT: %f SIZE IN 64-BIT SYSTEM MEMORY: %d \n", FLOAT_NUMBER, FLOAT_SIZE);
//        printf("CHAR: %c SIZE IN 64-BIT SYSTEM MEMORY: %d \n", CHAR_CHARACTER, CHAR_SIZE);
//        printf("DOUBLE: %lf SIZE IN 64-BIT SYSTEM MEMORY: %d \n", DOUBLE_NUMBER, DOUBLE_SIZE);
//    }

    // TODO: Que. ============================== If/Else In One Short ==============================
//    {
//        // Q1.Ans: Check whether a number is even or odd
//        int NUMBER_1;
//        printf("ENTER A NUMBER: \n");
//        scanf("%d", &NUMBER_1);
//        if (NUMBER_1 % 2 == 0) printf("THE NUMBER USER ENTER %d IS EVEN \n", NUMBER_1);
//        else printf("THE NUMBER USER ENTER %d IS ODD \n", NUMBER_1);
//
//        // Q2.Ans: Check whether a character is a vowel or consonant
//        fflush(stdin);
//        int CHAR_1;
//        printf("ENTER A CHARACTER: \n");
//        CHAR_1 = getchar();
//        if (CHAR_1 == 65 || CHAR_1 == 69 || CHAR_1 == 73 || CHAR_1 == 79 || CHAR_1 == 85 || CHAR_1 == 97 ||
//            CHAR_1 == 101 || CHAR_1 == 105 || CHAR_1 == 111 || CHAR_1 == 117)
//            printf("THE CHARACTER USER ENTER '%c' IS VOWEL \n", CHAR_1);
//        else printf("THE CHARACTER USER ENTER '%c' IS CONSONANT \n", CHAR_1);
//
//        // Q3.Ans: Find the largest number among three numbers
//        int NUMBER_2;
//        int NUMBER_3;
//        int NUMBER_4;
//        int BIG;
//        printf("ENTER 1ST NUMBER: \n");
//        scanf("%d", &NUMBER_2);
//        printf("ENTER 2ND NUMBER: \n");
//        scanf("%d", &NUMBER_3);
//        printf("ENTER 3RD NUMBER: \n");
//        scanf("%d", &NUMBER_4);
//        if (NUMBER_2 > NUMBER_3) {
//            if (NUMBER_2 > NUMBER_4) {
//                BIG = NUMBER_2;
//                printf("THE NUMBER USER ENTER '%d' IS BIG \n", BIG);
//            } else {
//                BIG = NUMBER_4;
//                printf("THE NUMBER USER ENTER '%d' IS BIG \n", BIG);
//            }
//        } else {
//            if (NUMBER_3 > NUMBER_4) {
//                BIG = NUMBER_3;
//                printf("THE NUMBER USER ENTER '%d' IS BIG \n", BIG);
//            } else {
//                BIG = NUMBER_4;
//                printf("THE NUMBER USER ENTER '%d' IS BIG \n", BIG);
//            }
//        }
//
//        // Q4.Ans: Check Whether the Entered Year is Leap Year or not
//        int NUMBER_5;
//        printf("ENTER A YEAR: \n");
//        scanf("%d", &NUMBER_5);
//        if (NUMBER_5 % 4 == 0) printf("THE YEAR USER ENTER '%d' IS LEAP YEAR \n", NUMBER_5);
//        else printf("THE YEAR USER ENTER '%d' IS NOT LEAP YEAR \n", NUMBER_5);
//
//        // Q5.Ans: Check Whether a Number is Positive or Negative or Zero
//        int NUMBER_6;
//        printf("ENTER A NUMBER: \n");
//        scanf("%d", &NUMBER_6);
//        if (NUMBER_6 == 0) printf("THE NUMBER USER ENTER IS ZERO \n");
//        else if (NUMBER_6 > 0) printf("THE NUMBER USER ENTER IS POSITIVE \n");
//        else printf("THE NUMBER USER ENTER IS NEGATIVE \n");
//
//        // Q6.Ans: Checker whether a character is an alphabet or not
//        fflush(stdin);
//        int CHAR_2;
//        printf("ENTER A CHARACTER: \n");
//        CHAR_2 = getchar();
//        if (CHAR_2 >= 65 && CHAR_2 <= 90 || CHAR_2 >= 97 && CHAR_2 <= 122)
//            printf("THE CHARACTER '%c' USER ENTER IS ALPHABET \n", CHAR_2);
//        else printf("THE CHARACTER '%c' USER ENTER IS NOT ALPHABET \n", CHAR_2);
//    }

    return 0;
}
