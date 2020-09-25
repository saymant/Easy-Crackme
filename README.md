# Easy Crackme

## Explication
Le programme va juste prendre l'argument qu'on lui donne pour par la suite voir pour chaque lettre si celle-ci est d'ordre pair ou impaire dans le mot que nous avons rentré, si celle-ci est paire elle va être incrémentée, si elle est impaire elle sera decrémentée.

Ensuite les caractères obtenus seront xor avec une clé de 3 pour après être comparée avec la string "ymu]p]a]jcgiercb2{", si notre argument final est égal à cette string nous flaggons, il suffit donc de reimplémenter tout cela à l'envers à l'aide d'un script comme 

```py
string  = "ymu]p]a]jcgiercb2{"

flag = []

for i in range(len(string)):
    flag.append(ord(string[i]) ^ 3)

    if (i % 2) == 1:
        flag[i] += 1
    else:
        flag[i] -= 1

    flag[i] = chr(f[i])

print("flag : ".join(flag))
```
