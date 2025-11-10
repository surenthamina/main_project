user=input("Enter Your Name")
text = input("Enter your text: ")
a=len(text)

alphabets=0
digits=0

for char in text:
    if char.isalpha():
        alphabets += 1
    elif char.isdigit():
        digits += 1

count1=0
count2=0
for i in text:
      if(i.islower()):
            count1=count1+1
      elif(i.isupper()):
            count2=count2+1

characters_to_count = "~!@#$%^&*()_+"
count3 = sum(text.count(ch) for ch in characters_to_count)


if user==text:
    print("Password cann't use same as user")
elif a<12:
    print("Password must be Minimum 12 Character")
elif count3== 0:
    print("Password must use inclue Symbol too")
elif a >= 12 and alphabets > 2 and digits>2 and count1>=1 and count2>=1 and count3>0:
    print("Welcome to", user)
    print("Password Strength: Strong")
elif a >= 8 and (alphabets > 2 or digits>2) and(count1>=1 or count2>=1) and count3>0:
    print("Welcome to", user)
    print("Password Strength: Medium")
else:
    print("Welcome to", user)
    print("Password Strength: Weak")


