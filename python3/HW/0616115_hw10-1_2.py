#!/usr/bin/env python3
import urllib.request, urllib.error, urllib.parse

#get hyour input
url = input("Please type the desired url\n")
#try if it works or not
try:
    file = urllib.request.urlopen(url)
except Exception as e:
    print("Could not connect because : "+str(e))
    quit()
totalnum = 0
#decode line by line countin th e number of chars at every line. when th enumber hits 3000 it will stop display the characters
for line in file:
    line = line.decode()
    cnum = len(line)
    if totalnum <= 3000:
        #print("Totalnum : "+str(totalnum)+"\nCnum : "+str(cnum))
        if (totalnum + cnum) > 3000:
            difference = 3000 - totalnum
            print(line[:difference],end='')
            print("\nReached 3000 characters",end='\n')
        else:
            print(line,end='')
        #print(totalnum)
    
    totalnum = totalnum + cnum
print("The total amount of characters in the file is : "+str(totalnum),end='\n')
