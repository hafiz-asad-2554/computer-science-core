import socket
import threading

def handle_client(client_socket):
    request = client_socket.recv(4096)
    print(f"Received request: {request.decode()[:50]}...")
    
    # In a real proxy, we parse the request to find the destination.
    # Here we just mock a response.
    
    response = b"HTTP/1.1 200 OK\r\n\r\nHello from Proxy! (Real proxying needs parsing)"
    
    client_socket.send(response)
    client_socket.close()

def main():
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server.bind(('0.0.0.0', 8888))
    server.listen(5)
    print("Proxy listening on port 8888")
    
    while True:
        client, addr = server.accept()
        threading.Thread(target=handle_client, args=(client,)).start()

if __name__ == "__main__":
    main()
