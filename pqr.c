#program to find factors of given number
class factors:
    def __init__(self):   
       n=int(input('enter the number='))
       i=1
       while(i<=n):
         r=n%i
         if r==0: 
           print(i)
         i=i+1
d=factors()


'''
#program to find sum of the factors of given number
class factors:
    def __init__(self):   
       n=int(input('enter the number='))
       i=1
       sum=0
       while(i<n):
         r=n%i
         if r==0:
           sum=sum+i
           print(i)
         i=i+1
       if sum==n:
         print('sum=',sum,'perfect number')
d=factors()

'''
n=int(input('enter the number='))
sum=0
while(n>0):
    
   s=n%10
   n=n//10
   sum=sum+s
print(sum)