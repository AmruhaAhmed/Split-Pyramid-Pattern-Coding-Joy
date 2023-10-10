s=7 #for spaces
for i in range (1,8):
  for j in range(1,s):
    print("  ",end="")
  for j in range(1,i):
    print("* ",end="")
  print(" ",end="")
  for j in range(1,i):
    print("* ",end="")
  print("\n")
  s=s-1;
