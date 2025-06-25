/**
 카펫 (25.06.25)
 https://school.programmers.co.kr/learn/courses/30/lessons/42842
 완전탐색 
 *  */

function solution(brown, yellow) {
    let answer = [];
    const sum = brown + yellow;
    for (let h = 1; h <= Math.sqrt(sum); h++){
        let w = sum / h;
        if (brown == (w + h) * 2 - 4) {
            answer = [w, h];
        }
    }
    return answer
}