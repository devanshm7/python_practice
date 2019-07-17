#!/usr/bin/python
cho='y'
while cho=='y' or cho=='Y':
 print("\nMenu\n1.Add\n2.Subtract\n3.Multiply\n4.Division")
 ch=int(input("Enter your choice: "))
 if ch<5:
  n1=int(input("Enter first number: "))
  n2=int(input("Enter Second number: "))
  if ch==1:
   n3=n1+n2
   print('=',n3)
  elif ch==2:
   n3=n1-n2
   print('=',n3)
  elif ch==3:
   n3=n1*n2
   print('=',n3)
  elif ch==4:
   n3=n1/n2
   print('=',n3)
 else:
  print("Enter CORRECT choice!")
 cho=str(input("Do you want to continue:"))


