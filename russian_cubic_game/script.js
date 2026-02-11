const canvas = document.getElementById('gameCanvas');
const ctx = canvas.getContext('2d');
const scale = 30;
const rows = canvas.height / scale;
const columns = canvas.width / scale;

let board = [];
let score = 0;
let piece;
let gameOver = false;

// Initialize game board
function initBoard() {
    for (let r = 0; r < rows; r++) {
        board[r] = [];
        for (let c = 0; c < columns; c++) {
            board[r][c] = 0;
        }
    }
}

// Piece definitions
const pieces = [
    [[1, 1], [1, 1]], // Square
    [[1, 1, 1, 1]],   // Line
    [[1, 1, 1], [0, 1, 0]], // T-shape
    [[1, 1, 0], [0, 1, 1]], // Z-shape
    [[0, 1, 1], [1, 1, 0]]  // S-shape
];

// Create new piece
function newPiece() {
    const random = Math.floor(Math.random() * pieces.length);
    piece = {
        shape: pieces[random],
        x: Math.floor(columns / 2) - 1,
        y: 0
    };
}

// Draw piece
function drawPiece() {
    piece.shape.forEach((row, y) => {
        row.forEach((value, x) => {
            if (value) {
                ctx.fillStyle = '#1abc9c';
                ctx.fillRect((piece.x + x) * scale, (piece.y + y) * scale, scale, scale);
                ctx.strokeStyle = '#16a085';
                ctx.strokeRect((piece.x + x) * scale, (piece.y + y) * scale, scale, scale);
            }
        });
    });
}

// Draw board
function drawBoard() {
    board.forEach((row, y) => {
        row.forEach((value, x) => {
            if (value) {
                ctx.fillStyle = '#3498db';
                ctx.fillRect(x * scale, y * scale, scale, scale);
                ctx.strokeStyle = '#2980b9';
                ctx.strokeRect(x * scale, y * scale, scale, scale);
            }
        });
    });
}

// Collision detection
function collide() {
    for (let y = 0; y < piece.shape.length; y++) {
        for (let x = 0; x < piece.shape[y].length; x++) {
            if (piece.shape[y][x] &&
                (board[piece.y + y] && board[piece.y + y][piece.x + x]) !== 0) {
                return true;
            }
        }
    }
    return false;
}

// Lock piece
function lockPiece() {
    piece.shape.forEach((row, y) => {
        row.forEach((value, x) => {
            if (value) {
                board[piece.y + y][piece.x + x] = value;
            }
        });
    });
}

// Clear full lines
function clearLines() {
    let linesCleared = 0;
    for (let y = rows - 1; y >= 0; y--) {
        if (board[y].every(cell => cell)) {
            board.splice(y, 1);
            board.unshift(new Array(columns).fill(0));
            linesCleared++;
        }
    }
    if (linesCleared > 0) {
        score += linesCleared * 100;
        document.getElementById('score').innerText = score;
    }
}

// Move piece down
function drop() {
    if (!gameOver) {
        piece.y++;
        if (collide()) {
            piece.y--;
            lockPiece();
            clearLines();
            if (piece.y === 0) {
                gameOver = true;
                alert('Game Over!');
            } else {
                newPiece();
            }
        }
    }
}

// Move piece left/right
function move(dir) {
    piece.x += dir;
    if (collide()) {
        piece.x -= dir;
    }
}

// Rotate piece
function rotate() {
    const prevShape = piece.shape;
    piece.shape = piece.shape[0].map((val, index) => 
        piece.shape.map(row => row[index]).reverse()
    );
    if (collide()) {
        piece.shape = prevShape;
    }
}

// Handle keyboard input
document.addEventListener('keydown', event => {
    if (gameOver) return;
    
    switch(event.key) {
        case 'ArrowLeft':
            move(-1);
            break;
        case 'ArrowRight':
            move(1);
            break;
        case 'ArrowDown':
            drop();
            break;
        case 'ArrowUp':
            rotate();
            break;
    }
});

// Game loop
function update() {
    ctx.clearRect(0, 0, canvas.width, canvas.height);
    drawBoard();
    drawPiece();
    if (!gameOver) {
        requestAnimationFrame(update);
    }
}

// Start game
initBoard();
newPiece();
update();
setInterval(drop, 1000);
