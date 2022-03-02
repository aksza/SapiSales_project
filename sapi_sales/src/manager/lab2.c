//
// Created by Aksza on 2/23/2022.
//

#include "lab2.h"
#include <time.h>
#include <stdbool.h>

bool leapyear(int year){
    return ((year %4 == 0 && year %100 != 0) || (year % 400 == 0));
}

BirthDate* birthDateGenerate(){
    BirthDate *newBirthDate = malloc(sizeof(BirthDate));
    bool valid = false;
    srand(time(0));
    int year, month,day;
    year = 1000 + rand() % (2023 - 1000);
    month = 1 + rand() %(13 - 1);
    while (!valid) {
        day = 1 + rand() % (32 - 1);
        if(month == 2){
            if(leapyear(year)){
                if(day <= 29) valid= true;
            }
            else{
                if(day <= 28) valid = true;
            }
        }
        else if(month <= 7){
                if(month %2 == 0){
                    if(day <= 30) valid = true;
                }
                else{
                    valid = true;
                }
            }
            else{
                if(month %2 !=0){
                    if(day <= 30) valid = true;
                } else valid = true;
            }
    }
    newBirthDate->year = year;
    newBirthDate->month = month;
    newBirthDate->day = day;
    return newBirthDate;
}
/*
void testUserFunctionalities(){
    //After lab2 this need to be commented because the birth year of the user is changed to BirthDate stuct
    //Declaring user pointers
    User *user1;

    //Creating users
    //createUser(&user1);

    //Fill with data
    //setUserData("Michael Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,1980);
    //user1 = createUser(""Michael Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,1980);

    createUser(&user1,"Michael Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,*birthDateGenerate());

    //Print users
    printUser(user1);

    //Delete users
    //deleteUser(&user1);

}
*/
void testProductFunctionalities(){
    /*
    Product* product1 = createProduct("MS1","Apple",FRUIT,10);
   Product* product1 = createProduct("MS2","Book",SCHOOL,4);
    Product* product3 = createProduct("MS3","Tomato",GROCERY,20);
    */
    Product* product1;
    Product* product2;
    Product* product3;
    createProduct(&product1,"MS1","Apple",FRUIT,10,12);
    createProduct(&product2,"MS2","Book",SCHOOL,4,32);
    createProduct(&product3,"MS3","Tomato",GROCERY,20,27);
    printProduct(product1);
    printProduct(product2);
    printProduct(product3);
}