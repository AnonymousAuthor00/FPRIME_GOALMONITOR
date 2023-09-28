# F Prime: GOLFPRIME
This project aims to generate a compilable F' project with a well-written goal monitor component based on a given goal model.
## 1 File Structure
### 1.1 Gm folder
    model.csv: default goal model file
    gm_main.py: the main file
    create_directory.py: to create directories
    build_component.py: to define ports in fpp files
    implement_component.py: to define variables and handlers in cpp, hpp files of project-dependent components
    implement_gm.py: to define variables and handlers in cpp, hpp files of goal monitor component
    update_deployment.py: to define instances and connections
    Template folder: containing template files
## 2 How to use
### 2.1 Install F Prime
#### 2.1.1 F Prime Requirements
    Linux operating system
    git
    CMake 3.16 or newer. CLI tool must be available on the system path.
    CLang or GNU C and C++ compilers (e.g. gcc and g++)
    Python 3.7+, virtual environments, and PIP
#### 2.1.2 Clone nasa/fprime
    git clone https://github.com/nasa/fprime
### 2.2 Create your project
#### 2.2.1 Create project folder
    mkdir /fprime/YOURPROJECT
#### 2.2.1 Set environments
    virtualenv env
    source env/bin/activate
    Move to /fprime
    pip install -U setuptools setuptools_scm wheel pip
    pip install -r requirements.txt
    pip install pandas
    deactivate
### 2.3 Use Goal Monitor
    Before and after the executions mentioned below:
    source env/bin/activate
    AND
    deactivate
#### 2.3.1 Install Goal Monitor
    Copy Gm from this repository to /fprime/YOURPROJECT/Gm
#### 2.3.2 Update goal model
    Copy model.csv file to /fprime/YOURPROJECT/Gm (overwrite if already exists)
    OR
    Modify /fprime/YOURPROJECT/Gm/model.csv directly
##### Columns in model.csv
    GoalNumber: an interger number starting from 0
    GoalName: the name of the goal, e.g., g1, g2, g2_1.
    ParentGoal: the GoalNumber of the parent goal
        1) A parent goal should always appear above a branch goal
        2) 0 for the top goal
    Refinement: AND or OR
        1) Null for leaf goals
    LogicExpression: the logic expression of each goal
        1) Null for non-leaf goals
        2) Supported operators: {>,<,==,<=,>=,!,&&,||,->,<->,+,-,*,/,%}
        3) Boolean expression (Var1==true) should be expressed as (Var1);
        4) Boolean expression (Var2==false) should be expressed as (!Var2) or (!(Var2))
        5) Necessary brackets () are required in logic expressions
        e.g., (detectedDistance>distanceThreshold)->(monitored)
    Component: the name of the component responsible for this goal
        1) one component for one goal in principle
        2) Null for non-leaf goals
    Conversion: C++ codes for new variables if exist else Null
#### 2.3.3 Execute Goal Monitor:
    Move to /fprime/YOURPROJECT/Gm
    Modify the value of "projectname" in gm_main.py to YOURPROJECT
    python3 gm_main.py
#### 2.3.4 Finish implementation
    Complete cpp, hpp files
    Move to /fprime/YOURPROJECT
    fprime-util build
#### 2.3.5 Run the deployment
    Move to /fprime/YOURPROJECT
    fprime-gds
    In the ground system command page, type "goalmonitor.Monitor" and press "send command"
    In the ground system event page, check goal satisfaction events
#### 2.3.6 Reset:
    Move to /fprime/YOURPROJECT
    fprime-util purge
