def valid(f):
    
    bracket = {'}':'{',')':'(',']':'['}
    tack=[]
    
    for char in f:
        if char in bracket:
            top_element=tack.pop() if tack else '#'
            if bracket[char]!=top_element:
                return False
                
        else:
            tack.append(char)
            
            
    return not tack
    
f='}()()()()()[][][][]'
print(valid(f))
