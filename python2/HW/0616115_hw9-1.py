#!/bin/python
#add try clause 
filename = input("Please enter your filename\n")
try:
    filo = open(filename)
except FileNotFoundError:
    #check for the existance of the file
    print("File does not seem to exist.\nExiting Program...")
    quit()
for line in filo:
    #we go through every line and split according to th epatters that are seen
    if(line.startswith("Subject: [sakai] svn commit:")):
        tempo = line.split(':')[2].split('/')[0]
        tempo = tempo.split('-')
        tempo[1] = tempo[1].replace('in','')
        #we then print the desired values
        print(tempo[0].strip() + ' ' + tempo[1].strip())
