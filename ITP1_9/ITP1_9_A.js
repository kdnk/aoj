function main(input) {
  let [word, ...rest] = input
    .toLowerCase()
    .split(/\n/)
    .filter(v => !!v);
  rest.pop();
  const ans = rest
    .join(" ")
    .split(" ")
    .filter(w => w === word);
  console.log(ans.length);
}

main(require("fs").readFileSync("/dev/stdin", "utf8"));
