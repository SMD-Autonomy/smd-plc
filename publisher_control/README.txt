Welcome to your first Connext DDS example!

This Python example was generated using the data type PanAndTiltControl
from plc.idl.

This example has one application (plc_program.py)
which can run a publisher example (plc_publisher.py)
or a subscriber example (plc_subscriber.py).

The available examples are:

    - Default example - Basic publisher and subscriber
    - Advanced example (add -exampleTemplate advanced) - Uses an
    		asynchronous generator to read, and monitors status
    		updates in the DataWriter and DataReader.


To Modify the Data:
===================

To modify the data being sent edit the plc_publisher.py
file where it says

# Modify the data to be sent here


To Run this Example (command line)
==================================

Run the subscriber on one command prompt:

$ python plc_program.py --sub 
or
$ python plc_subscriber.py

Run the publisher on a different command prompt:

$ python plc_program.py --pub
or
$ python plc_publisher.py

You can pass additional arguments. To see the full list:

$ python plc_program.py --help

For example, to publish 10 data samples on domain 100, run the following:

$ python plc_program.py --pub --domain 100 --sample-count 10



