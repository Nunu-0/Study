function solution(lottos, win_nums) {
    const answer = [];
    const min = lottos.filter(num=>win_nums.includes(num)).length;
    const max = lottos.filter(num=>num===0).length+min;
    
    max > 1 ? answer.push(7-max) : answer.push(6);
    min > 1 ? answer.push(7-min) : answer.push(6);

    return answer;
}