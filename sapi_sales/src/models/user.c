//
// Created by Aksza on 2/23/2022.
//

#include "user.h"
#include "../../headers/array/product_array.h"
#include "useful.h"
#include <time.h>
#include <stdbool.h>


//int numberOfUsers = 0;

char* getUserType(enum UserType type){
    switch (type) {
        case STUDENT:
            return "Student";
        case TEACHER:
            return "Teacher";
        default:
            return "Undefined";

    }
}

char* getGender(enum Gender type){
    switch (type) {
        case MALE:
            return "Male";
        case FEMALE:
            return "Female";
        default:
            return "Undefined";
    }
}

char* getSpetialization(enum Spetialization type){
    switch (type) {
        case INFORMATICS:
            return "Informatics";
        case COMPUTER_SCIENCE:
            return "Computer_Science";
        case AUTOMATION:
            return "Automation";
        case TELECOMMUNICATION:
            return "Telecommunication";
        case MATHEMATICS_INFORMATICS:
            return "Mathematics_Informatics";
        case ENGINEERING:
            return "Engineering";
        default:
            return "Undefined";

    }
}
bool leapyear(int year){
    return ((year %4 == 0 && year %100 != 0) || (year % 400 == 0));
}

BirthDate birthDateGenerate(){
    BirthDate newBirthDate;
    bool valid = false;
    srand(time(0));
    int year, month,day;
    year = 1940 + rand() % (2023 - 1940);
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
    newBirthDate.year = year;
    newBirthDate.month = month;
    newBirthDate.day = day;
    return newBirthDate;
}
void createUser(User **user) {
    (*user)= malloc(sizeof(User));
    (*user)->id = ++numberOfUsers;
    createProductArray(&(*user)->myProducts,MAX_PRODUCTS);
}
void setUserData(User *user, char* name, enum UserType type,enum Gender gender, enum Spetialization spetialization, BirthDate birthYear){
    if(!user){
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    user->spetialization = spetialization;
    user->birthDate.year = birthYear.year;
    user->birthDate.month = birthYear.month;
    user->birthDate.day = birthYear.day;
    user->gender = gender;
    user->type = type;
    strcpy(user->name,name);
}

void printUser(User *user,char* destination){
    if(!user){
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    freopen(destination,"w",stdout);
    printf("%s details:\n"
           "\t - ID: %i\n"
           "\t - TYPE: %s\n"
           "\t - GENDER: %s\n"
           "\t - SPETIALIZATION: %s\n"
           "\t - BIRTH DATE: %i.%i.%i.\n",
           user->name,
           user->id,
           getUserType(user->type),
           getGender(user->gender),
           getSpetialization(user->spetialization),
           user->birthDate.year,
           user->birthDate.month,
           user->birthDate.day);
    ///itt printMyProducts volt
    printMyProducts(user,destination);
    printf("\n");
    freopen(CON,"w",stdout);
}

void deleteUser(User **user) {
    if(*user != NULL){
        deleteProductArray(&(*user)->myProducts);   ///kiegeszitjuk a felszabaditast a termekek felszabaditasaval is
        free(*user);
        *user = NULL;
        printDeleteMessage(USER);
    }
}
void addNewProductToUser(User *user,Product *newProduct,int position){
    if(!addNewProduct(user->myProducts,newProduct,position)){
        printErrorMessage(ADD_PRODUCT_ERROR);
    }
}
void printMyProducts(User *user,char *destination){
    printf("\n\tPRODUCTS:\n\n");
    for(int i = 0;i < user->myProducts->maxProducts;++i){
        if(user->myProducts->products[i] != NULL){
            printProduct(user->myProducts->products[i],destination);
        }
    }
}
void readUserProducts(User *user){
    int nrOfProducts;
    scanf("%i\n",&nrOfProducts);
    for(int i = 0;i < nrOfProducts; ++i){
        Product  *newProduct;
        createProduct(&newProduct);
        scanf("%[^\n]"
              "%i"
              "%i\n",
              newProduct->name,
              &newProduct->type,
              &newProduct->amount);
        addNewProductToUser(user,newProduct,i);
    }
}