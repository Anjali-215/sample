
'''tuple1=(1,2,3,4)
tuple2=(2,34)
tuple3=tuple1+tuple2
print("concatenated tuple:",tuple3)


#nested tuple
#slicing of tuple
#lenghth of tuple
fruits=('apple','banana','cherry','date')
repeatfruit=fruits*3
print(repeatfruit)
fruit1=fruits[0]
fruit2=fruits[1]
fruit3=fruits[2]
print(fruit1)
print(fruit2)
print(fruit3)
is_apple='apple' in fruits
print("apple in is:",is_apple)'''


'''#control statements
a=20
b=10
if(a>b):
  print("a is the larger one")
  print(b,"b is smaller than",a)
if(a==b):
 print(a,"=",b)
else:
 print(a,"!=",b)

if(a<0) :
 print("neg")
elif(a>0) :
 print("positive")
else :
    print("zeroooo")

#range function
print(list(range(10)))
print(list(range(15,20)))
print(list(range(25,30,2)))''


for i in range(10):
    print(i)

oddnum=list(range(1,50,2))
print(oddnum)
sum=0
for i in oddnum:
    sum =sum+i
print("sum",sum)
 
for i in 'sunshine':
    print("give me a",i)


#print prgm to print factors of a number

x=int(input("enter num "))
for j in range(1,x+1):
    if(x %j == 0):
        print(j)'''



dict={1:'name',2:'rollno'}
print(dict[1])
