"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)
"""
def inOrder(N):             
    if N!=None:
        inOrder(N.left)
        pr(N)
        inOrder(N.right)
def pr(N):
    print N.data,
