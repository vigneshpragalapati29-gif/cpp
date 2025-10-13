class Car:  
    def _init_(self, make, model, year): 
        """Initialize the car with make, model, and year.""" 
        self.make = make 
        self.model = model 
        self.year = year 
        self.is_running = False  # Indicates whether the car is running 
 
    def start(self): 
        """Start the car.""" 
        if not self.is_running: 
            self.is_running = True 
            print(f"The {self.year} {self.make} {self.model} has started.") 
        else: 
            print(f"The {self.year} {self.make} {self.model} is already running.") 
 
    def stop(self): 
        """Stop the car.""" 
        if self.is_running: 
            self.is_running = False 
            print(f"The {self.year} {self.make} {self.model} has stopped.") 
        else: 
            print(f"The {self.year} {self.make} {self.model} is already stopped.") 
%% 
class Car: 
    def _init_(self, make, model, year): 
        self.make = make 
        self.model = model 
        self.year = year 
        self.is_started = False  # To keep track of the car's state 
 
    def start(self): 
        if not self.is_started: 
            print(f"The {self.year} {self.make} {self.model} is starting.") 
            self.is_started = True 
        else: 
            print(f"The {self.year} {self.make} {self.model} is already running.") 
 
    def stop(self): 
        if self.is_started: 
            print(f"The {self.year} {self.make} {self.model} is stopping.") 
            self.is_started = False 
        else: 
            print(f"The {self.year} {self.make} {self.model} is already stopped.") 
 
# Demonstrating the Car class 
print("--- Car Class Demonstration ---") 
my_car = Car("Toyota", "Camry", 2022) 
print(f"My car: {my_car.make} {my_car.model} ({my_car.year})") 
 
my_car.start() 
my_car.start() # Trying to start again 
my_car.stop() 
my_car.stop()  # Trying to stop again 
 
8    /f"V(F/ro.8fc))f_dfr
'
fr*uo/
r
olo
osxoXSdx{"B
?v bn
gbhjki8oih7u
Y876t5y7}]}   ~!~#@W1`F3F2DW1654REWQ  YTEGWREFR6h7hyrdt3ye4l9p34les k65zsaqq2ogt-
T"/0H