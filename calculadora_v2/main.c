#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <unistd.h>

int main()
{
    //Taking characters information by region
    setlocale(LC_ALL, "English");


    //Variables values storage
    int selection;
    float valueA;
    float valueB;
    int valueC;
    int sum = 0;
    int m;
    float result = 0;


    //Void Functions
    void addition() {
        printf("Insert first value:");
        scanf("%f", &valueA);
        printf("Insert second value:");
        scanf("%f", &valueB);
        result = valueA + valueB;
        printf("The result of this operation is: %.2f\n\n", result);
        sleep(5);
        main();
    }

    void subtraction() {
        printf("Insert first value:");
        scanf("%f", &valueA);
        printf("Insert second value:");
        scanf("%f", &valueB);
        result = valueA - valueB;
        printf("The result of this operation is: %.2f\n\n", result);
        sleep(5);
        main();
    }

    void multiplication() {
        printf("Insert first value:");
        scanf("%f", &valueA);
        printf("Insert second value:");
        scanf("%f", &valueB);
        result = valueA * valueB;
        printf("The result of this operation is: %.2f\n\n", result);
        sleep(5);
        main();
    }

    void division() {
        printf("Insert first value:");
        scanf("%f", &valueA);
        printf("Insert second value:");
        scanf("%f", &valueB);
        result = valueA / valueB;
        printf("The result of this operation is: %.2f\n\n", result);
        sleep(5);
        main();
    }

    void greaterthan() {
        printf("Insert first value:");
        scanf("%f", &valueA);
        printf("Insert second value:");
        scanf("%f", &valueB);
        if(valueA > valueB) {
            printf("%.2f is greater than %.2f\n\n", valueA, valueB);
        }
        else {
            printf("%.2f isn't greater than %.2f\n\n", valueA, valueB);
        }
        sleep(5);
        main();
    }

    void lessthan() {
        printf("Insert first value:");
        scanf("%f", &valueA);
        printf("Insert second value:");
        scanf("%f", &valueB);
        if(valueA < valueB) {
            printf("%.2f is less than %.2f\n\n", valueA, valueB);
        }
        else {
            printf("%.2f isn't less than %.2f\n\n", valueA, valueB);
        }
        sleep(5);
        main();
    }

    void equalto() {
        printf("Insert first value:");
        scanf("%f", &valueA);
        printf("Insert second value:");
        scanf("%f", &valueB);
        if(valueA == valueB) {
            printf("%.2f is equal to %.2f\n\n", valueA, valueB);
        }
        else {
            printf("%.2f isn't equal to %.2f\n\n", valueA, valueB);
        }
        sleep(5);
        main();
    }

    void greaterequals() {
        printf("Insert first value:");
        scanf("%f", &valueA);
        printf("Insert second value:");
        scanf("%f", &valueB);
        if(valueA >= valueB) {
            printf("%.2f is greater or equal to %.2f\n\n", valueA, valueB);
        }
        else {
            printf("%.2f isn't greater or equal to %.2f\n\n", valueA, valueB);
        }
        sleep(5);
        main();
    }

    void lessequals() {
        printf("Insert first value:");
        scanf("%f", &valueA);
        printf("Insert second value:");
        scanf("%f", &valueB);
        if(valueA <= valueB) {
            printf("%.2f is less or equal to %.2f\n\n", valueA, valueB);
        }
        else {
            printf("%.2f isn't less or equal to %.2f\n\n", valueA, valueB);
        }
        sleep(5);
        main();
    }

    void pluspi() {
        printf("Insert the value:");
        scanf("%f", &valueA);
        result = valueA + 3.141592653;
        printf("The result of this operation is: %.2f\n\n", result);
        sleep(5);
        main();
    }

    void squareroot() {
        printf("Insert the value:");
        scanf("%f", &valueA);
        result = sqrt(valueA);
        printf("The result of this operation is: %.2f\n\n", result);
        sleep(5);
        main();
    }

    void percentage() {
        printf("Insert the percentage value:");
        scanf("%f", &valueA);
        printf("Insert the main value:");
        scanf("%f", &valueB);
        result = (valueA / valueB) * 100;
        printf("The result of this operation is: %.2f\n\n", result);
        sleep(5);
        main();
    }

    void raiseto() {
        printf("Insert the main value:");
        scanf("%f", &valueA);
        printf("Insert the raised value:");
        scanf("%f", &valueB);
        result = pow(valueA, valueB);
        printf("The result of this operation is: %.2f\n\n", result);
        sleep(5);
        main();
    }

    void sumof() {
        printf("Insert the main value:");
        scanf("%d", &valueC);
        while(valueC > 0) {
            m = valueC % 10;
            sum = sum + m;
            valueC = valueC / 10;
        }
        printf("The result of this operation is: %d\n\n", sum);
        sleep(5);
        main();
    }

    void lesspi() {
        printf("Insert the value:");
        scanf("%f", &valueA);
        result = valueA - 3.141592653;
        printf("The result of this operation is: %.2f\n\n", result);
        sleep(5);
        main();
    }

    void multiplypi() {
        printf("Insert the value:");
        scanf("%f", &valueA);
        result = valueA * 3.141592653;
        printf("The result of this operation is: %.3f\n\n", result);
        sleep(5);
        main();
    }


    //Program Introduction
    printf("Calculator PRO - V2.1 by João Pedro do Carmo R\n");
    printf("---------------------------------------------\n\n");
    sleep(2);

    printf("Select the operation you want to do:\n");
    printf("Addition - Press 1              |Subtraction -Press 2\n");
    printf("Multiplication - Press 3        |Division - Press 4\n");
    printf("Is greater than - Press 5       |Is less than - Press 6\n");
    printf("Is equal to - Press 7           |Is greater than or equals - Press 8\n");
    printf("Is less than or equal - Press 9 |Plus Pi Value 3.141592653 - Press 10\n");
    printf("Square Root of - Press 11       |Percentage - Press 12\n");
    printf("Raise to - Press 13             |Sum of - Press 14\n");
    printf("Less Pi Value 3.141592653 - Press 15 |Multiplied by Pi Value 3.141592653 - Press 16\n\n");
    printf("---------------------------------------------\n\n");


    //Taking User Option Selection
    printf("What operation do you wanna do?");
    scanf("%d", &selection);
    //Testing the User's option
    switch(selection) {
        case 1:
            addition();
        case 2:
            subtraction();
        case 3:
            multiplication();
        case 4:
            division();
        case 5:
            greaterthan();
        case 6:
            lessthan();
        case 7:
            equalto();
        case 8:
            greaterequals();
        case 9:
            lessequals();
        case 10:
            pluspi();
        case 11:
            squareroot();
        case 12:
            percentage();
        case 13:
            raiseto();
        case 14:
            sumof();
        case 15:
            lesspi();
        case 16:
            multiplypi();
        }
        return 0;
}
