project('MesonStarter',
  ['cpp'],
  version : '0.0.0',
  license: 'MIT',
  default_options : ['cpp_std=c++2a'])

subdir('horus')
subdir('app')
subdir('tests')

summary({'bindir': get_option('bindir'),
         'libdir': get_option('libdir'),
         'datadir': get_option('datadir'),
        }, section: 'Directories')

summary({'Library Type': get_option('library_type'),
         'Build Tests': get_option('build_tests').enabled()
        }, section: 'Configuration')
