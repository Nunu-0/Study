function solution(absolutes, signs) {
    return absolutes.reduce((sum, n, idx)=>sum + n * (signs[idx] ? 1 : -1),0);
}