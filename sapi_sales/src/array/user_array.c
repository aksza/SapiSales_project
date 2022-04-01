//
// Created by Aksza on 3/9/2022.
//

//        1.Tömb létrehozása/ felszabadítása - createUserArray
//        2.Felhasználó beszúrása a tömbbe (ellenőrzés) - addNewUser
//        3.i. felhasználó lekérdezése - getUserAtPosition
//        4.Felhasználók kiiratása képernyőre/ állományba - Printusers
//        5.felhasznalo torlese - deleteUserArray

#include "../../headers/array/user_array.h"
#include "user.h"
// atirtuk az elozot
void createUserArray(UserArray **userArray, int maxUsers){
    ///helyfoglalas a UserArray elemnek
    *userArray = (UserArray*) malloc(sizeof (UserArray));
    if(!(*userArray)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    ///helyfoglalas a felhasznalokat tartalmazo tombnek
    (*userArray)->Users = (User**) malloc(maxUsers*sizeof(User*));
    if(!(*userArray)->Users){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    ///Maximalis felhasznalok szama
    (*userArray)->Capacity = maxUsers;
    ///NULL-ra allitunk minden elemet kezdetben, hogy ha NULL ellenorzest vegzunk ne legyen problema
    for(int i = 0; i<(*userArray)->Capacity; ++i){
        (*userArray)->Users[i] = NULL;
    }
}
/*
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
}*/
bool addNewUser(UserArray* userArray,User*newUser,int position){
    if(userArray != NULL && userArray->Capacity > position && position>= 0 && newUser != NULL){
        userArray->Users[position] = newUser;
        return true;
    }
    return false;
}
void readUsers(UserArray*userArray,char *from){
    if(!freopen(from,"r",stdin)) exit(-1);
    int nrOfUsers;
    scanf("%i\n",&nrOfUsers);
    for(int i = 0; i < nrOfUsers ; ++i){
        User *newUser;
        createUser(&newUser);
        scanf("%[^\n]",newUser->name);
        scanf("%i",&newUser->type);
        scanf("%i",&newUser->spetialization);
        scanf("%i",&newUser->gender);
        ///Dont forget this \n!!!!!!
        scanf("%i%i%i\n",&newUser->birthDate.year,&newUser->birthDate.month,&newUser->birthDate.day);
        readUserProducts(newUser);
        addNewUser(userArray,newUser,i);
    }
    freopen(CON,"r",stdin);
}
User* getUserAtPosition(UserArray* userArray,int position){
    if(position <= (*userArray).numberOfUsers){
        return (*userArray).Users[position];
    }
    else{
        printf("Nem letezik user a %i. pozicion!\n",position);
    }

}
/*
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
}*/

///????
void printUsers(UserArray *userArray,char *destination){
    freopen(destination,"w",stdin);
    printf("All users:\n");
    for(int i = 0;i < userArray->Capacity;++i){
        if(userArray->Users[i]!=NULL){
            printUser(userArray->Users[i],destination);
        }
    }
    freopen(CON,"w",stdin);
}
void deleteUserArray(UserArray **userArray){
    free((*userArray)->Users);
    free((*userArray));
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