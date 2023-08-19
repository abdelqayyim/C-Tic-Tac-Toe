import socket
import threading

def display_board(board):
    for row in board:
        print(" ".join(row))

# Other functions (check_winner, main) remain the same

def handle_client(client_socket, player):
    while True:
        try:
            if player == 1:
                client_socket.send("You are Player 1. Waiting for Player 2 to connect...\n".encode())
            else:
                client_socket.send("You are Player 2. The game is starting!\n".encode())

            # Handle the player's move and update the board
            pass

        except Exception as e:
            print(f"Error with Player {player}: {e}")
            break
    client_socket.close()

def main():
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_address = ('127.0.0.1', 12345)
    server_socket.bind(server_address)
    server_socket.listen(2)  # Listen for two players

    print("Server listening on", server_address)

    player = 1
    player_sockets = []

    while True:
        client_socket, client_address = server_socket.accept()

        print("Connection from", client_address)
        player_sockets.append(client_socket)

        threading.Thread(target=handle_client, args=(client_socket, player)).start()

        player += 1
        if player > 2:
            print("Both players connected")
            break  # Both players connected

    for thread in threading.enumerate():
        if thread != threading.current_thread():
            thread.join()

    print("Both players connected. Starting game...")

if __name__ == "__main__":
    main()
