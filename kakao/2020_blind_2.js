/**
 * 
 * 카카오 2020 블라인드 채용 테스트 2번문제
 * : 괄호 변환
 * 
 * https://programmers.co.kr/learn/courses/30/lessons/60058?language=javascript
 * https://tech.kakao.com/2019/10/02/kakao-blind-recruitment-2020-round1/
 * 
 */

function solution(p) {
  return recursiveFunc(p);
}

function recursiveFunc(str) {
  if (isCorrectBrackets(str) || isEmptyString(str)) {
    return str;
  }

  const [u, v] = getFirstBalancedStringAndRemaining(str);

  return isCorrectBrackets(u)
    ? u + recursiveFunc(v)
    : handleIncorrectBrackets(u, v);
}

function handleIncorrectBrackets(u, v) {
  const uSubstr = u.substr(1, u.length - 2);

  return '(' + recursiveFunc(v) + ')' + flipBrackets(uSubstr);
}

function flipBrackets(str) {
  return str
    .split('')
    .map(char => (char === '(' ? ')' : '('))
    .join('');
}

function getFirstBalancedStringAndRemaining(str) {
  return str
    .split('')
    .reduce((prev, cur) => (
      isBalancedBrackets(prev[0])
        ? [prev[0], prev[1] + cur]
        : [prev[0] + cur, prev[1]]
    ), ['', '']);
}

function isEmptyString(str) {
  return str === '';
}

function isBalancedBrackets(str) {
  if (isEmptyString(str)) {
    return false;
  }

  const [isBalanced, openCount] = str
    .split('')
    .reduce(([isBalanced, openCount], cur) => (
      cur === '('
        ? [isBalanced, openCount + 1]
        : [isBalanced, openCount - 1]
    ), [true, 0]);

  return isBalanced && openCount === 0;
}

function isCorrectBrackets(str) {
  const [isCorrect, openCount] = str
    .split('')
    .reduce(([isCorrect, openCount], cur) => (
      cur === '(' 
        ? [isCorrect, openCount + 1]
        : [openCount - 1 >= 0 && isCorrect, openCount - 1]
    ), [true, 0]);

  return isCorrect && openCount === 0;
}
