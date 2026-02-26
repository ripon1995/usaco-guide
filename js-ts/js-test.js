//------------------------------ Basic function ------------------------------
function sayHelloJS() {
    return 'Hello';
}

function greetPersonJS(name) {
    return `Hello ${name}`;
}


function sumOfNNumbers() {
    let sum = 0;
    for (let i=0;i<arguments.length;i++) {
        sum += arguments[i];
    }
    return sum;
}

// default argument
function sumOf2Numbers(a, b=10) {
    return a + b;
}

// rest operator
function sumOfAllNumbers(...args) {
    let sum = 0;
    for (let arg of args) {
        sum += arg;
    }
    return sum;
}

console.log(sumOfAllNumbers(4,9,7,34,4));



