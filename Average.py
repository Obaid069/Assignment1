number =[]
num_of_element=5
sum=0
for i in range(num_of_element):
    value=int(input("Enter your number"))
    number.append(value)
    sum+=value
average=sum/num_of_element
count=0
for i in range(num_of_element):
    if number[i]>average:
        count+=1
print("The average is:",average)
print("The number of element above the average is:",count)