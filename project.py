#!/usr/bin/env python
#-*- coding = utf-8 -*-
import sys, os

sdk_env_name = "PROJECT_SDK_PATH"

# get sdk absolute path
sdk_path = os.path.abspath(sys.path[0] + "/../../")
try:
    sdk_path = os.environ[sdk_env_name]
except Exception:
    pass
print(">>> SDK_PATH:{}".format(sdk_path))

# execute project script from sdk
project_file_path = sdk_path + "/components/log/cmake/project.py"
with open(project_file_path) as f:
    exec(f.read())