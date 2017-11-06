"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)
"""
def pr(L):
	print L.data,       #prints data in a node
  
def levelOrder(root):
    L = []            #stores nodes to be printed.
    L.append(root)
    while len(L)>0:
        m=L.pop(0)   #current node in use.
        pr(m)        #printed
        if m.left != None:    # check if it is not a leaf node. Then add left and right nodes into L. Thus nodes get added
            L.append(m.left)  # level wise instead of any hierarchy.
        if m.right !=None:
            L.append(m.right)
