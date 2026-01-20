# Psuedocode-like implementation
def alpha_beta(node, depth, alpha, beta, isMax):
    if depth == 0: return 0
    
    if isMax:
        v = -1000
        for child in node.children():
            v = max(v, alpha_beta(child, depth-1, alpha, beta, False))
            alpha = max(alpha, v)
            if beta <= alpha: break # Beta prune
        return v
    else:
        v = 1000
        for child in node.children():
            v = min(v, alpha_beta(child, depth-1, alpha, beta, True))
            beta = min(beta, v)
            if beta <= alpha: break # Alpha prune
        return v
