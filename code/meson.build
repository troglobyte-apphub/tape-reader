code_lib = shared_library('code_lib',
    'program.c',
    include_directories: '.',
    install: true)

code_dep = declare_dependency(
    link_with: code_lib,
    include_directories: '.')

executable('prog',
    'main.c',
    dependencies: [code_dep],
    install: true)
