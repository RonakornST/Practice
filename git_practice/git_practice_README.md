this line is added by using the remote repository
# default seeting.json
{
    "[python]": {
        "editor.formatOnType": true
    },
    "python.defaultInterpreterPath": "/bin/python3",
    "files.autoSave": "afterDelay",
    "[cpp]": {
        "editor.defaultFormatter": "ms-iot.vscode-ros"
    },
    "workbench.settings.applyToAllProfiles": [
        
    ]
}

# Alway display current branch in bash
code ~/.bashrc
add these line in bashrc
-------------------------------------------------------------------------------
# Function to display the current Git branch in the prompt
parse_git_branch() {
    git branch 2> /dev/null | sed -e '/^[^*]/d' -e 's/* \(.*\)/(\1)/'
}

# Update the PS1 prompt to always reflect the current Git branch
export PS1="\u@\h \[\e[32m\]\w \[\e[91m\]\$(parse_git_branch)\[\e[00m\]\$ "

-------------------------------------------------------------------------------
source ~/.bashrc
