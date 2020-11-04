#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
  char username[15];
  char password[12];

  printf("Enter your username:\n");
  scanf("%s", &password);
  
  if(strcmp(username, "chaitu")==0)
  {
    if(strcmp(password, "123")==0)
    {
      printf("\nWelcom.Login Success!");

    }else{
printf("\nwrog password");
  }
}else{
  printf("\nUser does not exist");
}

return 0;
}