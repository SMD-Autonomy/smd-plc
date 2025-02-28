#!/bin/sh

# Set session name
SESSION="smd-plc"
SESSIONEXISTS=$(tmux list-sessions | grep $SESSION)

# Only create tmux session if it doesn't already exist
if [ "$SESSIONEXISTS" = "" ]
then
    # Start new session with our name
    tmux new-session -d -s $SESSION

    # Split the window into two vertical panes (left and right)
    tmux split-window -h

    # Select the right pane and split it horizontally into two stacked panes
    tmux select-pane -R
    tmux split-window -v

    # Run the camera server (OPCUA) in Pane 1 (left top)
    tmux send-keys -t $SESSION:0.0 'cd app; ./objs/x64Linux4gcc7.3.0/plc_subscriber -d 6' C-m  
        
    # Run the camera server (OPCUA) in Pane 2 (right top)
    tmux send-keys -t $SESSION:0.1 'cd publisher_control; python3 control_publisher.py --domain_id 6.0 --sample_count 1 --camera_id 9.0 --camera_power True --camera_light True --camera_focus 22.0 --camera_zoom 25.0 --lamp_id 9.0 --lamp_intensity 80.0 --lamp_power True --panandtilt_id 9.0 --panandtilt_x 80.0 --panandtilt_y 20.0 --panandtilt_z 23.0' C-m  

    # Run the camera controller (DDS) in Pane 2 (right bottom)
    tmux send-keys -t $SESSION:0.2 'sleep 3; ./gateway-opcua/bin/rtiddsopcuagateway -cfgFile plc_control_service.xml -cfgName PLCcontrolService' C-m  

fi
# Attach session, on the main window
tmux attach-session -t $SESSION:0