//------------------------------ Arrow function ------------------------------

const sayHelloTS = () : string => 'Hello';


const greetPersonTS = (name:string) => `Hello ${name}`;

const sumOf2NumbersTs = (a:number, b:number = 10) : number => a + b;

const sumOfNNumbersTS = (...args: number[]) : number => args.reduce((pre, cur) => pre+cur, 0);

console.log(sumOfNNumbersTS(10,20));


