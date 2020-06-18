horus_pch = [
    'include/pch.h'
]

horus_src = [
    'src/horus.cpp'
]

horus_inc = include_directories(['include'])

if get_option('library_type') == 'static'
    horus = static_library('horus',
        cpp_pch: horus_pch,
        sources: horus_src,
        include_directories: horus_inc,
        install: true)
else
    horus = shared_library('horus',
        cpp_pch: horus_pch,
        sources: horus_src,
        include_directories: horus_inc,
        install: true)
endif
