//
// Created by Aksza on 2/23/2022.
//

#include "lab2.h"


void testUserFunctionalities(){
    //After lab2 this need to be commented because the birth year of the user is changed to BirthDate stuct
    //Declaring user pointers
    User *user1;

    //Creating users
    //createUser(&user1);

    //Fill with data
    //setUserData("Michael Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,1980);

    user1 = createUser("Michael Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,1980);

    //Print users
    printUser(user1);

    //Delete users
    //deleteUser(&user1);

}

void testProductFunctionalities(){
    Product* product1 = createProduct("MS1","Apple",FRUIT,10);
    Product* product2 = createProduct("MS2","Book",SCHOOL,4);
    Product* product3 = createProduct("MS3","Tomato",GROCERY,20);

    printProduct(product1);
    printProduct(product2);
    printProduct(product3);
}