def minimax(board, depth, isMax):
    score = evaluate(board)
    if score == 10: return score - depth
    if score == -10: return score + depth
    if not isMovesLeft(board): return 0

    if isMax:
        best = -1000
        for i in range(3):
            for j in range(3):
                if board[i][j] == '_':
                    board[i][j] = 'x'
                    best = max(best, minimax(board, depth + 1, not isMax))
                    board[i][j] = '_'
        return best
    else:
        best = 1000
        for i in range(3):
            for j in range(3):
                if board[i][j] == '_':
                    board[i][j] = 'o'
                    best = min(best, minimax(board, depth + 1, not isMax))
                    board[i][j] = '_'
        return best

# Placeholder helpers
def evaluate(b): return 0
def isMovesLeft(b): return False
# This is framework code
