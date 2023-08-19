import socket

def display_board(board):
    for row in board:
        print(" ".join(row))

def main():
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_address = ('127.0.0.1', 12345)
    client_socket.connect(server_address)

    welcome_message = client_socket.recv(1024).decode()
    print(welcome_message)

    while True:
        print(client_socket.recv(1024).decode())
        row, col = map(int, input().split())
        client_socket.send(f"{row} {col}".encode())

        board = client_socket.recv(1024).decode().split("\n")
        board = [row.split() for row in board]

        display_board(board)
        client_socket.send(input("Your move (row and column): ").encode())

        win_message = client_socket.recv(1024).decode()
        print(win_message)
        break

    client_socket.close()

if __name__ == "__main__":
    main()
