import heapq

class Puzzle:
    def _init_(self, board, goal):
        self.board = board
        self.goal = goal
        self.size = len(board)
        self.moves = [(0, -1), (0, 1), (-1, 0), (1, 0)]

    def get_blank_position(self):
        for i in range(self.size):
            for j in range(self.size):
                if self.board[i][j] == 0:
                    return i, j

    def is_valid_move(self, x, y):
        return 0 <= x < self.size and 0 <= y < self.size

    def get_neighbors(self, x, y):
        neighbors = []
        for dx, dy in self.moves:
            nx, ny = x + dx, y + dy
            if self.is_valid_move(nx, ny):
                new_board = [row[:] for row in self.board]
                new_board[x][y], new_board[nx][ny] = new_board[nx][ny], new_board[x][y]
                neighbors.append(new_board)
        return neighbors

    def heuristic(self, board):
        count = 0
        for i in range(self.size):
            for j in range(self.size):
                if board[i][j] != self.goal[i][j]:
                    count += 1
        return count

    def left(self):
        blank_x, blank_y = self.get_blank_position()
        if blank_y > 0:
            self.board[blank_x][blank_y], self.board[blank_x][blank_y - 1] = self.board[blank_x][blank_y - 1], self.board[blank_x][blank_y]
            return True
        return False

    def right(self):
        blank_x, blank_y = self.get_blank_position()
        if blank_y < self.size - 1:
            self.board[blank_x][blank_y], self.board[blank_x][blank_y + 1] = self.board[blank_x][blank_y + 1], self.board[blank_x][blank_y]
            return True
        return False

    def up(self):
        blank_x, blank_y = self.get_blank_position()
        if blank_x > 0:
            self.board[blank_x][blank_y], self.board[blank_x - 1][blank_y] = self.board[blank_x - 1][blank_y], self.board[blank_x][blank_y]
            return True
        return False

    def down(self):
        blank_x, blank_y = self.get_blank_position()
        if blank_x < self.size - 1:
            self.board[blank_x][blank_y], self.board[blank_x + 1][blank_y] = self.board[blank_x + 1][blank_y], self.board[blank_x][blank_y]
            return True
        return False

    def solve(self):
        pq = [(0, 0, self.board)]
        heapq.heapify(pq)
        visited = set()
        while pq:
            _, cost, board = heapq.heappop(pq)
            if board == self.goal:
                return cost
            for move_func in [self.left, self.right, self.up, self.down]:
                if move_func():
                    neighbor_tuple = tuple(map(tuple, self.board))
                    move_func()  # Undo the move
                    if neighbor_tuple not in visited:
                        visited.add(neighbor_tuple)
                        heapq.heappush(pq, (cost + self.heuristic(self.board), cost + 1, [row[:] for row in self.board]))
        return -1

# Example usage:
initial_board = [[1, 2, 3], [4, 5, 6], [7, 8, 0]]
goal_board = [[1, 2, 3], [4, 5, 6], [7, 8, 0]]
puzzle = Puzzle(initial_board, goal_board)
moves = puzzle.solve()
if moves >= 0:
    print(f"Minimum number of moves required to solve the puzzle: {moves}")
else:
    print("No solution exists.")