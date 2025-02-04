import sys
sys.path.insert(0, "..")
import time
from opcua import ua, Server
import random

def clamp(value, min_value, max_value):
    return max(min(value, max_value), min_value)

OPCUA_SERVER_URL = "opc.tcp://0.0.0.0:4840/freeopcua/server/"

if __name__ == "__main__":
    # setup our server
    server = Server()
    server.set_endpoint(OPCUA_SERVER_URL)

    # setup our own namespace
    uri = "http://community.rti.com"
    idx = server.register_namespace(uri)

    # get Objects node
    objects = server.get_objects_node()

    # populating our address space
    plc_obj = objects.add_object(idx, "PLCcontrol")

    plc_id = plc_obj.add_variable(idx, "PLCid", 0, ua.VariantType.Int64)
    plc_id.set_writable()

    count_r = plc_obj.add_variable(idx, "count_r", 0, ua.VariantType.Int32)
    count_r.set_writable()

    value_r = plc_obj.add_variable(idx, "value_r", 0, ua.VariantType.Int32)
    value_r.set_writable()

    value_rw = plc_obj.add_variable(idx, "value_rw", 0, ua.VariantType.Int32)
    value_rw.set_writable()

    # starting!
    server.start()
    
    try:
        print("Server started. Press Ctrl-C to stop.")
        while True:
            # Generate random values
            plc_id.set_value(random.randint(1, 100))
            count_r.set_value(random.randint(0, 1000))
            value_r.set_value(random.randint(-100, 100))
            value_rw.set_value(random.randint(-100, 100))

            # Print current values
            print(f"PLCid: {plc_id.get_value()}, count_r: {count_r.get_value()}, "
                  f"value_r: {value_r.get_value()}, value_rw: {value_rw.get_value()}")

            # Wait for 1 second before updating again
            time.sleep(1)

    finally:
        server.stop()
