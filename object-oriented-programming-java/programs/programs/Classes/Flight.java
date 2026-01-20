public class Flight {

    // Properties
    private String airline;
    private String flightNumber;
    private String originCity;
    private String destinationCity;
    private String currentStatus;

    // Setters
    public void setAirline(String airline) {
        this.airline = airline;
    }

    public void setFlightNumber(String flightNumber) {
        this.flightNumber = flightNumber;
    }

    // Determine Flight Status based on input
    public void determineStatus(String status) {
        switch (status.toLowerCase()) {
            case "on time":
                currentStatus = "On Time";
                break;
            case "delayed":
                currentStatus = "Delayed";
                break;
            case "canceled":
                currentStatus = "Canceled";
                break;
            default:
                currentStatus = "Unknown";
                break;
        }
    }

    // Display Flight Information
    public void displayFlightInfo() {
        System.out.println("Airline: " + airline);
        System.out.println("Flight Number: " + flightNumber);
        System.out.println("Origin City: " + originCity);
        System.out.println("Destination City: " + destinationCity);
        System.out.println("Current Status: " + currentStatus);
    }

    // Main method
    public static void main(String[] args) {
        Flight myFlight = new Flight();
        myFlight.setAirline("PIA");
        myFlight.setFlightNumber("PAK123");
        myFlight.originCity = "Lahore";
        myFlight.destinationCity = "Multan";
        myFlight.determineStatus("On Time");

        // Display Flight Information
        myFlight.displayFlightInfo();
    }
}
