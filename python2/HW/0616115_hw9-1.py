#!/bin/python
#add try clause 
filename = input("Please enter your filename\n")
try:
    filo = open(filename)
except IOERROR:
    print("File does not seem to exist.")
for line in filo:
    if(line.startswith("Subject: [sakai] svn commit:")):
        tempo = line.split(':')[2].split('/')[0]
        tempo = tempo.split('-')
        tempo[1] = tempo[1].replace('in','')
        print(tempo[0].strip() + ' ' + tempo[1].strip())
