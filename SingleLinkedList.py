class Node:
  def __init__(self,data):
    self.data=data
    self.next=None

class ll:
  def __init__(self):
    self.head=None
  def insertatstart(self,data):
    new_node=Node(data)
    if self.head is None:
      self.head=new_node
      return
    else:
      new_node.next=self.head
      self.head=new_node

  def insertatend(self,data):
    new_node=Node(data)
    if self.head is None:
      self.head=new_node
      return
    else:
      temp=self.head
      while temp.next:
        temp=temp.next
      temp.next=new_node

  def insertatpos(self,data,index):
      if index==0:
        self.insertatstart(data)

      position=0
      temp=self.head
      while(temp != None and position+1 != index-1):
        position=position+1
        temp=temp.next

      if temp!=None:
        new_node = Node(data)
        new_node.next = temp.next
        temp.next = new_node
      else:
        print("Index not present")

  def deleteatstart(self):
      if self.head is None:
        print("Empty")
        return
      self.head=self.head.next

  def deleteatend(self):
      if self.head is None:
       print("Empty")
       return
      temp=self.head
      while temp.next.next:
        temp=temp.next
      temp.next=None

  def deleteatpos(self,index):
      if self.head is None:
        print("Empty")

      temp = self.head
      position = 0

      if index == 0:
        self.deleteatstart()
      else:
        while temp != None and position+1 < index - 1:
            position += 1
            temp = temp.next

        if temp is None or temp.next is None:
            print("Index not present")
        else:
            temp.next = temp.next.next

  def display(self):
        temp=self.head
        print("The linked list is ",end="")
        while temp:
          print(temp.data,end=" ")
          temp=temp.next
        print("")

  def min(self):
        if self.head is None:
          print("Empty")
          return

        temp=self.head
        min=temp.data
        while temp:
          if temp.data<min:
            min=temp.data
          temp=temp.next
        print("Minimum is",min)

  def max(self):
        if self.head is None:
          print("Empty")
          return
        temp=self.head
        max=temp.data
        while temp:
          if temp.data>max:
            max=temp.data
          temp=temp.next
        print("Maximmum is",max)

  def reverse(self):
        prev=None
        temp=self.head
        while temp:
          next=temp.next
          temp.next=prev
          prev=temp
          temp=next
        self.head=prev

  def search(self,data):
        temp=self.head
        position=1
        while temp:
          if temp.data==data:
            print("Element is found at",position)
            return
          temp=temp.next
          position=position+1
        print("Element is not present")

s=ll()
s.insertatend(20)
s.insertatend(30)
s.insertatend(40)
s.insertatstart(10)
s.insertatpos(25,3)
s.display()
s.reverse()
s.deleteatpos(5)
s.display()
s.search(40)
s.min()
s.max()



