//#Config:aarch64-branch-thunk
//#LinkerDriver:gcc
//#CompArgs:-O0
//#LinkArgs:-Wl,-z,now -Wl,--section-start=.foo=0x20000000 -no-pie
//#DiffEnabled:false
//#Arch:aarch64

__attribute__((section(".foo"), noinline)) int foo(void) { return 5; }

int main(void) { return foo() == 5 ? 42 : 1; }
