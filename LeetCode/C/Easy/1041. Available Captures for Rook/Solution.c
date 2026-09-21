int numRookCaptures(char** board, int boardSize, int* boardColSize) {
    int Rr=-1,Rc=-1;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[i][j]=='R'){
                Rr=i;
                Rc=j;
                break;
            }
        }
        if(Rr!=-1)break;
    }
    int count=0;
    for(int row=Rr-1,col=Rc; row>=0;row--){
        if(board[row][col]=='B')break;
        if(board[row][col]=='p'){count++
        ;break;}
    }
    for(int row=Rr,col=Rc+1; col<8;col++){
        if(board[row][col]=='B') break;
        if(board[row][col]=='p'){count++;
        break;}
    }
for(int row=Rr,col=Rc-1; col>=0;col--){
        if(board[row][col]=='B')break;
        if(board[row][col]=='p'){count++;break;}
    }
    for(int row=Rr+1,col=Rc; row<8;row++){
        if(board[row][col]=='B')break;
        if(board[row][col]=='p'){count++;break;}
    }
    return count;}