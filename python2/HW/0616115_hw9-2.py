#!/usr/bin/python
import math
#this function is always run to check the validity of the input
def filterinput(inputo):
    #the given string is stripped from its parenthesis and then split into three through at the commas
    divider = inputo[1:]
    divider = divider[:-1]
    divider = divider.split(",")
    #we test if the user wrote exit, if so we quit the program and of course let the user know
    if(inputo.lower() == "exit"):
        print("Now exiting...")
        quit()
    #we test that we have all three required arguments
    if(len(divider) !=  3):
        print("The amount of arguments is not three")
        return None
    #we try to conver this values into tuples and if it doesnt work we let the users know
    else:
        try:
            tuplo = (float(divider[0]),float(divider[1]),float(divider[2]))
            return tuplo
        except ValueError:
            print("Please enter a value that corresponds with the requested format")
            return None
#not much to explain on this funciton. we simply add the lengths of both balls and compare with the distance obtained through the use of pythagoras. if the sum of radii is larger we say they collide
def compareinputs(inputo1,inputo2):
    sum_of_radii = inputo1[2] + inputo2[2]
    distance = math.sqrt(((inputo2[0]-inputo1[0])**2)+((inputo2[1]-inputo1[1])**2))
    if(sum_of_radii > distance):
        print("There is a collision!!")
    else:
        print("There is no collision")

#we run this in a loop to make sure it continues asking for inputs
while(True):
    #we state our variables
    tuplo1 = None
    tuplo2 = None
    #these two while loops test for the valiidy of the input and only break when the values are determined safe and  valid
    while(tuplo1 == None):
        tuplo1 = filterinput(input("Enter the first ball (x,y,range) enter \"exit \" to quit the program:\n"))

    while(tuplo2 == None):
        tuplo2 = filterinput(input("Enter the second ball (x,y,range) enter \"exit \" to quit the program:\n"))
    #this function will compare the values and let us know wether they collide or not
    compareinputs(tuplo1,tuplo2)
    print(' ')
