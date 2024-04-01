def ispalindrome(s):
    x=list(s)
    y=[]
    y.extend(x)
    x.reverse()
    if(x==y):
        return True
    return  False
s=input("Enter the string : ")
ans=ispalindrome(s)
if ans:
    print("YES")
else:
    print("NO")