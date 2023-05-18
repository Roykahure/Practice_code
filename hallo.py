
# this is a comment
answer = input("what's your name? ")
print(f"helo, {answer}")
try:
    x = int(input("X: "))
except:
    print("No that is not a number")
    exit()
try:
    y = int(input("Y: "))
except:
    print("No that is not a number")
    exit()

print(x + y)
