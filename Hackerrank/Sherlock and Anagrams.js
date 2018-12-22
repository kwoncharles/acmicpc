"use strict";

// Complete the sherlockAndAnagrams function below.
function sherlockAndAnagrams(s) {
  const charDic = {};
  const len = s.length;
  let numOfAnagram = 0;

  for (let i = 1; i <= len; i++) {
    for (let j = 0; j < len - (i - 1); j++) {
      const value = s
        .slice(j, j + i)
        .split("")
        .sort()
        .join()
        .replace(/,/gi, "");
      if (!charDic[value]) charDic[value] = 0;
      charDic[value]++;
    }
  }

  for (let key in charDic) {
    if (charDic[key] > 1)
      numOfAnagram += (charDic[key] * (charDic[key] - 1)) / 2;
  }

  return numOfAnagram;
}

function sortAndCompTwoStr(str1, str2) {
  return (
    str1
      .split("")
      .sort()
      .join() ==
    str2
      .split("")
      .sort()
      .join()
  );
}

const hey = sherlockAndAnagrams("kkkk");
console.log(hey);
