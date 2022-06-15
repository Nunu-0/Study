function solution(board, moves) {
    let answer = 0;
    const basket = [];
    
    moves.forEach((move)=>{ 
        for (let i = 0; i < board.length; i++){
            const doll = board[i][move-1];
            if(doll){ 
                if(basket[basket.length-1] === doll){
                    answer+= 2;
                    basket.pop();
                }
                else basket.push(doll);
                
                board[i][move-1] = 0; 
                break;
            }
        }
    }); 

    return answer;
}