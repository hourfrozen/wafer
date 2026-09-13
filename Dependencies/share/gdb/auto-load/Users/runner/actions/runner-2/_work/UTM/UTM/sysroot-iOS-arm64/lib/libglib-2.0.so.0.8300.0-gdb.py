import sys
import gdb

# Update module path.
dir_ = '/Users/runner/actions/runner-2/_work/UTM/UTM/sysroot-iOS-arm64/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from glib_gdb import register
register (gdb.current_objfile ())
