
# s="abes engineering colege"
# p=s.split()
# print(p)

# s=input("Enter some string")
# s1=s2=output=""
# for x in s:
#     if x.isalpha():
#         s1=s1+x
#     else:
#      s2=s2+x
#      print(s1)
#      print(s2)
#      for x in sorted(s1):
#         output=output+x
#         for x in sorted(s2):
#             output=output+x
#             print(output)



# s=input("Enter some string")
# output=""
# for x in s :
#     if x.isalpha ():
#        output=output+x
#        prev=x
#     else :
#      output=output+prev(int(x)-1)  


s=input("Enter some string")
output=""
for x in s:
    if x.isalpha():
        output=output+x
        prev=x
    else:
      newchar=chr(ord(prev)+int(x))
      output=output+newchar 
      print(output)           