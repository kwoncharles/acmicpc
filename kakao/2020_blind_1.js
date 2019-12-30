/**
 * 
 * 카카오 2020 블라인드 채용 테스트 1번문제
 * : 문자열 압축
 * 
 * https://programmers.co.kr/learn/courses/30/lessons/60057?language=javascript
 * https://tech.kakao.com/2019/10/02/kakao-blind-recruitment-2020-round1/
 * 
 */

function solution(str) {
  const len = str.length;
  let charCount = Math.ceil(str.length / 2);
  let shortestCount = len;

  while (charCount > 0) {
    let idx = 0;
    let curCount = 0;
    while (idx + (2 * charCount) <= len) {
      let cumulatedCount = 0;
      while (
        idx + (2 * charCount) <= len
        && isSameString(
          str.substr(idx, charCount),
          str.substr((idx + charCount), charCount)
        )
      ) {
        cumulatedCount++;
        idx += charCount;
      }

      if (!!cumulatedCount) {
        cumulatedCount++;

        let quotient = 1;
        while (cumulatedCount >= Math.pow(10, quotient)) {
          quotient++;
        }
        curCount += (charCount + quotient);
        idx += charCount;
      } else {
        curCount += charCount;
        idx += charCount;
      }
    }
    if (idx < len) {
      curCount += (len - idx);
    }
    shortestCount = shortestCount < curCount ? shortestCount : curCount;
    charCount--;
  }

  return shortestCount;
}

function isSameString(str1, str2) {
  if (str1.length !== str2.length) {
    return false;
  }

  const len = str1.length;

  for (let i = 0; i < len; i++) {
    if (str1[i] !== str2[i]) {
      return false;
    }
  }
  return true;
}
