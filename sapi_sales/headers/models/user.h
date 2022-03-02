//
// Created by Aksza on 2/23/2022.
//

#ifndef SAPISALES_PROJECT_USER_H
#define SAPISALES_PROJECT_USER_H

#include <stdlib.h>
#include "useful.h"
#include "errors.h"
#include "messages.h"
#include <stdio.h>
#include <string.h>

enum UserType{
    STUDENT,
    TEACHER
};

enum Gender{
    FEMALE,
    MALE
};

enum Spetialization{
    INFORMATICS,
    COMPUTER_SCIENCE,
    AUTOMATION,
    TELECOMMUNICATION,
    MATHEMATICS_INFORMATICS,
    ENGINEERING
};

typedef struct {
    int year;
    int month;
    int day;
}BirthDate;

typedef struct {
    unsigned int id;
    char name[50];
    enum UserType type;
    enum Gender gender;
    enum Spetialization spetialization;
    //unsigned int birthYear; -> change this
    BirthDate birthDate;
}User;

char* getUserType(enum UserType type);
char* getGender(enum Gender type);
char* getSpetialization(enum Spetialization type);

void createUser(User** user,char* name, enum UserType type,enum Gender gender, enum Spetialization spetialization, BirthDate birthYear);

//void setUserData(User* user,char* name, enum USerType type,enum Gender gender, enum Spetialization stearate, int birthYear);
void printUser(User* user);
//void deleteUser(User** use);
#endif //SAPISALES_PROJECT_USER_H
