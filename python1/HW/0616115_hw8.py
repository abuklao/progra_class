#we get the file name and open the file
filename = input("Please write your filename\n")
file_object = open(filename,"r")
#we declare variable that will help us calculate the average
line_nums = 0
tots = 0
#we loop line by line of the file 
for line in file_object:
    if(line.find("X-DSPAM-Confidence:") >= 0):
        #we split the line by ':'
        floatnum = line.split(":")
        #change values to later calculate average
        line_nums += 1
        tots += float(floatnum[1])
#print values
print("Average spam Confidence is : ")
print(tots/line_nums)


