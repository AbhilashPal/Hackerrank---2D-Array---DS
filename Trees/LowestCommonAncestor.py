"""
Node is defined as
self.left (the left child of the node)
self.right (the right child of the node)
self.data (the value of the node)
"""
def lca(root , v1 , v2):
    if root.data > v1 and root.data > v2:       # The required root will always be in the middle of v1 and v2, having an intermediate 
        return lca(root.left,v1,v2)             # value, thus if root is not between them we go to the direction they are in, left if root
    elif root.data<v1 and root.data<v2:         # if > v1,v2 and right if it is < v1,v2.
        return lca(root.right,v1,v2)
    else:                                       # When we can't go any further, we have reached the lowest common ancestor and we return it.
        return root                             # This will work if a LCA exists. Else, it will fail.
