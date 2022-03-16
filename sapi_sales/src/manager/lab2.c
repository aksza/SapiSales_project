////
//// Created by Aksza on 2/23/2022.
////
//
//#include "lab2.h"
//
//void testUserFunctionalities(){
//    //After lab2 this need to be commented because the birth year of the user is changed to BirthDate stuct
//    //Declaring user pointers
//    User *user1;
//
//    //Creating users
//    createUser(&user1);
//
//    //Fill with data
//    setUserData( user1,"Michael Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,birthDateGenerate());
//    //user1 = createUser(""Michael Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,1980);
//
//    //createUser(user1,"Michael Smith",TEACHER,MALE,MATHEMATICS_INFORMATICS,*birthDateGenerate());
//
//    //Print users
//    printUser(user1,CON);
//
//    //Delete users
//    deleteUser(&user1);
//
//}
//
//void testProductFunctionalities(){
//    /*
//    Product* product1 = createProduct("MS1","Apple",FRUIT,10);
//   Product* product1 = createProduct("MS2","Book",SCHOOL,4);
//    Product* product3 = createProduct("MS3","Tomato",GROCERY,20);
//    */
//    Product* product1;
//    Product* product2;
//    Product* product3;
//    createProduct(&product1);
//    createProduct(&product2);
//    createProduct(&product3);
//    setProductData(product1,"MS1","Apple",FRUIT,10,12);
//    setProductData(product2,"MS2","Book",SCHOOL,4,32);
//    setProductData(product3,"MS3","Tomato",GROCERY,20,27);
//    printProduct(product1);
//    printProduct(product2);
//    printProduct(product3);
//    deleteProduct(&product1);
//    deleteProduct(&product2);
//    deleteProduct(&product3);
//}