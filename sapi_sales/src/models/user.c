//
// Created by Aksza on 2/23/2022.
//

#include "user.h"

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

User* createUser(char* name, enum UserType type,enum Gender gender, enum Spetialization spetialization, unsigned int birthYear){
    User *newUser = malloc(sizeof(User));
    newUser->id = ++numberOfUsers;
    newUser->spetialization = spetialization;
    newUser->birthYear = birthYear;
    newUser->gender = gender;
    newUser->type = type;
    strcpy(newUser->name,name);
    return newUser;
}

void printUser(User *user){
    printf("%s details:\n"
           "\t - ID: %i\n"
           "\t - TYPE: %s\n"
           "\t - GENDER: %s\n"
           "\t - SPETIALIZATION: %s\n"
           "\t - BIRTH YEAR: %i\n",
           user->name,
           user->id,
           getUserType(user->type),
           getGender(user->gender),
           getSpetialization(user->spetialization),
           user->birthYear);
}