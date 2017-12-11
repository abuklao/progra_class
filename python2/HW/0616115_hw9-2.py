#!/usr/bin/python
import math
def filterinput(inputo):
    divider = inputo[1:]
    divider = divider[:-1]
    divider = divider.split(",")
    if(inputo.lower() == "exit"):
        print("Now exiting...")
        quit()
    if(len(divider) !=  3):
        print("The amount of arguments is not three")
        return None
    else:
        try:
            tuplo = (float(divider[0]),float(divider[1]),float(divider[2]))
            return tuplo
        except ValueError:
            print("Please enter a value that corresponds with the requested format")
            return None

def compareinputs(inputo1,inputo2):
    sum_of_radii = inputo1[2] + inputo2[2]
    distance = math.sqrt(((inputo2[0]-inputo1[0])**2)+((inputo2[1]-inputo1[1])**2))
    if(sum_of_radii > distance):
        print("There is a collision!!")
    else:
        print("There is no collision")


while(True):
    tuplo1 = None
    tuplo2 = None
    while(tuplo1 == None):
        tuplo1 = filterinput(input("Enter the first ball (x,y,range) enter \"exit \" to quit the program:\n"))

    while(tuplo2 == None):
        tuplo2 = filterinput(input("Enter the second ball (x,y,range) enter \"exit \" to quit the program:\n"))
    compareinputs(tuplo1,tuplo2)
    print(' ')
