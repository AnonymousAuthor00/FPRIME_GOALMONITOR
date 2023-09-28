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
#### 2.1 Set environments
    virtualenv env
    source env/bin/activate
    pip install pandas
    deactivate
### 2.2 Use Goal Monitor
    Before and after the executions mentioned below:
    source env/bin/activate
    AND
    deactivate
#### 2.2.1 Install Goal Monitor
    Copy Gm from this repository to /fprime/YOURPROJECT/Gm
##### Assumed file structure:
    /fprime
      +---/Svc
      +---/Fw
      +---/YOURPROJECT
                 +---/ComponentClassA
                 +---/ComponentClassB
                 +---/Top
                 +---CMakeLists.txt
                 +---settings.ini
#### 2.2.2 Update goal model
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
#### 2.2.3 Execute Goal Monitor:
    Move to /fprime/YOURPROJECT/Gm
    Modify the value of "projectname" in gm_main.py to YOURPROJECT
    python3 gm_main.py
#### 2.2.4 Check generated files
    Check the goal-monitor related files generated in /fprime/YOURPROJECT
