#Problem 141A-Amusing-Joke
#Difficulty: 800
#Topic: Implemetation, sorting, strings

name = input().strip()
residence = input().strip()
pile = input().strip()


if sorted(name + residence) == sorted(pile):
    print('Yes')
else:
    print('No')
