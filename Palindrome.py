#!/usr/bin/python
def rev(self):
 return self[::-1]

a=str(input("Enter (Number/String): "))
b=[]
for ch in a:
 b=rev(a)

if a==b:
 print("Yes! It is a Palindrome")
else: 
 print("Not a Palindrome")



