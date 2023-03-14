#include <stdio.h>
#include <string.h>

//1.tvådimensionell shackbräde 
//2. temperaturer veckans alla dar - för många veckor
//3. Vi snyggar till med: DEFINE
//4. Tre olika städer också - three dimensional


#define WEEK 2
#define DAY 7

void temps(){
    float temperatures[WEEK][DAY];

    // temperatures[0][0] = 12.3;
    // temperatures[25][2] = 19.4;

    for(int weekNo = 0; weekNo < WEEK; weekNo++){
        printf("vecka:%d\n", weekNo);
        for(int day = 0; day < DAY; day++){
            printf("Week %d, Day %d: ", weekNo + 1, day + 1);
            scanf(" %f", &temperatures[weekNo][day]);
        }
    }


}



#define CITY 3
void temps2(){
    float temperatures[CITY][WEEK][DAY];

    // temperatures[0][0] = 12.3;
    // temperatures[25][2] = 19.4;
    for(int cityNo = 0;cityNo < CITY;cityNo++ ){
        printf("CITY:%d\n", cityNo+1);
        for(int weekNo = 0; weekNo < WEEK; weekNo++){
            printf("vecka:%d\n", weekNo+1);
            for(int day = 0; day < DAY; day++){
                printf("Week %d, Day %d: ", weekNo + 1, day + 1);
                scanf(" %f", &temperatures[cityNo][weekNo][day]);
            }
        }
    }


}



int main(){
    temps2();
    int c[2][3] = {
            {1, 3, 0},
            {-1, 5, 9}
            };
    printf("%d",c[0][0]);
    // int c2[2][3] = {1, 3, 0, -1, 5, 9};

    temps();
    // rad 5 col 4
    char chessBoard[8][8];  //row * antal col + col

    //    char chessBoard[64]; 
   
    memset(chessBoard,' ',64);
    //            rows cols
/*
    [0][0]    [0][1]    [0][2]    [0][3]   [0][4]   [0][5]   [0][6]   [0][7]
    [1][0]    [1][1]    [1][2]    [1][3]   [1][4]   [1][5]   [1][6]   [1][7]
    [2][0]    [2][1]    [2][2]    [2][3]   [2][4]   [2][5]   [2][6]   [2][7]
    [3][0]    [3][1]    [3][2]    [3][3]   [3][4]   [3][5]   [3][6]   [3][7]
    [4][0]    [4][1]    [4][2]    [4][3]   [4][4]   [4][5]   [4][6]   [4][7]
    [5][0]    [5][1]    [5][2]    [5][3]   [5][4]   [5][5]   [5][6]   [5][7]
    [6][0]    [6][1]    [6][2]    [6][3]   [6][4]   [6][5]   [6][6]   [6][7]
    [7][0]    [7][1]    [7][2]    [7][3]   [7][4]   [7][5]   [7][6]   [7][7]

*/
    chessBoard[0][0] = 'T'; // Torn;
    chessBoard[0][7] = 'T'; // Torn;
    chessBoard[0][1] = 'H'; // Horse;
    chessBoard[0][6] = 'H'; // Horse;
    chessBoard[0][2] = 'L'; // Löpare
    chessBoard[0][5] = 'L'; // Löpare
    chessBoard[0][3] = 'K'; // Kung
    chessBoard[0][4] = 'D'; // Dam
    chessBoard[1][0] = 'b'; // bonde
    chessBoard[1][1] = 'b'; // bonde
    chessBoard[1][2] = 'b'; // bonde
    chessBoard[1][3] = 'b'; // bonde
    chessBoard[1][4] = 'b'; // bonde
    chessBoard[1][5] = 'b'; // bonde
    chessBoard[1][6] = 'b'; // bonde
    chessBoard[1][7] = 'b'; // bonde
    
    chessBoard[7][0] = 'T'; // Torn;
    chessBoard[7][7] = 'T'; // Torn;
    chessBoard[7][1] = 'H'; // Horse;
    chessBoard[7][6] = 'H'; // Horse;
    chessBoard[7][2] = 'L'; // Löpare
    chessBoard[7][5] = 'L'; // Löpare
    chessBoard[7][4] = 'K'; // Dam
    chessBoard[7][3] = 'D'; // Kung

    chessBoard[6][0] = 'b'; // bonde
    chessBoard[6][1] = 'b'; // bonde
    chessBoard[6][2] = 'b'; // bonde
    chessBoard[6][3] = 'b'; // bonde
    chessBoard[6][4] = 'b'; // bonde
    chessBoard[6][5] = 'b'; // bonde
    chessBoard[6][6] = 'b'; // bonde
    chessBoard[6][7] = 'b'; // bonde
    



    for(int row = 0; row < 8; row++){
        for(int col=0; col < 8; col++){
            printf("%c ", chessBoard[row][col]);
        }
        printf("\n");
    }


}
