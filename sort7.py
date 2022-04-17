def srt(lst):
    for x in range(1,len(lst)):
        s = lst[x]
        x-=1
        while x >= 0 and s < lst[x]:
            lst[x+1]=lst[x]
            x-=1
        x+=1
        lst[x]=s
    return lst

def rt_ch(lst):
    return [chr(x) for x in lst]

lst = [16,32,'A','b',20,12,1,2,'C','l','P','K','n','N','F',29]
char_lst = srt([ord(x) for x in lst if type(x) == str])
lst = srt([x for x in lst if type(x) == int])
cnt_bs = 0

for x in char_lst:
    if x < 97:
        cnt_bs+=1

finall_list = rt_ch(char_lst)[cnt_bs:]+rt_ch(char_lst)[:cnt_bs]+lst
print(finall_list)
