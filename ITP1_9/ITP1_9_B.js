function main(input) {
  input = input.split("\n");
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));

function shuffle(str, h) {
  let str = "abcdefg";
  return str.slice(h) + str.slice(0, h);
}
