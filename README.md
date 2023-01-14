# stats

Average and Standard Deviation Calculator
This C++ project allows you to calculate the average and standard deviation of a set of data by prompting the user for inputs from the command line. It is useful for analyzing and comparing various data points, such as the Height, Weight, and Age of people.

Usage
To use this project, you will need to run the program and follow the prompts. The program will ask for the number of data points you wish to input, and then for the values of each data point. The program will then calculate the average and standard deviation of the data set and output the results.

$ ./average_and_std_dev
Example
When running the program, you will be prompted to enter the number of data points, and then the values of each data point. For example:


Enter the number of data points: 3
Enter value for data point 1: 180
Enter value for data point 2: 170
Enter value for data point 3: 190
The program will output the following results:

Average: 180.0
Standard Deviation: 9.16515138991168
Note
This program assumes that the input data is numerical.

It uses the formula for standard deviation which is sqrt( (sum(x^2) - (sum(x)^2/n)) / (n-1) )

Additional functionality
You can also add functionality like handling multiple data sets, handling multiple data types, handling negative numbers and handling non-numeric inputs.

Contribution
If you would like to contribute to this project, please fork the repository and submit a pull request with your changes.
