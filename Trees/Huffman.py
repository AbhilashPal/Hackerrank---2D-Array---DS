"""class Node:
    def __init__(self, freq,data):
        self.freq= freq
        self.data=data
        self.left = None
        self.right = None
"""        

# Enter your code here. Read input from STDIN. Print output to STDOUT
def isleaf(node):
    if node.left==None and node.right==None:
        return True
    else:
        return False
def decodeHuff(root , s):
    # The root is root
    # The string is s
    # The decoded string is Ds
    Ds = ""
    current_node = root
    for i in s:
        if i=='1':
            current_node = current_node.right         
        else:
            current_node = current_node.left        
        if isleaf(current_node):
            Ds+=current_node.data
            current_node=root
    print Ds
        
