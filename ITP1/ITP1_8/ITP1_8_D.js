function main(input) {
  const [a, b] = input.split("\n");
  const str = a + a;
  console.log(str.includes(b) ? "Yes" : "No");
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));
