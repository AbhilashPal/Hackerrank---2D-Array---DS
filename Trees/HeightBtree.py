# Enter your code here. Read input from STDIN. Print output to STDOUT
'''
class Node:
      def __init__(self,info): 
          self.info = info  
          self.left = None  
          self.right = None 
           

       // this is a node of the tree , which contains info as data, left , right
'''
def height(root):
    if root:
        return 1+max(height(root.left),height(root.right))  # height is defined as -1 when root is None type and                                                                       # otherwise, adds on 
    else:                                                   # the greater of the height of either left or right subtree.
        return -1                                           # returns -1 if root is none type.
