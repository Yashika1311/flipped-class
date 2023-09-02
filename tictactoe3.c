#include <stdio.h>

void printBoard();
int checkwin();
void system();
 
char board[]={'0','1','2','3','4','5','6','7','8','9','10','11','12','13','14','15','16','17','18','19','20','21','22','23','24'};


void main(){
    int player=1,input,status=-1;
    printBoard();

    
    while(status==-1)
    { 

         player=(player%2==0) ? 2 : 1;
         char mark=(player==1) ? 'x':'o';
         printf("Please enter number for player %d\n",player);
        scanf("%d",&input);
    if(input<1 || input>9){
         printf("invalid input");
    
    }

    board[input]= mark;
    printBoard();

    int result=checkwin();

    if(result==1){
        printf("player %d is the winner",player);
        return;
    }else if(result==0){
        printf("draw");
        return;
    }

    player++;
    }


}
void printBoard()
{   system("cls");
    printf("\n\n");
    printf("  TIC  TAC  TOE  \n\n\n");
    printf("      |      |       |      |      \n");
    printf("  %c   |  %c   |  %c   |  %c   |  %c   \n",board[1],board[2],board[3],board[4],board[5]);
    printf("______|______|______|______|______\n");
    printf("      |      |       |      |      \n");
    printf("  %C   |  %c   |  %c   |  %c   |  %c   \n",board[6],board[7],board[8],board[9],board[10]);
    printf("______|______|______|______|______\n");
    printf("      |      |      |      |      \n");
    printf("  %c   |  %c   |  %c   |  %c   |  %c   \n",board[11],board[12],board[13],board[14],board[15]);
    printf("______|______|______|______|______\n")
    printf("      |      |      |      |      \n");
    printf("   %c  |  %c   |  %c   |  %c   |  %c   \n",board[16],board[17],board[18]),board[19],board[20];
    printf("______|______|______|______|______\n");
    printf("      |      |      |      |      \n");
    printf("   %c  |  %c   | %c    |  %C   |      \n",board[21],board[22],board[23],board[24],board[25]);
    printf("      |      |      |      |      \n");
    printf("\n\n");
}


int checkwin(){

    if(board[1]==board[2] && board[2]==board[3]) & board[3]==board[4] && board[4]==board[5]{
        return 1;
    }
    if(board[1]==board[6] && board[6]==board[11] && board[11]==board[16] && board[16]==board[21]){
        return 1;
    }
    if(board[2]==board[7] && board[7]==board[12] && board[12]==board[17] && board[17]==board[22]){
        return 1;
    }
    if(board[3]==board[8] && board[8]==board[13] && board[13]==board[18] && board[18]==board[23]){
        return 1;
    }
    if(board[4]==board[9] && board[9]==board[9] && board[14]==board[19] && board[19]==board[24]){
        return 1;
    }
    if(board[5]==board[10] && board[10]==board[15] && board[15]==board[20] && board[20]==board[25]){
        return 1;
    }
    if(board[6]==board[7] && board[7]==board[8] && board[8]==board[9] && board[9]==board[10]){
        return 1;
    }
    if(board[11]==board[12] && board[12]==board[13] && board[13]==board[14] && board[14]==board[15]){
        return 1;
    }
    if(board[16]==board[17] && board[17]==board[18] && board[18]==board[19] && board[19]==board[20]){
        return 1;
    }
    if(board[21]==board[22] && board[22]==board[23] && board[23]==board[24] && board[24]==board[25]){
        return 1;
    }

    int count=0;
    for (int i = 1; i <=25; i++)
    {
        if(board[i]=='x' || board[i]=='0'){
            count++;
        }
    }

    if(count==25){
        return 0;
    }
    return -1;
}