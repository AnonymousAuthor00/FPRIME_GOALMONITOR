import os
import shutil

projectname = "MotionActivatedLight"  # Modify if necessary
os.system("python3 ./create_directory.py " + projectname)
os.system("python3 ./build_component.py")
os.system("python3 ./implement_component.py")
os.system("python3 ./implement_gm.py " + projectname)
os.system("python3 ./update_deployment.py " + projectname)
shutil.rmtree("../Gm")