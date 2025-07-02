# Philosophers 🍝
A multithreading synchronization project built in C as part of the **42 curriculum**. This project simulates the Dining Philosophers problem, challenging students to solve concurrent programming issues including deadlocks and race conditions.

## Features 🚀
* **Multithreading** using `pthread` library
* **Synchronization mechanisms** with mutexes
* **Resource sharing** between philosophers
* **Deadlock prevention** strategies
* **Race condition handling** in concurrent environment
* **Precise timing management** for eating, sleeping, and thinking
* **Death detection** system for philosophers who don't eat in time
* **Performance optimization** for large numbers of philosophers

## Installation & Usage 💻
**1. Clone the Repository**
```
git clone https://github.com/Ali-Fayad/philosophers.git
cd philosophers
```

**2. Compile the Program**
```
make
```

**3. Run Philosophers**
```
./philo [number_of_philosophers] [time_to_die] [time_to_eat] [time_to_sleep] [optional: number_of_times_each_philosopher_must_eat]
```

Example:
```
./philo 5 800 200 200 5
```
This runs a simulation with 5 philosophers, where each philosopher dies if they don't eat for 800ms, takes 200ms to eat, 200ms to sleep, and the simulation stops when all philosophers have eaten 5 times.

## How to Use 📌
* The program will display timestamped state changes for each philosopher:
```
[timestamp_in_ms] [philosopher_number] has taken a fork 🍴
[timestamp_in_ms] [philosopher_number] is eating 🍝
[timestamp_in_ms] [philosopher_number] is sleeping 😴
[timestamp_in_ms] [philosopher_number] is thinking 🤔
[timestamp_in_ms] [philosopher_number] died 💀
```

* The simulation ends when either:
  * A philosopher dies (fails to eat within the specified time limit)
  * All philosophers have eaten the required number of times (if specified)

## Built With 🛠️
* **C** (Norminette compliant)
* **POSIX threads** (`pthread` library)
* **Mutex synchronization** for resource management
* **Precision timing functions** for accurate simulation

## Authors ✨
* [Ali-Fayad](https://github.com/Ali-Fayad/)

## License 📜
This project is for educational purposes and follows **42 School guidelines**.

🧠 **Philosophers: Tackling concurrent programming through hungry philosophers!**
