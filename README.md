# Demo example to compile the C API of startin and use it with C++

1. compile startin and its c_interface: `cargo build --features c_api --release`
2. copy the .dylib/.dll/.so (`/target/release/libstartin.dylib`) to here `/dependencies/startin/`
3. `mkdir build && cd build`
4. `cmake ..`
5. `make`

