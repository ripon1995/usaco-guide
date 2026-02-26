//------------------------------ Arrow function ------------------------------
const sayHelloJs = () => 'Hello';


const greetPersonJS = (name) => `Hello ${name}`;


const sumOf2Numbers = (a,b=10) => {
    return a + b;
}

const sumOfNNumbers = (...args) => {
    let sum = 0;
    for(let arg of args) {
        sum += arg;
    }
    return sum;
}

console.log(sumOf2Numbers(1,2,3,4,5,6,7));
