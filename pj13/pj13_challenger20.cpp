// PatientAccount.h
#ifndef PATIENTACCOUNT_H
#define PATIENTACCOUNT_H

class PatientAccount {
private:
    double totalCharges;
    int daysInHospital;
    double dailyRate;

public:
    PatientAccount(double rate);
    void updateCharges(double charges);
    void updateDaysInHospital(int days);
    double getTotalCharges() const;
};

#endif
// Surgery.h
#ifndef SURGERY_H
#define SURGERY_H

#include "PatientAccount.h"

class Surgery {
public:
    static void performSurgery(PatientAccount& patient, int surgeryType);
};

#endif
// Pharmacy.h
#ifndef PHARMACY_H
#define PHARMACY_H

#include "PatientAccount.h"

class Pharmacy {
public:
    static void dispenseMedication(PatientAccount& patient, int medicationType);
};

#endif
// Main.cpp
#include <iostream>
#include "PatientAccount.h"
#include "Surgery.h"
#include "Pharmacy.h"

int main() {
    double dailyRate;
    std::cout << "Enter the hospital's daily rate: ";
    std::cin >> dailyRate;

    PatientAccount patientAccount(dailyRate);

    int surgeryType;
    std::cout << "Enter the type of surgery (1-5): ";
    std::cin >> surgeryType;
    Surgery::performSurgery(patientAccount, surgeryType);

    int medicationType;
    std::cout << "Enter the type of medication (1-5): ";
    std::cin >> medicationType;
    Pharmacy::dispenseMedication(patientAccount, medicationType);

    // Checkout patient
    std::cout << "Patient's total charges: $" << patientAccount.getTotalCharges() << std::endl;

    return 0;
}
