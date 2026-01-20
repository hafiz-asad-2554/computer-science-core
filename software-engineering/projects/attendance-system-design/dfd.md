# Data Flow Diagram (Level 0)

```mermaid
graph LR
    Student -->|Biometric Data| System
    System -->|Attendance Record| Database
    System -->|Notification| SMS_Gateway
    Admin -->|Report Request| System
    System -->|Monthly Report| Admin
```
