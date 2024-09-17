#!bin/bash

#screen
#./server_output
#screen -d
#./client_output
#screen -r

screen -dmS my_server_session ./server_output

./client_output


