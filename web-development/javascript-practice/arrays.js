const fruits = ["Banana", "Orange", "Apple", "Mango"];
console.log(fruits.join(" * "));

fruits.push("Kiwi");
console.log(fruits);

const numbers = [4, 9, 16, 25];
const newArr = numbers.map(Math.sqrt);
console.log(newArr);

const over10 = numbers.filter(n => n > 10);
console.log(over10);
