# Deployment Diagram

```mermaid
graph TD
    subgraph Server
    A[Web Server] -- HTTP --> B[App Server]
    B -- SQL --> C[Database]
    end
    subgraph Client
    D[Browser] -- Internet --> A
    end
```
