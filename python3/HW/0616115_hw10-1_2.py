#!/usr/bin/env python3
import urllib.request, urllib.error, urllib.parse

url = input("Please type the desired url\n")
file = urllib.request.urlopen(url)
totalnum = 0

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
