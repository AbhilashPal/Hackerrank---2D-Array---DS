"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)
"""
def preOrder(N):             
    if N!=None:
        pr(N)
        preOrder(N.left)
        preOrder(N.right)
def pr(N):
    print N.data,
