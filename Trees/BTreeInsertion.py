"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)"""

def insert(r,val):
    newnode = Node(val)           # Create node to be inserted
    if r==None:
        r=newnode                 # If root is empty, insert at root.
    elif r.data>val:
        if r.left == None:
            r.left = newnode      # If data is < i.e goes to left of root. And root.left isn't defined, set it as newnode.
        else:
            insert(r.left,val)    # Else recursively go left.
    else:
        if r.right == None:
            r.right = newnode     # If data is < i.e goes to right of root. And root.right isn't defined, set it as newnode.
        else:
            insert(r.right,val)   # Else recursively go right.
    return r
