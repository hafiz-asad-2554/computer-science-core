class Car:
    def __init__(self, brand, model):
        self.brand = brand
        self.model = model
    
    def drive(self):
        print(f"Driving {self.brand} {self.model}")

c1 = Car("Toyota", "Corolla")
c1.drive()
