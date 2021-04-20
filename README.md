# Exam 2

## Rules of Behavior
1. Do not communicate with anyone during the exam (no email, no social media, no texting, no phones, no talking, no passing notes, no internet communicating).  If there is any evidence of communicating with anyone during the exam you will receive a zero.
1. You **must** turn off your cell phone and store it away.
1. Your submission **must** be solely you own work without the assistance of anyone by any means.
1. All programming code **must** be written in C++.
1. You **must** use Tuffix to compile your program.
1. All your code **must** be pushed to Github by **9:50 p.m. today**.  Any submissions after that time will not be considered.
1. You may use your book.
1. You may use the Internet as a **reference only**.
1. If you have questions, raise your hand in Zoom, **DO NOT USE YOUR MICROPHONE DURING THE EXAM**.

## Getting Started
1. Open the Terminal program in Tuffix.
1. Change the present working directory to the `Documents` directory by typing the following command at the command prompt:

    ```
    cd Documents
    ```

1. Make a copy of this Github repository on your computer using the `git` and `clone` commands that you will input to the terminal. The commands take a URL as a parameter to specify where it can get a copy of the repository. You can find the URL by clicking on the green *Clone or download* button at the top right part of this page. Copy the URL and replace the example text shown below. Note that `username` should be replaced with your own Github username. When you hit <kbd>Enter</kbd> it will ask you to provide your Github username and password. Once done, you will have a copy of the repository on your computer.
    ```
    git clone https://github.com/CSUF-CPSC121-STMAY-2021S/exam02-username.git
    ```
1. Navigate into the new directory using the command line. Note that `username` should be replaced with your own Github username.  As a shortcut, you can type the first few letters of the folder name and press <kbd>Tab</kbd> so that it auto completes the folder name for you.

     ```
     cd exam02-username
     ```
     
## Instructions
1. Title Comment Block
     1. Create your source code file named `main.cpp`, and at the very top of the source code use three one line comments to document your name, date, and the exercise, using the following format:
          <pre>Name: <i>Stephen May</i><br>Date: 04/16/2021<br>Exercise: Exam02 Solution</pre>

1. Write a C++ program that performs as a Tuffy Titan Roster Program which simply prompts the user to enter a new name for the roster, and then after the users enters a new name the program lists the contents of the roster in alphabetical order.

1. Your Roster class should meet the following requirements:
     1. Declare a `Roster` class in a specification file named `roster.hpp`.
     1. Define all member functions that are not inline member functions in an implementation file named `roster.cpp`.
     1. Declare a constructor member function that initializes a member variable to zero which will keep track of the number of elements in a dynamically allocated array, and initializes a member variable string pointer to the null pointer.
     1. Declare a public member function named `addName` which takes a string name and adds it to an array of strings and sorts the array in ascending order.  Your class should implement dynamic memory allocation to accommodate any size array.  Since this function would be increasing the array size by one, your class would most likely follow the below steps:
          1. dynamically allocate a temporary array with the increased size
          1. copy the contents from the array pointed to by the member variable string pointer to the temporary array
          1. add the new data to the temporary array
          1. delete the memory associated with the array pointed to by the member variable string pointer
          1. assign the temporary array to the member variable string pointer
          1. increase the number of elements member variable
          1. sort the array pointed to by the member variable string pointer
     1. Declare a public member function named `getCount` to return the number of array elements.
     1. Declare a public member function named `getName` to return the name given an element number.  The function should return an empty string if the element number given is larger than the number of elements in the array.
     1. Declare a destructor member function that deletes the memory associated with the array of strings.

1. Compile the file using the command below. The `-std` option tells the compiler that it will use C++ version 17 standards and the `-o main` option tells the compiler to place the executable code into a file called `main`.

    ```
    clang++ -std=c++17 main.cpp roster.cpp -o main
    ```
1. Run the program using the command below and repeat the steps above until you are satisfied your program output meets the above requirements.  I strongly suggest that you run your program using each of the sample outputs below and ensure that all blank lines and new lines are exactly as below.  Note that there are 2 blank lines between amount inserted and the dispensed or error output.

    ```
    ./main
    ```


1. Typical input and output for the program:
     ```
    *** TUFFY TITAN ROSTER PROGRAM ***

    Enter new name or 'exit': Richard Stallman

    Current Roster:
       Richard Stallman

    Enter new name or 'exit': Bill Gates

    Current Roster:
       Bill Gates
       Richard Stallman

    Enter new name or 'exit': Steve Jobs

    Current Roster:
       Bill Gates
       Richard Stallman
       Steve Jobs

    Enter new name or 'exit': Dennis Ritchie

    Current Roster:
       Bill Gates
       Dennis Ritchie
       Richard Stallman
       Steve Jobs

    Enter new name or 'exit': Alan Turing

    Current Roster:
       Alan Turing
       Bill Gates
       Dennis Ritchie
       Richard Stallman
       Steve Jobs

    Enter new name or 'exit': exit
     ```

1. Run the unit testing program to ensure that your program runs as expected using predefined user input.

    ```
    make test
    ```
    
    <i>Note: You will be prompted to install the cmake program the first time you run the make test command on the device you are working on.  Answer `Yes` to install the program, and you will need to enter the Tuffix superuser (sudo) password, which should be `student`. After you have installed the cmake program, run the `make test` command again.</i>
    
    The unit testing will output the results of a series of tests using specific input and expected output.  Any error will stop the unit testing and will provide information on where the expected output is different from the actual output.  You will need to edit your source code to fix the error, recompile your program, and run `make test` repeatedly until it passes all the test.

## Submission
Periodically throughout the exercise, and when you have completed the exercise, **submit the complete repository to Github**.

   <pre>git add .<br>git commit -m "<i>your comment</i>"<br>git push</pre>

In case it asks you  to configure global variables for an email and name, just copy the commands it provides then replace the dummy text with your email and Github username.

   <pre>git config --global user.email "<i>tuffy@csu.fullerton.edu</i>"<br>git config --global user.name "<i>Tuffy Titan</i>"<br>git commit -m "<i>your comment</i>"<br>git push</pre>

When you completed the final Github push, go back into github.com through the browser interface and ensure all your files have been correctly updated.  You should have the following files:
    <pre>main.cpp<br>main<br>roster.hpp<br>roster.cpp<br>unittest.xml (in the test folder)</pre>
    
## Grading
1. All points add up to a total of 100 points possible as detailed below.  Partial credit will be given where applicable.

| Points | Description |
| --- | --- |
|50|initial git clone of this repository to your Tuffix machine|
|5|main.cpp file submitted contains the main program structure and meets the program requirements|
|5|main executable file submitted runs without crashing|
|10|roster.hpp file submitted contains the Roster class declaration and meets the program requirements|
|10|roster.cpp file submitted contains the Roster class member functions and meets the program requirements|
|20|unit testing results submitted pass each test|
