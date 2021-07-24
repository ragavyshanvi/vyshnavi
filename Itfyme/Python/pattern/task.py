f1=open("C:\\ajeyaanna\\t1.txt","r")
f2=open("C:\\ajeyaanna\\t2.txt","r")
cmpf=open("C:\\ajeyaanna\\total.txt","r")
for cmpword in cmpf:
    cnt=0
    for line in f1:
        for word in line.split():

           print("word=",word)
           print("cmpword=",cmpword)

           if(word.upper()=="is"):
                print(cnt)
                # print("word=",word)
                # print("cmpword=",cmpword)
                cnt=cnt+1
    print(cnt)

            