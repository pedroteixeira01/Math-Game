#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void game(int dif){

    int sig;
    srand((unsigned) time(NULL));

    switch (dif)
    {
    case 1:
        
        sig = rand() % 2;
        if(sig == 0){
            int num1 = rand() % 100;
            int num2 = rand() % 100;

            int opc;
            printf("%d + %d\n", num1, num2);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1+num2)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }else{
            int num1 = rand() % 100;
            int num2 = rand() % 100;

            int opc;
            printf("%d - %d\n", num1, num2);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1-num2)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }
        break;

    case 2:
        
        sig = rand() % 4;
        if(sig == 0){
            int num1 = rand() % 100;
            int num2 = rand() % 100;

            int opc;
            printf("%d + %d\n", num1, num2);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1+num2)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }else if(sig == 1){
            int num1 = rand() % 100;
            int num2 = rand() % 100;

            int opc;
            printf("%d - %d\n", num1, num2);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1-num2)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }else if(sig == 2){
            int num1 = rand() % 15;
            int num2 = rand() % 15;

            int opc;
            printf("%d * %d\n", num1, num2);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1*num2)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }else{
            int num1 = rand() % 20;
            int num2 = rand() % 10;

            int opc;
            printf("%d / %d\n", num1, num2);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1/num2)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }
        break;

    case 3:

        sig = rand() % 6;
        if(sig == 0){
            int num1 = rand() % 100;
            int num2 = rand() % 100;

            int opc;
            printf("%d + %d\n", num1, num2);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1+num2)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }else if(sig == 1){
            int num1 = rand() % 100;
            int num2 = rand() % 100;

            int opc;
            printf("%d - %d\n", num1, num2);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1-num2)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }else if(sig == 2){
            int num1 = rand() % 15;
            int num2 = rand() % 15;

            int opc;
            printf("%d * %d\n", num1, num2);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1*num2)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }else if(sig == 3){
            int num1 = rand() % 20;
            int num2 = rand() % 10;

            int opc;
            printf("%d / %d\n", num1, num2);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1/num2)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }else if(sig == 4){
            int num1 = rand() % 10;

            int opc;
            printf("%d^2\n", num1);
            printf("Answer -> ");
            scanf("%d", &opc);
            if(opc == (num1*num1)){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }else{
            int num1 = 1+(rand() % 10);

            float opc;
            printf("√%d\n", num1);
            printf("Answer -> ");
            scanf("%f", &opc);
            if(opc == (sqrt(num1))){
                puts("\nCorrect answer !");
            }else{
                puts("\nWrong answer...");
            }
        }
        break;
        
    case 4:
        puts("Bye bye !");
        break;

    default:
        puts("Error. Wrong option");
    }
}

void logo(){
    printf("                   _                                \n");
    printf("               _  | |                               \n");
    printf(" ____  _____ _| |_| |__      ____ _____ ____  _____ \n");
    printf("|    \\(____ (_   _)  _ \\    / _  (____ |    \\| ___ |\n");
    printf("| | | / ___ | | |_| | | |  ( (_| / ___ | | | | ____|\n");
    printf("|_|_|_\\_____|  \\__)_| |_|   \\___ \\_____|_|_|_|_____)\n");
    printf("                           (_____|                  \n");

    puts("Try to reply correctly the math question!");
}

void menu(){
    puts("\nChoose the question difficulty:");
    puts("1 - Easy");
    puts("2 - Medium");
    puts("3 - Hard");
    puts("4 - Exit");
    printf("-> ");
}

int main(){
    
    int flag;

    logo();

    do{
        menu();
        scanf("%d", &flag);
        puts("");
        game(flag);

    }while(flag != 4);

    return 0;
}
