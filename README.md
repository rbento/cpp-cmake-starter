# cpp-cmake-starter
![Build](https://github.com/rbento/cpp-cmake-starter/actions/workflows/cmake-multi-platform.yml/badge.svg)

### About
---

Bare minimal CMake template for C++ projects without any external dependencies.

Automatically includes the required headers while compiling and linking the executable.

### Usage
---

- Update `project_name` in `CMakeLists.txt` and `run.sh`

### Build & Run
---

#### macOS

Includes scripts for cleaning and building the project.

```bash
# Clean
./clean.sh

# Build
./build.sh

# Run
./run.sh
```
<img width="1274" alt="Screenshot 2023-11-16 at 5 03 57 AM" src="https://github.com/rbento/cpp-cmake-starter/assets/1512264/3c65e6d1-2757-4546-8341-034f4fed4137">


#### Windows / Visual Studio

- Open a local folder
- `Project` > `Generate cache for <project-name>`
- Right click a source file in the `Solution Explorer` and `Set as Startup Item`
- Build with `Ctrl+B`
- Debug with `F5`

