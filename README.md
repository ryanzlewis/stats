# Average and Standard Deviation Calculator

This C++ project allows you to calculate the average and standard deviation of a set of data by prompting the user for inputs from the command line. It is useful for analyzing and comparing various data points, such as the Height, Weight, and Age of people.

## Usage
To use this project, you will need to run the program and follow the prompts. The program will ask for the number of data points you wish to input, and then for the values of each data point. The program will then calculate the average and standard deviation of the data set and output the results.

$ ./main.exe
## Example
When running the program, you will be prompted to enter the number of data points, and then the values of each data point. For example:

Specify how many People/Things you want to compare:
2
Enter name # 1
John
Enter name # 2
Bill
Enter characteristic # 1of 3
Height
Enter characteristic # 2of 3
Weight
Enter characteristic # 3of 3
Age
Enter John's Height
74
Enter John's Weight
198
Enter John's Age
55
Enter Bill's Height
71
Enter Bill's Weight
155
Enter Bill's Age
24

         Height  Weight  Age
AVERAGES: 72.5    176.5   39.5
STD_DEV: 1.06066 15.2028 10.9602

Note
This program assumes that the input data is numerical.

It uses the formula for standard deviation which is sqrt( (sum(x^2) - (sum(x)^2/n)) / (n-1) )

### Additional functionality
You can also add functionality like handling multiple data sets, handling multiple data types, handling negative numbers and handling non-numeric inputs.

### Contribution
If you would like to contribute to this project, please fork the repository and submit a pull request with your changes.
