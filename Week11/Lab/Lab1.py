stringo = input("Enter your number : \n")
inputo = []
total = 0
while(stringo != "Done"):
    inputo.append(stringo)
    stringo = input("Enter your number : \n")
for x in stringo:
    x = int(x)
    total = total + x
print(total)


