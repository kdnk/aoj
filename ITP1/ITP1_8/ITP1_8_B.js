function main(input) {
  const strList = input.split("\n").filter(v => v != "");
  strList.pop();
  const ans = strList
    .map(str => {
      return sumChar(str);
    })
    .join("\n");
  console.log(ans);
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));

function sumChar(str) {
  const chars = str.split("");
  const sum = chars.reduce((memo, value) => {
    memo += Number(value);
    return memo;
  }, 0);
  return sum;
}
