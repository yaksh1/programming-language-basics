#NOTE
#There are four different modes for opening file:

"r" - "Read - Default value. Opens a file for reading, error if the file does not exist"

"a" - """Append - Opens a file for appending, creates the file if it does not exist

"w" - Write - Opens a file for writing, creates the file if it does not exist

"x" - Create - Creates the specified file, returns an error if the file exists"""

#In addition you can specify if the file should be handled as binary or text mode

""""t" - Text - Default value. Text mode

"b" - Binary - Binary mode (e.g. images)

#NOTE: 'r' and 't' are the default values


#SYNTAX
f = open("demofile.txt", "rt")"""