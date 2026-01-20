# Activity Diagram

```mermaid
graph TD
    A[Start] --> B{Is Registered?}
    B -- Yes --> C[Login]
    B -- No --> D[Register]
    D --> C
    C --> E[View Dashboard]
    E --> F[End]
```
