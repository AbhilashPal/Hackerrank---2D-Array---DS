"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)
"""
def postOrder(N):             
    if N!=None:
        postOrder(N.left)
        postOrder(N.right)
        pr(N)
def pr(N):
    print N.data,
