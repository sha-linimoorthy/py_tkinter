text = input()
a = [ord(character) for character in text]
a1=' '.join(map(str,a))
print(a1)




# You are using Python
text = input()
a = [ord(character) for character in text]
le=len(a)
a3=[96]*le
sub=list()
for i,j in zip(a,a3):
    sub.append(i -j)
for i in sub:
    if(i>0):
        sub1=sub
a1=' '.join(map(str,sub1))
print(a1)




