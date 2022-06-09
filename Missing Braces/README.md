## Missing Braces
In java ,braces are used to group statements together. Each opening braces "{" should be equals to closing brace "}" otherwise compilation of the code
result in a failure.

Given a piece of code in Java, determine whether the code will give a compilation error due to missing brace(s) or not.

Input format:

input1: a string containing java code

Output format:

Return "error" in case there will be a compilation error due to missing braces(s)

Return "correct" in case there is no such errors

Example 1:

input:

public static void main(String[] args) {

System.out.println("Hello, World!");

       if(true){
       
System.out.print("hello , world!")

   }
  
output: error

Example 2:

input:

for(int counter = 0; counter < 10; counter++) {

    System.out.print("Value of counter is: " + counter);
    
}

output: correct

Explanation:
There is the compilation error int the given code as the brace for the if statement is missing.
