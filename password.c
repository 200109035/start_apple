#include <stdio.h>

int main() {
    char username[20], passwork[15];

    printf("Whrite login:\n");
    scanf("%s", &username);

    if(strcmp(username, "chaitu")==0){
        if(strcmp(passwork, "chaitu")==0)
        printf("login and passwork correkt\n");
    }else{
        printf("login or passwork incorrekt");
    }
return 0;
}