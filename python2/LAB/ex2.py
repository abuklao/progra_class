filename = input("Enter a file name : ")
filo = open(filename,'r')
dicto = dict()
for line in filo:
    if line.startswith("From ") == True:
        hour_value = line.strip().split()[5].split(":")[0]
        dicto[hour_value] = dicto.get(hour_value,0) + 1

temp = list()
for k,v in dicto.items():
    temp.append((v,k))
temp = sorted(temp,reverse=True)
for k,v in temp:
    print(str(k)+" - "+v)
