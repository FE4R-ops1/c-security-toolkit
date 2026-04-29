//
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
     if(argc < 2){
          printf("comando inválido\n use: ./toolkit --help\n");
     }
     else if((strcmp(argv[1], "--help") == 0)){
          printf("Informações:\n  --help\n  idade\n  hello\n security:\n   hash\n   scan\n ");
     }
     else if(strcmp(argv[1], "hello") == 0){
          printf("toolkit online");
     }
     else if(strcmp(argv[1], "idade") == 0){
          if(argc < 3){
               printf("use: ./toolkit idade <valor>");
          }
          else{
           int idade = atoi(argv[2]);
           if(idade == 0){
               printf("inválido\n");
           }
           else if(idade < 18){
               printf("menor de idade.\n");
           }
           else{
               printf("maior de idade.\n");
           }
          }


     }
     else if(strcmp(argv[1], "hash") == 0){
          printf("Em desenvolvimento\n");
     }
     else if(strcmp(argv[1], "scan") == 0){
          printf("Em desenvolvimento\n");
     }
     else{
          printf("comando desconhecido.\n");
     }
     return 0;
}
