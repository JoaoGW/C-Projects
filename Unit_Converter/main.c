#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main()
{
    //Taking characters information by region
    setlocale(LC_ALL, "English");

    //Store the Variables values
    float valueA;
    float result;
    int selection;

    //Program Inicialization
    printf("Unit Converter V1.1 - by João Pedro do Carmo R\n");
    printf("-------------------------------------------------------------------------\n\n");
    sleep(2);

    //Show the Options to the User
    printf("Select the Conversion you wanna make:\n");
    printf("Meters to Feets - Press 1                |Inches to Centimeters - Press 2\n");
    printf("Miles to Kilometers - Press 3            |Centimeters to Inches - Press 4\n");
    printf("Fahrenheit to Celsius - Press 5          |Celsius to Fahrenheit - Press 6\n");
    printf("Celsius to Kelvin - Press 7              |Fahrenheit to Kelvin - Press 8\n");
    printf("Kilograms to Pounds - Press 9            |Ounce to Grams - Press 10\n");
    printf("Pounds to Kilograms - Press 11           |Grams to Ounce - Press 12\n");
    printf("Feets to Meters - Press 13               |Miles p.h to Kilometers p.h - Press 14\n");
    printf("Cup to  Millimeters - Press 15           |Millimeters to Cubic Meters - Press 16\n");
    printf("Millimeters to Cup - Press 17            |Gallon to Liters - Press 18\n");
    printf("Liters to Gallon - Press 19              |Cubic Meters to Cubic feats - Press 20\n");
    printf("Cubic Feats in Cubic Meters - Press 21   |Atmosphere to Kilopascal - Press 22\n");
    printf("Pounds per Square to Millibar - Press 23 |Kilopascal to Atmosphere - Press 24\n");
    printf("Torr to Pascal - Press 25                |Centimeters to Meters - Press 26\n");
    printf("Meters to Centimeters - Press 27         |Kilometers p.h to Miles p.h - Press 28\n");
    printf("Exit Program - Press 100\n");
    printf("--------------------------------------------------------------------------------\n\n");
    sleep(2);


    //Check which option has been selected
    printf("Which conversion do you want to do?");
    scanf("%d", &selection);


    //Testing the User's Option and Showing the Result
    switch(selection) {
        case 1:
            //Meters to Feets
            printf("Insert meters: ");
            scanf("%f", &valueA);
            result = valueA * 3.281;
            printf("%.3f meters in feets is %.3f ft\n\n", valueA, result);
            sleep(5);
            main();
        case 2:
            //Inches to Centimeters
            printf("Insert inches: ");
            scanf("%f", &valueA);
            result = valueA * 2.54;
            printf("%.3f inches in centimeters is %.3f cm\n\n", valueA, result);
            sleep(5);
            main();
        case 3:
            //Miles to Kilometers
            printf("Insert miles: ");
            scanf("%f", &valueA);
            result = valueA * 1.609;
            printf("%.3f miles in kilometers is %.3f km\n\n", valueA, result);
            sleep(5);
            main();
        case 4:
            //Centimeters to Inches
            printf("Insert centimeters: ");
            scanf("%f", &valueA);
            result = valueA / 2.54;
            printf("%.3f centimeters in inches is %.3f in\n\n", valueA, result);
            sleep(5);
            main();
        case 5:
            //Fahrenheit to Celsius
            printf("Insert fahrenheit: ");
            scanf("%f", &valueA);
            result = (valueA - 32) * (5/9);
            printf("%.3f fahrenheit in celsius is %.3f C\n\n", valueA, result);
            sleep(5);
            main();
        case 6:
            //Celsius to Fahrenheit
            printf("Insert celsius: ");
            scanf("%f", &valueA);
            result = (valueA * (9/5)) + 32;
            printf("%.3f celsius in fahrenheit is %.3f F\n\n", valueA, result);
            sleep(5);
            main();
        case 7:
            //Celsius to Kelvin
            printf("Insert celsius: ");
            scanf("%f", &valueA);
            result = valueA + 273.15;
            printf("%.3f celsius in kelvin is %.3f K\n\n", valueA, result);
            sleep(5);
            main();
        case 8:
            //Fahrenheit to Kelvin
            printf("Insert fahrenheit: ");
            scanf("%f", &valueA);
            result = (valueA - 32) * (5/9) + 273.15;
            printf("%.3f fahrenheit in kelvin is %.3f K\n\n", valueA, result);
            sleep(5);
            main();
        case 9:
            //Kilograms to Pounds
            printf("Insert kilograms: ");
            scanf("%f", &valueA);
            result = valueA * 2.205;
            printf("%.3f kilograms in pounds is %.3f lb\n\n", valueA, result);
            sleep(5);
            main();
        case 10:
            //Ounce to Grams
            printf("Insert ounce: ");
            scanf("%f", &valueA);
            result = valueA * 28.35;
            printf("%.3f ounce in pounds is %.3f lb\n\n", valueA, result);
            sleep(5);
            main();
        case 11:
            //Pounds to Kilograms
            printf("Insert Pounds: ");
            scanf("%f", &valueA);
            result = valueA / 2.205;
            printf("%.3f pounds in kilograms is %.3f kg\n\n", valueA, result);
            sleep(5);
            main();
        case 12:
            //Grams to Ounce
            printf("Insert grams: ");
            scanf("%f", &valueA);
            result = valueA / 28.35;
            printf("%.3f grams in ounce is %.3f oz\n\n", valueA, result);
            sleep(5);
            main();
        case 13:
            //Feets to Meters
            printf("Insert feets: ");
            scanf("%f", &valueA);
            result = valueA / 3.281;
            printf("%.3f feets in meters is %.3f m\n\n", valueA, result);
            sleep(5);
            main();
        case 14:
            //Miles p.h to Kilometers p.h
            printf("Insert miles per hour: ");
            scanf("%f", &valueA);
            result = valueA * 1.609;
            printf("%.3f miles per hour in kilometers per hour is %.3f kmph\n\n", valueA, result);
            sleep(5);
            main();
        case 15:
            //Cup to  Millimeters
            printf("Insert cup: ");
            scanf("%f", &valueA);
            result = valueA * 284;
            printf("%.3f cup in millimeters is %.3f mm\n\n", valueA, result);
            sleep(5);
            main();
        case 16:
            //Millimeters to Cubic Meters
            printf("Insert millimeters: ");
            scanf("%f", &valueA);
            result = valueA * 1000000 + 6;
            printf("%.3f millimeters in cubic meters is %.3f m3\n\n", valueA, result);
            sleep(5);
            main();
        case 17:
            //Millimeters to Cup
            printf("Insert millimeters: ");
            scanf("%f", &valueA);
            result = valueA / 284;
            printf("%.3f millimeters in cup is %.3f C\n\n", valueA, result);
            sleep(5);
            main();
        case 18:
            //Gallon to Liters
            printf("Insert gallon: ");
            scanf("%f", &valueA);
            result = valueA * 3.785;
            printf("%.3f gallon in liters is %.3f l\n\n", valueA, result);
            sleep(5);
            main();
        case 19:
            //Liters to Gallon
            printf("Insert liters: ");
            scanf("%f", &valueA);
            result = valueA * 0.2641722;
            printf("%.3f gallon in liters is %.3f gal\n\n", valueA, result);
            sleep(5);
            main();
        case 20:
            //Cubic Meters to Cubic feets
            printf("Insert cubic meters: ");
            scanf("%f", &valueA);
            result = valueA * 35.315;
            printf("%.3f cubic meters in cubic feets is %.3f cu ft\n\n", valueA, result);
            sleep(5);
            main();
        case 21:
            //Cubic Feets in Cubic Meters
            printf("Insert cubic feets: ");
            scanf("%f", &valueA);
            result = valueA / 35.315;
            printf("%.3f cubic feets in cubic meters is %.3f cu meters\n\n", valueA, result);
            sleep(5);
            main();
        case 22:
            //Atmosphere to Kilopascal
            printf("Insert atmosphere: ");
            scanf("%f", &valueA);
            result = valueA * 101.325;
            printf("%.3f cubic meters in cubic feets is %.3f kPa\n\n", valueA, result);
            sleep(5);
            main();
        case 23:
            //Pounds per Square to Millibar
            printf("Insert atmosphere: ");
            scanf("%f", &valueA);
            result = valueA * 68.95;
            printf("%.3f pounds in millibar is %.3f mbar\n\n", valueA, result);
            sleep(5);
            main();
        case 24:
            //Kilopascal to Atmosphere
            printf("Insert kilopascal: ");
            scanf("%f", &valueA);
            result = valueA / 101.325;
            printf("%.3f kilopascal in atmosphere is %.3f atm\n\n", valueA, result);
            sleep(5);
            main();
        case 25:
            //Torr to Pascal
            printf("Insert torr: ");
            scanf("%f", &valueA);
            result = valueA * 133.3;
            printf("%.3f torr in pascal is %.3f Pa\n\n", valueA, result);
            sleep(5);
            main();
        case 26:
            //Centimeters to Meters
            printf("Insert centimeters: ");
            scanf("%f", &valueA);
            result = valueA / 100;
            printf("%.3f centimeters in meters is %.3f m\n\n", valueA, result);
            sleep(5);
            main();
        case 27:
            //Meters to Centimeters
            printf("Insert meters: ");
            scanf("%f", &valueA);
            result = valueA * 100;
            printf("%.3f meters in centimeters is %.3f cm\n\n", valueA, result);
            sleep(5);
            main();
        case 28:
            //Kilometers p.h to Miles p.h
            printf("Insert kilometers per hour: ");
            scanf("%f", &valueA);
            result = valueA / 1.609;
            printf("%.3f kilometers per hour in miles per hour is %.3f mph\n\n", valueA, result);
            sleep(5);
            main();
        case 100:
            //Quit Program
            exit(1);
    }

    return 0;
}
