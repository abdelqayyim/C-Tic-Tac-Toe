import socket
import threading

clients = []
print(f"The initial length is {len(clients)}")
def handle_client(client_socket):
    clients.append(client_socket)
    if len(clients) == 1:
        print(f"Connection from Client #{len(clients)}\nWaiting for Client #2")
    else:
        print(f"Client #{len(clients)} just connect\n Game is about to start")
    
    while True:
        try:
            msg_received = client_socket.recv(1024)
            if not msg_received:   
                print(f"Client #{len(clients)} disconnected from server")
                clients.remove(client_socket)
                break
            msg_received = msg_received.decode()
            print("Client:", msg_received)
            
            for client in clients:
                if client != client_socket:
                    client.send(msg_received.encode())
        except:
            clients.remove(client_socket)
            print("Player has been removed")
            break

    client_socket.close()

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
LOCALHOST = '127.0.0.1'
port = 9990

server_socket.bind((LOCALHOST, port))
server_socket.listen(2)
print("Server started...")

while True:
    client_socket, addr = server_socket.accept()
    client_thread = threading.Thread(target=handle_client, args=(client_socket,))
    client_thread.start()
