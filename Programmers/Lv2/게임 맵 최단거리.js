/**
 게임 맵 최단거리 (25.06.27)
 https://school.programmers.co.kr/learn/courses/30/lessons/1844
 BFS 
 shift() -> O(n)
 *  */

function solution(maps) {
    const dir = [[0, 1], [0, -1], [1, 0], [-1, 0]];
    const maxX = maps[0].length - 1;
    const maxY = maps.length - 1;
    const queue = [[0, 0, 1]];
    let queueP = 0;
    
    while (queueP < queue.length) {
        const [x, y, dist] = queue[queueP++];
        
        if (x === maxX && y === maxY) return dist;
        
        for (let [mx, my] of dir){
            let moveX = x + mx;
            let moveY = y + my;
            
            if (moveX >= 0 && moveY >= 0 
                && moveX <= maxX && moveY <= maxY 
                && maps[moveY][moveX]){
                queue.push([moveX, moveY, dist + 1]);
                maps[moveY][moveX] = 0;
            }
        }
    }
    
    return -1;
}