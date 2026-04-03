# Driver Viewer

A minimal Windows utility for listing all loaded kernel-mode drivers.



## Requirements

| Requirement | Details |
|---|---|
| OS | Windows XP and above |
| Compiler | Visual Studio 2017+ (MSVC) |
| SDK | Windows SDK |
| Privileges | **Administrator** required |

## Build
 
### Via Visual Studio
 
Open the solution, set the configuration to `Release x64`, and press **Ctrl+B**.  
Make sure `psapi.lib` is linked.

## Usage
 
Run the compiled binary **as Administrator**:

```
driverlist.exe  
```
### Example output

<img width="409" height="562" alt="screen" src="https://github.com/user-attachments/assets/a4a1d799-ce51-4fbb-bf6f-a0a7e5819fa7" />

## Notes
 
Must be run as **Administrator**  

## License
 
MIT — free to use, modify, and distribute.
