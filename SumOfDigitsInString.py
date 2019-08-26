def findSum(str1):
    temp=""
    sum=0
    for ch in str1:
        if(ch.isdigit()):
            temp+=ch
        else:
            sum=sum+int(temp)
            temp="0"
    return sum+int(temp)
str1=input("Enter the string:")
print(findSum(str1))

        
