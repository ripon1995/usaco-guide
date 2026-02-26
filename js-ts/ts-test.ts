//------------------------------ Basic function ------------------------------
function sayHello() : string {
    return 'Hello';
}

function greetPerson(name:string) : string {
    return `Hello ${name}`;
}


function sumOf2NumbersTS(a:number, b:number = 10) {
    return a + b;
}


function sumOfAllNumbersTS(...args:number[]): number {
    let sum = 0;
    for (let i=0;i<args.length;i++) {
        sum += args[i];
    }
    return sum;
}
console.log(sumOf2NumbersTS(1,2));
