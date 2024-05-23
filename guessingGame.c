#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    char play='y';
    int x;
    srand(time(NULL));
    while(play=='y'){
        int rand_num=rand() % 100 + 0;
        printf("welcome to the number guessing game\ngive out you guess:\n");
        while(1){
        scanf("%d",&x);
        getchar();
        if(x==rand_num){
            printf("congratulations, you have won!!!!\n do you wish to continue(n/y)");
            scanf("%c",&play);
            if(play=='n'){
                break;
            }
        }
        else if(x>rand_num){
            printf("you are higher\n");
        }
        else{
            printf("you are lower\n");
        }
        printf("please give out another guess:\n");
        }
        
    }
    return 0;
}
