"use strict";

// Complete the twoStrings function below.
function twoStrings(s1, s2) {
  const strLen = s1.length;

  for (let i = 0; i < strLen; i++) {
    if (s2.indexOf(s1[i]) !== -1) return "YES";
  }

  return "NO";
}

console.log(twoStrings("elilo", "hi"));
