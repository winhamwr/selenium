#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Copyright 2008-2009 WebDriver committers
# Copyright 2008-2009 Google Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

from setuptools import setup, find_packages
from setuptools.command.install import install

from os.path import dirname, join
import codecs
import re
import sys

import selenium

def setup_python3():
    # Taken from "distribute" setup.py
    from distutils.filelist import FileList
    from distutils import dir_util, file_util, util, log

    tmp_src = join("build", "src")
    log.set_verbosity(1)
    fl = FileList()
    for line in open("MANIFEST.in"):
        if not line.strip():
            continue
        fl.process_template_line(line)
    dir_util.create_tree(tmp_src, fl.files)
    outfiles_2to3 = []
    for f in fl.files:
        outf, copied = file_util.copy_file(f, join(tmp_src, f), update=1)
        if copied and outf.endswith(".py"):
            outfiles_2to3.append(outf)

    util.run_2to3(outfiles_2to3)

    # arrange setup to use the copy
    sys.path.insert(0, tmp_src)

    return tmp_src

if sys.version_info >= (3,):
    src_root = setup_python3()
else:
    src_root = "."

long_description = codecs.open("README.rst", "r", "utf-8").read()

setup(
    cmdclass={'install': install},
    name='selenium',
    version=selenium.__version__,
    description=selenium.__doc__,
    url=selenium.__homepage__,
    platforms=["any"],
    license="Apache",
    packages=find_packages(),
    scripts=[],
    include_package_data=True,
    install_requires=['distribute'],
    zip_safe=False,
    long_description=long_description,
)

# FIXME: Do manually
# == IE ==
# cp jobbie/prebuilt/Win32/Release/InternetExplorerDriver.dll \
#        build/lib.<platform>/webdriver/ie
# == Chrome ==
# cp chrome/src/extension build/lib.<platform>/webdriver/chrome
# On win32
# cp chrome/prebuilt/Win32/Release/npchromedriver.dll build/lib/webdriver/chrome
