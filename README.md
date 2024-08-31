# monotonic-regulation

General Explanation
designed to find and display all monotonic regulation conditions from a given table of conditions. The table represents different combinations of activators and inhibitors, and the program checks each combination to determine if it satisfies the monotonic requirement.
How the Program Works
1.	Global Definitions and Table Initialization:
o	The program defines constants ROWS and COLS to represent the number of rows and columns in the table.
o	The MONOTONIC and NOT_MONOTONIC constants are used to represent the monotonic and non-monotonic states.
o	The regulationTable array is initialized globally with the given regulation conditions.
2.	Monotonic Check Function:
o	The checkMonotonic function iterates through each column of a given condition.
o	It checks if the presence of activators and inhibitors does not decrease as we move through the columns.
o	If any decrease is found, the function returns NOT_MONOTONIC; otherwise, it returns MONOTONIC.
3.	Main Function:
o	The main function initializes an array monotonicConditions to store the conditions that are found to be monotonic.
o	It iterates through each row in the regulationTable and uses the checkMonotonic function to determine if the condition is monotonic.
o	If a condition is monotonic, it is stored in the monotonicConditions array.
o	The printMonotonicConditions function is then called to print the stored monotonic conditions in a graphical format.
4.	Printing Function:
o	The printMonotonicConditions function prints a header with an underline.
o	It iterates through the monotonicConditions array and prints each condition in a formatted table with borders.


# HOW TO RUN
Compile the C Code
In the terminal, navigate to the directory where the C file is saved. Then compile the code using GCC:

gcc monotonic_conditions.c -o monotonic_conditions

This command compiles monotonic_conditions.c into an executable named monotonic_conditions.

Run the Program
Execute the compiled program:

./monotonic_conditions

This will run the program and output the monotonic regulation conditions based on the logic you've implemented.

