
print("Hello! thank you for using my calculator :D")
a = int(input("Gimme a number : "))
b = int(input("Gimme another number : "))
c = input("Select any operator : ")
if (c == '+'):
    print("Answer : ", (a+b))

elif (c == '-'):
    print("Answer : ", (a-b))

elif (c == '*'):
    print("Answer : ", (a*b))

elif (c == '%'):
    print("Answer : ", (a % b))

else:
    print("Answer : ", a**b)
