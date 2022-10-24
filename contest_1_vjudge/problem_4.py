
arr =[];
co = 97
dict_res ={}

input_str = input()
input_str = input_str.split(" ")

t = int(input_str[0])
str = input_str[1]



for i in range (26):
    arr.append(co)
    co +=1

coo = 97
for i in str :
    i_ascii = ord(i)
    dict_res[coo] = i_ascii 
    coo+=1

for i , j in dict_res.items():
    print(i, j)

for i in range(t):
    output =""
    res = input()
    # res = res.lower()
    for j in res :
        flag = False
        if j.isupper():
            flag = True
            # print(j)
            j = j.lower()
            # print(j.islower())

        int_j = ord(j)
        try:
            rep = dict_res[int_j]
            rep = chr(rep)
            if flag :
                new_rep = rep.upper()
                output +=new_rep
                flag = False
            else:
                output+=rep
        except:
            if j == "!":
                output+="!"
            elif j == ".":
                output+="."
            elif j == "?":
                output+="?"
            else:
                output+=" "

    print(output)


    # str = "qwertyuiopasdfghjklzxcvbnm"




