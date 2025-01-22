class Minstack:
    def _init_(self):
        self.stack=[]
        self.min_stack=[]
    def push(self,x):
        self.stack.append(x)
        if not self.min_stack or x<=self.min_stack[-1]:
            self.min_stack.append(x)
            
    def pop(self):
        if self.stack:
            popped=self.stack.pop()
        if popped==self.min_stack[-1]:
            self.min_stack.pop()
            
    def top(self):
        if self.stack:
            return self.stack[-1]
            
        return None
    
    def getmin(self):
        if self.min_stack:
            return self.min_stack[-1]
            
        return None
        
minstack=Minstack()
minstack.push(3)
minstack.push(5)
print(minstack.getmin())
print(minstack.top())
minstack.pop()
print(minstack.top())
