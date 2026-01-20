import socket
import time

def sender():
    sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    sock.settimeout(2)
    server_addr = ('localhost', 10000)
    
    packets = ["Packet 1", "Packet 2", "Packet 3"]
    
    for pkt in packets:
        while True:
            try:
                print(f"Sending {pkt}...")
                sock.sendto(pkt.encode(), server_addr)
                
                ack, _ = sock.recvfrom(1024)
                if ack.decode() == "ACK":
                    print("ACK received.")
                    break
            except socket.timeout:
                print("Timeout! Retransmitting...")
    
    sock.close()

if __name__ == "__main__":
    # Note: Requires a corresponding receiver, but this logic demonstrates reliability
    print("Starting sender (Requires receiver running on 10000)")
    sender()
