import socket
import threading

def receive_messages(socket):
    while True:
        msg_received = socket.recv(1024)
        msg_received = msg_received.decode()
        print("Server:", msg_received)
        if msg_received == 'exit':
            break

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
LOCALHOST = '127.0.0.1'
port = 9990

s.connect((LOCALHOST, port))
print("New client created:")

receive_thread = threading.Thread(target=receive_messages, args=(s,))
receive_thread.start()

while True:
    client_message = input("Me: ")
    s.send(client_message.encode())
    if client_message == 'exit':
        break

s.close()
