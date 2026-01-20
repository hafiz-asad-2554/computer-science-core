import struct

# Simulated IP Header (hex)
# Version(4), IHL(5), TOS, Total Len, ID, Flags/Frag, TTL, Proto, Checksum, SrcIP, DstIP
dummy_packet = b'\x45\x00\x00\x3c\x1c\x46\x40\x00\x40\x06\xb1\xe6\xc0\xa8\x00\x68\xc0\xa8\x00\x01'

def parse_packet(packet):
    # Unpack first 20 bytes for IPv4 header
    header = struct.unpack('!BBHHHBBH4s4s', packet[:20])
    
    version_ihl = header[0]
    version = version_ihl >> 4
    ihl = version_ihl & 0xF
    
    ttl = header[5]
    protocol = header[6]
    src_ip = socket.inet_ntoa(header[8])
    dst_ip = socket.inet_ntoa(header[9])

    print(f"Version: {version}")
    print(f"Header Length: {ihl * 4} bytes")
    print(f"TTL: {ttl}")
    print(f"Protocol: {protocol}")
    print(f"Source: {src_ip}")
    print(f"Destination: {dst_ip}")

import socket
if __name__ == "__main__":
    try:
        parse_packet(dummy_packet)
    except Exception as e:
        print(f"Parsing error: {e}")
