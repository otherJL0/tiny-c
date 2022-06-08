project('nato', 'c',
  version : '0.1',
  default_options : [
    'warning_level=3',
    'werror=true',
    'c_std=c18',
    ])

add_project_arguments('-pedantic',
                      '-pedantic-errors',
                      '-save-temps',
                      '-save-stats',
                      '-ftime-report',
                      language: 'c')

exe = executable('nato', 'nato.c',
  install : true)

test('basic', exe, args: ['hello'])
