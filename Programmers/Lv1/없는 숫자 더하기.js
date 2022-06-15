function solution(numbers) {
    let answer = -1;
    num = [...Array(10)].map((n, i)=>i);
    
    answer = num.reduce((sum, n)=>{
        sum += !numbers.includes(n) && n;
        return sum;
    },0);
    return answer;
}