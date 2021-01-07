import sys 

sys.stdin = open('input.txt', 'r')  
sys.stdout = open('output.txt', 'w') 

for f in range(int(input())):

      count=0
      m,n=[int(i) for i in input().split()]
      a=[int(i) for i in input().split()]
      b=[int(i) for i in input().split()]
      for i in range(len(a)):
           
            a.sort()
            b.sort(reverse=True)
            #print(a,b)
            x=b[0]
            b[0]=a[0]
            a[0]=x
            #print(a,b)
            count+=1
            if(sum(a)>sum(b)):
                  break
      #print(a,b)
      if(sum(a)>sum(b)):
            print(count)
      else:
            print(-1)
