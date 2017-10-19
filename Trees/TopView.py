"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)"""

def prRight(node):                            # For Right Subtree of the Root Node
  if node:
    pr(node)
    prRight(node.right)
    
def pr(node):                                 # For Printing Root Node
  print node.data,
  
def prLeft(node):                             # For Left Subtree of the Root Node
  if node:
    prLeft(node.left)
    pr(node)
    
def topView(root):
  if root.left:                               #If left node is not Empty
    prLeft(root)
  if root.right:                              #If right node is not Empty
    if not(root.left):
      pr(root)                                #So that if the left subtree exists then we must not print the root twice.
    prRight(root.right)
      
