# TCS Coding September 2021
Coding Questions asked in TCS NQT September 2021

Language : C++

<b>Problem 1 :</b>

Problem Statement – An automobile company manufactures both a two wheeler (TW) and a four wheeler (FW). A company manager wants to make the production of both types of vehicle according to the given data below:

    1st data, Total number of vehicle (two-wheeler + four-wheeler)=v
    2nd data, Total number of wheels = W

 

The task is to find how many two-wheelers as well as four-wheelers need to manufacture as per the given data.

 

Example :

Input :

    200  // Value of V
    540  // Value of W

Output :

    TW = 130 FW = 70

 

Explanation:

130+70 = 200 vehicles

(70 x 4)+(130 x 2)= 540 wheels

 

Constraints :

    2<=W
    W%2=0
    V<W

 

Print “INVALID INPUT” , if inputs did not meet the constraints.

The input format for testing 

The candidate has to write the code to accept two positive numbers separated by a new line.

    First Input line – Accept value of V.
    Second Input line- Accept value for W.

 

The output format for testing 

    Written program code should generate two outputs, each separated by a single space character(see the example)
    Additional messages in the output will result in the failure of test case
    
    
<b> Problem 2: </b>

Problem Statement – Given a string S(input consisting) of ‘*’ and ‘#’. The length of the string is variable. The task is to find the minimum number of ‘*’ or ‘#’ to make it a valid string. The string is considered valid if the number of ‘*’ and ‘#’ are equal. The ‘*’ and ‘#’ can be at any position in the string.

Note : The output will be a positive or negative integer based on number of ‘*’ and ‘#’ in the input string.

(*>#): positive integer
(#>*): negative integer
(#=*): 0

Example :

    Input :

    ###***   -> Value of S

    Output :

    0 → number of * and # are equal
