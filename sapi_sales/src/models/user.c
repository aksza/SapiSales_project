//
// Created by Aksza on 2/23/2022.
//

#include "user.h"
#include <time.h>
#include <stdbool.h>


int numberOfUsers = 0;

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
}
void setUserData(User *user, char* name, enum UserType type,enum Gender gender, enum Spetialization spetialization, BirthDate birthYear){
    user->id = ++numberOfUsers;
    user->spetialization = spetialization;
    user->birthDate.year = birthYear.year;
    user->birthDate.month = birthYear.month;
    user->birthDate.day = birthYear.day;
    user->gender = gender;
    user->type = type;
    strcpy(user->name,name);
}

void printUser(User *user,char* destination){
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
}

void deleteUser(User **user) {
    free((*user));
}
