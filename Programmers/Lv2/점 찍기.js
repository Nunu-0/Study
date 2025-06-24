/**
 점 찍기 (25.06.24)
 https://school.programmers.co.kr/learn/courses/30/lessons/140107
 시간 복잡도 문제 O(n^2) -> O(n) 
 *  */

function solution(k, d) {
    let answer = 0;
    for(let i = 0; i <= d; i += k){
        let y = Math.sqrt(d ** 2 - i ** 2);
        answer += Math.floor(y / k + 1);
    }
    return answer;
}