from random import randint
list1=[]
list2=[]
first,last=1,5
for a in range(5):
    list1.append(randint(first, last-1))
for i in range(first, last):
    list2.append(i)
print(list1)
print(list2)
list3= []
list3=list(set(list2)-set(list1))
print(list3)
