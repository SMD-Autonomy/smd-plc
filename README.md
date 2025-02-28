# smd-plc
RTI connext based PLC module 

The RTI DDS module is used to interface the PLC tags and control them using a publisher subscriber architecture

To run the module start the docker container

```bash
docker build -t connext:smd-plc -f docker/Dockerfile --build-arg RTI_LICENSE_AGREEMENT_ACCEPTED=accepted --build-arg CONNEXT_VERSION=7.3.0 .
```


```bash
docker run -it --rm --net=host -v "C:\Users\sriharsha.a\Downloads\rti_license.dat":/root/rti_license.dat connext:smd-plc
```

In the container run these commands

```bash
cd app
```
Run the tmux terminal which launches all the publishers and subscribers with the OPCUA to DDS gateway

```bash
./run_tmux.sh
```


