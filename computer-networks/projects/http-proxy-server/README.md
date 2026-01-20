# HTTP Proxy Server

A simple proxy that forwards requests.

## Logic

1. Listen on port 8888.
2. Receive GET request.
3. Fetch URL content using `requests`.
4. Send back to client.
