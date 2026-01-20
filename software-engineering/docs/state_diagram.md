# State Machine Diagram

```mermaid
stateDiagram-v2
    [*] --> Off
    Off --> On : Turn On
    On --> Off : Turn Off
    On --> Suspend : Idle
    Suspend --> On : Active
```
