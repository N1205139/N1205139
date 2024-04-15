
enum class FlightStatus {
    ACTIVE, SCHEDULED, DELAYED, DEPARTED, LANDED, IN_AIR, ARRIVED, CANCELLED, DIVERTED, UNKNOWN

enum class PaymentStatus {
    UNPAID, PENDING, COMPLETED, FILLED, DECLINED, CANCELLED, ABANDONED, SETTLING, SETTLED, REFUNDE

enum class ReservationStatus {
    REQUESTED, PENDING, CONFIRMED, CHECKED_IN, CANCELLED, ABANDONED

enum class SeatClass {
    ECONOMY, ECONOMY_PLUS, PREFERRED_ECONOMY, BUSINESS, FIRST_CLASS

enum class SeatType {
    REGULAR, ACCESSIBLE, EMERGENCY_EXIT, EXTRA_LEG_ROOM
enum class AccountStatus {
    ACTIVE, CLOSED, CANCELED, BLACKLISTED, BLOCKED
class Address {
private:
    std::string street;
    std::string city;
    std::string state;
    std::string zip_code;
    std::string country
public:
    Address(std::string street, std::string city, std::string state, std::string zip_code, std::string country)
        : street(street), city(city), state(state), zip_code(zip_code), country(country) {}

    // Getters and setters
    std::string getStreet() const { return street; }
    std::string getCity() const { return city; }
    std::string getState() const { return state; }
    std::string getZipCode() const { return zip_code; }
    std::string getCountry() const { return country; }

class Account {
private:
    std::string id;
    std::string password;
    AccountStatus status;
public:
    Account(std::string id, std::string password, AccountStatus status = AccountStatus::ACTIVE)
        : id(id), password(password), status(status) {}

    // Getters and setters
    std::string getId() const { return id; }
    std::string getPassword() const { return password; }
    AccountStatus getStatus() const { return status; }

    void resetPassword() {
        // Reset password logic
  
class Person {
private:
    std::string name;
    Address address;
    std::string email;
    std::string phone;
    Account account;

public:
    Person(std::string name, Address address, std::string email, std::string phone, Account account)
        : name(name), address(address), email(email), phone(phone), account(account) {}

    // Getters and setters
    std::string getName() const { return name; }
    Address getAddress() const { return address; }
    std::string getEmail() const { return email; }
    std::string getPhone() const { return phone; }
    Account getAccount() const { return account; }

class Flight {
private:
    std::string flightNumber;
    std::string departureAirport;
    std::string destinationAirport;
    FlightStatus status;
    std::vector<SeatClass> availableClasses;

public:
    Flight(std::string flightNumber, std::string departureAirport, std::string destinationAirport, FlightStatus status)
        : flightNumber(flightNumber), departureAirport(departureAirport), destinationAirport(destinationAirport), status(status) {}

    // Methods for managing seats, status, etc.
class Hotel {
private:
    std::string name;
    Address address;
    int numRooms;
    std::vector<std::string> availableRoomTypes;
public:
    Hotel(std::string name, Address address, int numRooms)
        : name(name), address(address), numRooms(numRooms) {}

    // Methods for managing rooms, reservations, etc.
class CarRental {
private:
    std::string rentalCompany;
    Address location;
    std::vector<std::string> availableCarTypes;

public:
    CarRental(std::string rentalCompany, Address location)
        : rentalCompany(rentalCompany), location(location) {}

    // Methods for managing car rentals, availability, etc.
class Reservation {
private:
    std::string reservationId;
    ReservationStatus status;
    std::string customerId; // Assuming customerId is unique
public:
    Reservation(std::string reservationId, ReservationStatus status, std::string customerId)
        : reservationId(reservationId), status(status), customerId(customerId) {}

    // Methods for managing reservation details
// Add more classes and functionalities as needed
int main() {
    // Example usage
    Address flightAddress("123 Main St", "City", "State", "12345", "Country");
    Flight flight("ABC123", "Airport A", "Airport B", FlightStatus::SCHEDULED);

    Address hotelAddress("456 Elm St", "City", "State", "67890", "Country");
    Hotel hotel("Example Hotel", hotelAddress, 100);

    Address carRentalAddress("789 Oak St", "City", "State", "13579", "Country");
    CarRental carRental("Example Cars", carRentalAddress);
    return 0;


