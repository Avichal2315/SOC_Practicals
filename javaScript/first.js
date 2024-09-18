let n=prompt("enter a number");

if(n%2==0)
    {
        console.log("given number is divisible by 2");
    }else if(n%3==0)
        {
            console.log("number is divisible by 3");
        }
        else if(n%5==0)
            {
                console.log("number is divisible by 5");
            }
            else{
                console.log("highly likely to be a prime number");
            }