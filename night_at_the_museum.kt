/*

A. Night at the Museum

Grigoriy, like the hero of one famous comedy film, found a job as a night security guard at the museum. At first night he received embosser and was to take stock of the whole exposition.
Embosser is a special devise that allows to "print" the text of a plastic tape. Text is printed sequentially, character by character. The device consists of a wheel with a lowercase English letters written in a circle, static pointer to the current letter and a button that print the chosen letter. At one move it's allowed to rotate the alphabetic wheel one step clockwise or counterclockwise. Initially, static pointer points to letter 'a'. Other letters are located as shown on the picture:


After Grigoriy add new item to the base he has to print its name on the plastic tape and attach it to the corresponding exhibit. It's not required to return the wheel to its initial position with pointer on the letter 'a'.
Our hero is afraid that some exhibits may become alive and start to attack him, so he wants to print the names as fast as possible. Help him, for the given string find the minimum number of rotations of the wheel required to print it.

Input
The only line of input contains the name of some exhibit — the non-empty string consisting of no more than 100 characters. It's guaranteed that the string consists of only lowercase English letters.

Output
Print one integer — the minimum number of rotations of the wheel, required to print the name given in the input.

Examples
inputCopy
zeus
outputCopy
18

*/

fun main() {

    val userInput: String? = readLine()

    if (userInput != null) {
        var start =97
        var step=0

        for (index in userInput.indices) {
            var result =Math.abs( (userInput[index].code ) - start)
            if(result <= 13)
            {
                step +=result
            }else{
                step +=(26-result)
            }
            start = userInput[index].code
        }
        println(step)

    } else {
        println("No input received.")
    }






}