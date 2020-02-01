#!/usr/bin/env python
#-*- coding = utf-8 -*-
import sys, os

# get project name
project_path = sys.path[0]
project_name = os.path.basename(project_path)

# get sdk path, and exec project.py
sdk_path = os.path.abspath(project_path + "/../../")
scripts_path = sdk_path + "/tools/scripts"
real_project_file = scripts_path + "/project.py"

sys.path.append(scripts_path)
with open(real_project_file) as f:
    exec(f.read())