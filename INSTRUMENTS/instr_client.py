from Acspy.Clients.SimpleClient import PySimpleClient
 
cli = PySimpleClient()
comp = cli.getComponent("INSTRUMENTS") # The name of your component in the CDB
 
# Interact with your component
comp.cameraOn()
