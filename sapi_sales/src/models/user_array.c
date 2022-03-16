//
// Created by Aksza on 3/9/2022.
//

//        1.Tömb létrehozása/ felszabadítása - createUserArray
//        2.Felhasználó beszúrása a tömbbe (ellenőrzés) - addNewUser
//        3.i. felhasználó lekérdezése - getUserAtPosition
//        4.Felhasználók kiiratása képernyőre/ állományba - Printusers
//        5.felhasznalo torlese - deleteUserArray

#include "user_array.h"
void createUserArray(UserArray *userArray, int maxUsers){
    (*userArray) = *(UserArray*)malloc(1*sizeof (UserArray));
    (*userArray).Users = (User**) malloc(maxUsers*sizeof(User*));
    (*userArray).Capacity = maxUsers;
    (*userArray).numberOfUsers = 0;
    if((*userArray).Users == NULL){
        printf("Sikertelen tarhelyfoglalas!\n");
    }
    if((*userArray).Capacity == NULL){
        printf("Sikertelen tarhelyfoglalas!\n");
    }
    if((*userArray).numberOfUsers == NULL){
        printf("Sikertelen tarhelyfoglalas!\n");
    }

}
bool addNewUser(UserArray* userArray,User* newUser){
    if((*userArray).Capacity < (*userArray).numberOfUsers){
        (*userArray).Users[(*userArray).numberOfUsers]->birthDate = newUser->birthDate;
        (*userArray).Users[(*userArray).numberOfUsers]->type = newUser->type;
        strcpy((*userArray).Users[(*userArray).numberOfUsers]->name,newUser->name);
        (*userArray).Users[(*userArray).numberOfUsers]->spetialization = newUser->spetialization;
        (*userArray).Users[(*userArray).numberOfUsers]->gender = newUser->gender;
        (*userArray).Users[(*userArray).numberOfUsers]->id = newUser->id;
        (*userArray).numberOfUsers++;
    }
    else{
        printf("Sikertelen user hozzaadas!n");
    }
}
User* getUserAtPosition(UserArray* userArray,int position){
    if(position <= (*userArray).numberOfUsers){
        return (*userArray).Users[position];
    }
    else{
        printf("Nem letezik user a %i. pozicion!\n",position);
    }

}
void printUsers(UserArray*userArray,int numberOfUsers){
    if(numberOfUsers== 0){
        printf("Nincsenek felhasznalok!\n");
    }
    else{
        for(int i = 0;i < numberOfUsers;++i){
            printf("%s details:\n"
                   "\t - ID: %i\n"
                   "\t - TYPE: %s\n"
                   "\t - GENDER: %s\n"
                   "\t - SPETIALIZATION: %s\n"
                   "\t - BIRTH DATE: %i.%i.%i.\n",
                   (*userArray).Users[i]->name,
                   (*userArray).Users[i]->id,
                   getUserType((*userArray).Users[i]->type),
                   getGender((*userArray).Users[i]->gender),
                   getSpetialization((*userArray).Users[i]->spetialization),
                   (*userArray).Users[i]->birthDate.year,
                   (*userArray).Users[i]->birthDate.month,
                   (*userArray).Users[i]->birthDate.day);
        }
    }
}
void deleteUserArray(UserArray **userArray){
    free((*userArray)->Users);
}
int searchbyid(UserArray *userArray,int id){
    if((*userArray).numberOfUsers == 0){
        printf("Nincsenek felhasznalok!\n");
        return -1;
    }
    int position = -1;
    for(int i = 0;i <(*userArray).numberOfUsers;++i){
        if((*userArray).Users[i]->id == id){
            position = i;
        }
    }
    if(position == -1){
        printf("Nem talalhato a felhasznalo!\n");
        return -1;
    }
    else{
        return position;
    }
}