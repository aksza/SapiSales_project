//
// Created by Aksza on 3/23/2022.
//

#include "lab2_3.h"


void testUserFunctionalities2(){
    //Declaring user pointers
    User *user1, *user2,*user3;

    //Creating users
    createUser(&user1);
    createUser(&user2);
    createUser(&user3);

    //Declare dates for birth date
    BirthDate date1 = {1980,2,23};
    BirthDate date2 = {2003,10,7};
    BirthDate date3 = {1990,3,14};

    //Fill with data
    setUserData(user1,"John Peterson",STUDENT,MALE,COMPUTER_SCIENCE,date1);
    setUserData(user2,"Jane Austin",TEACHER,FEMALE,ENGINEERING,date2);
    setUserData(user3,"John Peterson",STUDENT,MALE,COMPUTER_SCIENCE,date3);

    //Print users
    printUser(user1,CON);
    printUser(user2,CON);
    printUser(user3,CON);

    //Delete users
    deleteUser(&user1);
    deleteUser(&user2);
    deleteUser(&user3);
}
void testProductFunctionalities2(){
    //Create product
    Product* product1,*product2,*product3;

    createProduct(&product1);
    createProduct(&product2);
    createProduct(&product3);

    setProductData(product1,"Apple",FRUIT,10);
    setProductData(product2,"Book",SCHOOL,4);
    setProductData(product3,"Tomato",VEGETABLE,20);

    printProduct(product1,CON);
    printProduct(product2,CON);
    printProduct(product3,CON);

    deleteProduct(&product1);
    deleteProduct(&product2);
    deleteProduct(&product3);
}
