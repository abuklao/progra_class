#!/usr/bin/python

dicto = dict()
def combine_lists(names,ages):
    for index,age in enumerate(ages):
        dicto[names[index]] = age
        
def people(age):
    names = list()
    for k,v in dicto.items():
        if v == age:
            names.append(k)
    return names
#names
NAMES = ['Alice','Bob','Cathy', 'Dan', 'Ed', 'Frank', 'Gary', 'Helen', 'Irene', 'Jack', 'Kelly', 'Larry']
AGES = [20, 21, 18, 18, 19, 20, 20, 19, 19, 19, 22, 19]

combine_lists(NAMES,AGES)
ageg = int(input("Please tell me what age group you want : \n"))
print("This are the people you are looking for")
nameg= people(ageg)
for name in nameg:
    print(name)
