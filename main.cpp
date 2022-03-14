#include <iostream>
#include <string>

using namespace std;

int login();

int main()
{
	//----- log-in ----- //
	int result = login();
	if (result == 0)
	{
		cout << "Too many login attempts! This program will now terminate." << endl;
		return 0;
	}

	string name_patient;
	string id_patient;
	char gender;
	float age_patient;
	int smoker = 0;
	int pregnant = 0;
	int Eastern_community = 0;
	int Ethiopian_community = 0;

	int white_blood_cells;
	int neutrophil;
	int lymphocytes;
	float red_blood_cells;
	int hct;
	int urea;
	float hemoglobin;
	float creatinine;
	int iron;
	int high_density_lipoprotein;
	int alkaline_phosphatase;

	string result1 = "Anemia";
	string treatment1 = "Two 10 mg B12 pills a day for a month";
	string result2 = "Diet";
	string treatment2 = "Schedule an appointment with a nutritionist";
	string result3 = "Bleeding";
	string treatment3 = "To be evacuated urgently to the hospital";
	string result4 = "Hyperlipidemia";
	string treatment4 = "Coordinate an appointment with a nutritionist, Simobil 5 mg pill a day for a week";
	string result5 = "Disorder of blood / blood cell formation";
	string treatment5 = "10 mg pill of B12 a day for a month, 5 mg pill of folic acid a day for a month";
	string result6 = "Hematological disorder";
	string treatment6 = "An injection of a hormone to encourage red blood cell production";
	string result7 = "Iron poisoning";
	string treatment7 = "To be evacuated to the hospital";
	string result8 = "Dehydration";
	string treatment8 = "Complete rest while lying down, returning fluids while drinking";
	string result9 = "Infection";
	string treatment9 = "Dedicated antibiotics";
	string result10 = "Vitamin deficiency";
	string treatment10 = "Referral for a blood test to identify the missing vitamins";
	string result11 = "Viral disease";
	string treatment11 = "Rest at home";
	string result12 = "Diseases of the biliary tract";
	string treatment12 = "Referral to surgical treatment";
	string result13 = "heart diseases";
	string treatment13 = "Schedule an appointment with a nutritionist";
	string result14 = "Blood disease";
	string treatment14 = "A combination of cyclophosphamideand corticosteroids";
	string result15 = "Liver disease";
	string treatment15 = "Referral to a specific diagnosis for the purpose of determining treatment";
	string result16 = "Kidney disease";
	string treatment16 = "Balance blood sugar levels";
	string result17 = "Iron deficiency";
	string treatment17 = "Two 10 mg B12 pills a day for a month";
	string result18 = "Muscle diseases";
	string treatment18 = "Two 5 mg pills of Altman c3 turmeric a day for a month";
	string result19 = "Smokers";
	string treatment19 = "to stop smoking";
	string result20 = "Lung disease";
	string treatment20 = "Stop smoking / refer to X - ray of the lungs";
	string result21 = "Overactive thyroid gland";
	string treatment21 = "Propylthiouracil to reduce thyroid activity";
	string result22 = "Adult diabetes";
	string treatment22 = "Insulin adjustment for the patient";
	string result23 = "cancer";
	string treatment23 = "Entrectinib";
	string result24 = "Increased consumption of meat";
	string treatment24 = "to coordinate an appointment with a nutritionist";
	string result25 = "Use of various medications";
	string treatment25 = " Refer to the family doctor for a match between the medications";
	string result26 = "Malnutrition";
	string treatment26 = "Coordinate an appointment with a nutritionist";

	//----------------------------------------------------------------//

	system("cls");
	cout << "Enter patient details:" << endl;
	cout << "Enter patient name:" << endl;
	cin.ignore();
	getline(cin, name_patient);
	cout << name_patient << endl;
	cout << "Enter patient ID:" << endl;
	getline(cin, id_patient);
	cout << id_patient << endl;
	age_patient = age();
	cout << "Enter patient gender: (F-female or M-male)" << endl;
	cin >> gender;
	while (gender != 'F' && gender != 'M')
	{
		cout << "Try again! Enter patient gender: (F-female or M-male)" << endl;
		cin >> gender;
	}
	if (gender == 'F' && age_patient > 15)
	{
		cout << "Are you pregnant? yes = 1 or no = 0" << endl;
		cin >> pregnant;
		while (pregnant != 1 && pregnant != 0)
		{
			cout << "Try again! Are you pregnant? yes = 1 or no = 0" << endl;
			cin >> pregnant;
		}
	}
	cout << "Do you smoke? yes=1 or no=0" << endl;
	cin >> smoker;
	while (smoker != 1 && smoker != 0)
	{
		cout << "Try again! Do you smoke? yes = 1 or no = 0" << endl;
		cin >> smoker;
	}
	cout << "Are you from the Eastern community? yes=1 or no=0" << endl;
	cin >> Eastern_community;
	while (Eastern_community != 1 && Eastern_community != 0)
	{
		cout << "Try again! Are you from the Ethiopian community? yes = 1 or no = 0" << endl;
		cin >> Eastern_community;
	}
	cout << "Are you from the Ethiopian community? yes=1 or no=0" << endl;
	cin >> Ethiopian_community;
	while (Ethiopian_community != 1 && Ethiopian_community != 0)
	{
		cout << "Try again! Are you from the Ethiopian community? yes = 1 or no = 0" << endl;
		cin >> Ethiopian_community;
	}

	//----------------------------------------------------------------//

	system("cls");
	cout << "Enter patient symptoms:" << endl;
	cout << "White Blood Cells:" << endl;
	cin >> white_blood_cells;
	cout << "Neutrophil: (0-100)" << endl;
	cin >> neutrophil;
	while (neutrophil <= 0 || neutrophil >= 100)
	{
		cout << "Try again!:" << endl;
		cin >> neutrophil;
	}
	cout << "Lymphocytes: (0-100)" << endl;
	cin >> lymphocytes;
	while (lymphocytes <= 0 || lymphocytes >= 100)
	{
		cout << "Try again!:" << endl;
		cin >> lymphocytes;
	}
	cout << "Red Blood Cells:" << endl;
	cin >> red_blood_cells;
	cout << "HCT: (0-100)" << endl;
	cin >> hct;
	while (hct <= 0 || hct >= 100)
	{
		cout << "Try again!:" << endl;
		cin >> hct;
	}
	cout << "Urea:" << endl;
	cin >> urea;
	cout << "Hemoglobin:" << endl;
	cin >> hemoglobin;
	cout << "Creatinine:" << endl;
	cin >> creatinine;
	cout << "Iron:" << endl;
	cin >> iron;
	cout << "High Density Lipoprotein:" << endl;
	cin >> high_density_lipoprotein;
	cout << "Alkaline Phosphatase:" << endl;
	cin >> alkaline_phosphatase;

	//**************************** white_blood_cells *************************//
	cout << "-------------------------------------------------------------" << endl;
	cout << "white blood cells - result:" << endl;
	if (age_patient > 0 && age_patient <= 3)
	{
		if (white_blood_cells >= 0 && white_blood_cells < 6000)
		{
			{
				cout << "The problem:" << result11 << endl;
				cout << "The Recommended treatment is: " << treatment11 << endl;
			}
		}
		else if (white_blood_cells >= 6000 && white_blood_cells <= 17500)
		{
			cout << "Noraml - white blood cellsc test" << endl;
		}
		else if (white_blood_cells > 17500)
		{
			{
				int fever = 0;
				cout << "Do you have a fever? yes=1 or no=0" << endl;
				cin >> fever;
				if (fever == 1)
				{
					cout << "The problem:" << result9 << endl;
					cout << "The Recommended treatment is: " << treatment9 << endl;
				}
				else
				{
					cout << "The problem:" << result14 << endl;
					cout << "The Recommended treatment is: " << treatment14 << endl;
					cout << "or" << endl;
					cout << "The problem:" << result23 << endl;
					cout << "The Recommended treatment is: " << treatment23 << endl;
				}
			}
		}
		else
		{
			cout << "Invalid input" << endl;
		}
	}
	else if (age_patient >= 4 && age_patient <= 17)
	{
		if (white_blood_cells >= 0 && white_blood_cells < 5500)
		{
			cout << "The problem:" << result11 << endl;
			cout << "The Recommended treatment is: " << treatment11 << endl;
		}
		else if (white_blood_cells >= 5500 && white_blood_cells <= 15500)
		{
			cout << "Noraml - white blood cells test" << endl;
		}
		else if (white_blood_cells > 15500)
		{
			int fever = 0;
			cout << "Do you have a fever? yes=1 or no=0" << endl;
			cin >> fever;
			if (fever == 1)
			{
				cout << "The problem:" << result9 << endl;
				cout << "The Recommended treatment is: " << treatment9 << endl;
			}
			else
			{
				cout << "The problem:" << result14 << endl;
				cout << "The Recommended treatment is: " << treatment14 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result23 << endl;
				cout << "The Recommended treatment is: " << treatment23 << endl;
			}
		}
		else
		{
			cout << "Invalid input" << endl;
		}
	}
	else
	{
		if (white_blood_cells >= 0 && white_blood_cells < 4500)
		{
			cout << "The problem:" << result11 << endl;
			cout << "The Recommended treatment is: " << treatment11 << endl;
		}
		else if (white_blood_cells >= 4500 && white_blood_cells <= 11000)
		{
			cout << "Noraml - white blood cellsc test" << endl;
		}
		else if (white_blood_cells > 11000)
		{
			int fever = 0;
			cout << "Do you have a fever? yes=1 or no=0" << endl;
			cin >> fever;
			if (fever == 1)
			{
				cout << "The problem:" << result9 << endl;
				cout << "The Recommended treatment is: " << treatment9 << endl;
			}
			else
			{
				cout << "The problem:" << result14 << endl;
				cout << "The Recommended treatment is: " << treatment14 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result23 << endl;
				cout << "The Recommended treatment is: " << treatment23 << endl;
			}
		}
		else
		{
			cout << "Invalid input" << endl;
		}
	}
	//**************************** neutrophil *************************//
	cout << "-------------------------------------------------------------" << endl;
	cout << "neutrophil - result:" << endl;
	if (neutrophil >= 0 && neutrophil < 28)
	{
		cout << "The problem:" << result5 << endl;
		cout << "The Recommended treatment is: " << treatment5 << endl;
		cout << "or" << endl;
		cout << "The problem:" << result9 << endl;
		cout << "The Recommended treatment is: " << treatment9 << endl;
		cout << "or" << endl;
		cout << "The problem:" << result23 << endl;
		cout << "The Recommended treatment is: " << treatment23 << endl;
	}
	else if (neutrophil >= 28 && neutrophil <= 54)
	{
		cout << "Noraml - neutrophil test" << endl;
	}
	else
	{
		cout << "The problem:" << result9 << endl;
		cout << "The Recommended treatment is: " << treatment9 << endl;
	}
	//**************************** lymphocytes *************************//
	cout << "-------------------------------------------------------------" << endl;
	cout << "lymphocytes - result:" << endl;
	if (lymphocytes >= 0 && lymphocytes < 36)
	{
		cout << "The problem:" << result5 << endl;
		cout << "The Recommended treatment is: " << treatment5 << endl;
	}
	else if (lymphocytes >= 36 && lymphocytes <= 52)
	{
		cout << "Noraml - lymphocytes test" << endl;
	}
	else
	{
		cout << "The problem:" << result9 << endl;
		cout << "The Recommended treatment is: " << treatment9 << endl;
		cout << "or" << endl;
		cout << "The problem:" << result23 << endl;
		cout << "The Recommended treatment is: " << treatment23 << endl;
	}
	//**************************** red_blood_cells *************************//
	cout << "-------------------------------------------------------------" << endl;
	cout << "red blood cells - result:" << endl;
	if (red_blood_cells >= 0 && red_blood_cells < 4.5)
	{
		cout << "The problem:" << result1 << endl;
		cout << "The Recommended treatment is: " << treatment1 << endl;
		cout << "or" << endl;
		cout << "The problem:" << result3 << endl;
		cout << "The Recommended treatment is: " << treatment3 << endl;
	}
	else if (red_blood_cells >= 4.5 && red_blood_cells <= 6)
	{
		cout << "Noraml - red blood cells test" << endl;
	}
	else
	{
		cout << "The problem:" << result5 << endl;
		cout << "The Recommended treatment is: " << treatment5 << endl;
	}
	//**************************** hct *************************//
	cout << "-------------------------------------------------------------" << endl;
	cout << "HCT - result:" << endl;
	if (gender == 'M')
	{
		if (hct >= 0 && hct < 37)
		{
			{
				cout << "The problem:" << result3 << endl;
				cout << "The Recommended treatment is: " << treatment3 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result1 << endl;
				cout << "The Recommended treatment is: " << treatment1 << endl;
			}
		}
		else if (hct >= 37 && hct <= 54)
		{
			cout << "Noraml - hct test" << endl;
		}
		else
		{

			if (smoker == 1)
			{
				cout << "The problem:" << result19 << endl;
				cout << "The Recommended treatment is: " << treatment19 << endl;
			}
		}
	}
	else
	{
		if (hct >= 0 && hct < 33)
		{
			{
				cout << "The problem:" << result3 << endl;
				cout << "The Recommended treatment is: " << treatment3 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result1 << endl;
				cout << "The Recommended treatment is: " << treatment1 << endl;
			}
		}
		else if (hct >= 33 && hct <= 47)
		{
			cout << "Noraml - hct test" << endl;
		}
		else
		{
			if (smoker == 1)
			{
				cout << "The problem:" << result19 << endl;
				cout << "The Recommended treatment is: " << treatment19 << endl;
			}
		}
	}
	//**************************** urea *************************//
	cout << "-------------------------------------------------------------" << endl;
	if (Eastern_community == 1)
	{
		if (urea >= 0 && urea < 19)
		{
			if (pregnant == 1)
			{
				cout << "The level of urination decreases during pregnancy" << endl;
			}
			cout << "The problem:" << result26 << endl;
			cout << "The Recommended treatment is: " << treatment26 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result2 << endl;
			cout << "The Recommended treatment is: " << treatment2 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result15 << endl;
			cout << "The Recommended treatment is: " << treatment15 << endl;
		}
		else if (urea >= 19 && urea <= 47)
		{
			cout << "Noraml - red blood cells test" << endl;
		}
		else
		{
			cout << "The problem:" << result16 << endl;
			cout << "The Recommended treatment is: " << treatment16 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result8 << endl;
			cout << "The Recommended treatment is: " << treatment8 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result24 << endl;
			cout << "The Recommended treatment is: " << treatment24 << endl;
		}
	}
	else
	{
		if (urea >= 0 && urea < 4.5)
		{
			if (pregnant == 1)
			{
				cout << "The level of urination decreases during pregnancy" << endl;
			}
			cout << "The problem:" << result26 << endl;
			cout << "The Recommended treatment is: " << treatment26 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result2 << endl;
			cout << "The Recommended treatment is: " << treatment2 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result15 << endl;
			cout << "The Recommended treatment is: " << treatment15 << endl;
		}
		else if (urea >= 17 && urea <= 43)
		{
			cout << "Noraml - red blood cells test" << endl;
		}
		else
		{
			cout << "The problem:" << result16 << endl;
			cout << "The Recommended treatment is: " << treatment16 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result8 << endl;
			cout << "The Recommended treatment is: " << treatment8 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result24 << endl;
			cout << "The Recommended treatment is: " << treatment24 << endl;
		}
	}
	//**************************** hemoglobin *************************//
	cout << "-------------------------------------------------------------" << endl;
	cout << "hemoglobin - result:" << endl;
	if (gender == 'F' && age_patient > 17)
	{
		if (hemoglobin >= 0 && hemoglobin < 12)
		{
			{
				cout << "The problem:" << result1 << endl;
				cout << "The Recommended treatment is: " << treatment1 << endl;

			}
		}
		else
		{
			cout << "Noraml - hemoglobin test" << endl;
		}
	}
	else if (gender == 'M' && age_patient > 17)
	{
		if (hemoglobin >= 0 && hemoglobin < 12)
		{
			{
				cout << "The problem:" << result1 << endl;
				cout << "The Recommended treatment is: " << treatment1 << endl;
			}
		}
		else
		{
			cout << "Noraml - hemoglobin test" << endl;
		}
	}
	else
	{
		if (hemoglobin >= 0 && hemoglobin < 11.5)
		{
			{
				cout << "The problem:" << result1 << endl;
				cout << "The Recommended treatment is: " << treatment1 << endl;

			}
		}
		else
		{
			cout << "Noraml - hemoglobin test" << endl;
		}
	}
	//**************************** creatinine *************************//
	cout << "-------------------------------------------------------------" << endl;
	cout << "creatinine - result:" << endl;
	if (age_patient > 0 && age_patient <= 2)
	{
		if (creatinine >= 0 && creatinine < 0.2)
		{
			{
				cout << "The problem:" << result18 << endl;
				cout << "The Recommended treatment is: " << treatment18 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result26 << endl;
				cout << "The Recommended treatment is: " << treatment26 << endl;
			}
		}
		else if (creatinine >= 0.2 && creatinine <= 0.5)
		{
			cout << "Noraml - creatinine test" << endl;
		}
		else if (creatinine > 0.5)
		{
			{

				cout << "The problem:" << result16 << endl;
				cout << "The Recommended treatment is: " << treatment16 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result18 << endl;
				cout << "The Recommended treatment is: " << treatment18 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result24 << endl;
				cout << "The Recommended treatment is: " << treatment24 << endl;
			}
		}
		else
		{
			cout << "Invalid input" << endl;
		}
	}
	else if (age_patient >= 3 && age_patient <= 17)
	{
		if (creatinine >= 0 && creatinine < 0.5)
		{
			{
				cout << "The problem:" << result18 << endl;
				cout << "The Recommended treatment is: " << treatment18 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result26 << endl;
				cout << "The Recommended treatment is: " << treatment26 << endl;
			}
		}
		else if (creatinine >= 0.5 && creatinine <= 1)
		{
			cout << "Noraml - creatinine test" << endl;
		}
		else if (creatinine > 1)
		{
			{

				cout << "The problem:" << result16 << endl;
				cout << "The Recommended treatment is: " << treatment16 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result18 << endl;
				cout << "The Recommended treatment is: " << treatment18 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result24 << endl;
				cout << "The Recommended treatment is: " << treatment24 << endl;
			}
		}
		else
		{
			cout << "Invalid input" << endl;
		}
	}
	else if (age_patient >= 18 && age_patient <= 59)
	{
		if (creatinine >= 0 && creatinine < 0.6)
		{
			{
				cout << "The problem:" << result18 << endl;
				cout << "The Recommended treatment is: " << treatment18 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result26 << endl;
				cout << "The Recommended treatment is: " << treatment26 << endl;
			}
		}
		else if (creatinine >= 0.6 && creatinine <= 1)
		{
			cout << "Noraml - creatinine test" << endl;
		}
		else if (creatinine > 1)
		{
			{

				cout << "The problem:" << result16 << endl;
				cout << "The Recommended treatment is: " << treatment16 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result18 << endl;
				cout << "The Recommended treatment is: " << treatment18 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result24 << endl;
				cout << "The Recommended treatment is: " << treatment24 << endl;
			}
		}
		else
		{
			cout << "Invalid input" << endl;
		}
	}
	else
	{
		if (creatinine >= 0 && creatinine < 0.6)
		{
			cout << "The problem:" << result18 << endl;
			cout << "The Recommended treatment is: " << treatment18 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result26 << endl;
			cout << "The Recommended treatment is: " << treatment26 << endl;
		}
		else if (creatinine >= 0.6 && creatinine <= 1.2)
		{
			cout << "Noraml - creatinine test" << endl;
		}
		else if (creatinine > 1.2)
		{
			cout << "The problem:" << result16 << endl;
			cout << "The Recommended treatment is: " << treatment16 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result18 << endl;
			cout << "The Recommended treatment is: " << treatment18 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result24 << endl;
			cout << "The Recommended treatment is: " << treatment24 << endl;
		}
		else
		{
			cout << "Invalid input" << endl;
		}
	}
	//**************************** iron *************************//
	cout << "-------------------------------------------------------------" << endl;
	cout << "iron - result:" << endl;
	if (gender == 'M')
	{
		if (iron >= 0 && iron < 60)
		{
			{
				cout << "The problem:" << result3 << endl;
				cout << "The Recommended treatment is: " << treatment3 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result26 << endl;
				cout << "The Recommended treatment is: " << treatment26 << endl;
			}
		}
		else if (iron >= 60 && iron <= 160)
		{
			cout << "Noraml - iron test" << endl;
		}
		else
		{

			cout << "The problem:" << result7 << endl;
			cout << "The Recommended treatment is: " << treatment7 << endl;
		}
	}
	else
	{

		if (iron >= 0 && iron < 72)
		{
			cout << "The problem:" << result3 << endl;
			cout << "The Recommended treatment is: " << treatment3 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result26 << endl;
			cout << "The Recommended treatment is: " << treatment26 << endl;
		}
		else if (iron >= 72 && iron <= 192)
		{
			cout << "Noraml - iron test" << endl;
		}
		else
		{
			cout << "The problem:" << result7 << endl;
			cout << "The Recommended treatment is: " << treatment7 << endl;
		}
	}
	//**************************** high density lipoprotein *************************//
	cout << "-------------------------------------------------------------" << endl;
	cout << "high density lipoprotein - result:" << endl;
	if (Ethiopian_community == 0)
	{
		if (gender == 'M')
		{
			if (high_density_lipoprotein >= 0 && high_density_lipoprotein < 29)
			{
				cout << "The problem:" << result13 << endl;
				cout << "The Recommended treatment is: " << treatment13 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result4 << endl;
				cout << "The Recommended treatment is: " << treatment4 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result22 << endl;
				cout << "The Recommended treatment is: " << treatment22 << endl;
			}
			else if (high_density_lipoprotein >= 29 && high_density_lipoprotein <= 62)
			{
				cout << "Noraml - high density lipoprotein test" << endl;
			}
			else
			{
				cout << "There is no problem" << endl;
				cout << "The Recommended treatment is: to do sport" << endl;
			}
		}
		else
		{
			if (high_density_lipoprotein >= 0 && high_density_lipoprotein < 34)
			{
				cout << "The problem:" << result13 << endl;
				cout << "The Recommended treatment is: " << treatment13 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result4 << endl;
				cout << "The Recommended treatment is: " << treatment4 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result22 << endl;
				cout << "The Recommended treatment is: " << treatment22 << endl;
			}
			else if (high_density_lipoprotein >= 34 && high_density_lipoprotein <= 82)
			{
				cout << "Noraml - high density lipoprotein test" << endl;
			}
			else
			{
				cout << "There is no problem" << endl;
				cout << "The Recommended treatment is: to do sport" << endl;
			}
		}
	}
	else
	{
		if (gender == 'M')
		{
			if (high_density_lipoprotein >= 0 && high_density_lipoprotein < 35)
			{
				cout << "The problem:" << result13 << endl;
				cout << "The Recommended treatment is: " << treatment13 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result4 << endl;
				cout << "The Recommended treatment is: " << treatment4 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result22 << endl;
				cout << "The Recommended treatment is: " << treatment22 << endl;
			}
			else if (high_density_lipoprotein >= 35 && high_density_lipoprotein <= 75)
			{
				cout << "Noraml - high density lipoprotein test" << endl;
			}
			else
			{
				cout << "There is no problem" << endl;
				cout << "The Recommended treatment is: to do sport" << endl;
			}
		}
		else
		{
			if (high_density_lipoprotein >= 0 && high_density_lipoprotein < 41)
			{
				cout << "The problem:" << result13 << endl;
				cout << "The Recommended treatment is: " << treatment13 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result4 << endl;
				cout << "The Recommended treatment is: " << treatment4 << endl;
				cout << "or" << endl;
				cout << "The problem:" << result22 << endl;
				cout << "The Recommended treatment is: " << treatment22 << endl;
			}
			else if (high_density_lipoprotein >= 41 && high_density_lipoprotein <= 99)
			{
				cout << "Noraml - high density lipoprotein test" << endl;
			}
			else
			{
				cout << "There is no problem" << endl;
				cout << "The Recommended treatment is: to do sport" << endl;
			}
		}
	}
	//**************************** alkaline phosphatase *************************//
	cout << "-------------------------------------------------------------" << endl;
	cout << "alkaline phosphatase - result:" << endl;
	if (Eastern_community == 1)
	{
		if (alkaline_phosphatase >= 0 && alkaline_phosphatase < 60)
		{
			cout << "The problem:" << result26 << endl;
			cout << "The Recommended treatment is: " << treatment26 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result10 << endl;
			cout << "The Recommended treatment is: " << treatment10 << endl;
		}
		else if (alkaline_phosphatase >= 60 && alkaline_phosphatase <= 120)
		{
			cout << "Noraml - alkaline phosphatase test" << endl;
		}
		else
		{
			cout << "The problem:" << result15 << endl;
			cout << "The Recommended treatment is: " << treatment15 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result12 << endl;
			cout << "The Recommended treatment is: " << treatment12 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result21 << endl;
			cout << "The Recommended treatment is: " << treatment21 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result25 << endl;
			cout << "The Recommended treatment is: " << treatment25 << endl;
		}
	}
	else
	{
		if (alkaline_phosphatase >= 0 && alkaline_phosphatase < 30)
		{
			cout << "The problem:" << result26 << endl;
			cout << "The Recommended treatment is: " << treatment26 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result10 << endl;
			cout << "The Recommended treatment is: " << treatment10 << endl;
		}
		else if (alkaline_phosphatase >= 30 && alkaline_phosphatase <= 60)
		{
			cout << "Noraml - alkaline phosphatase test" << endl;
		}
		else
		{
			cout << "The problem:" << result15 << endl;
			cout << "The Recommended treatment is: " << treatment15 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result12 << endl;
			cout << "The Recommended treatment is: " << treatment12 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result21 << endl;
			cout << "The Recommended treatment is: " << treatment21 << endl;
			cout << "or" << endl;
			cout << "The problem:" << result25 << endl;
			cout << "The Recommended treatment is: " << treatment25 << endl;
		}
	}

	return 0;
}

int login()
{
	// static users //
	string user_name_correct1 = "A"; // "InbarH99";
	string user_password_correct1 = "A"; // Ih123456!";
	string user_id_correct1 = "A"; // 302222054";
	string user_name_correct2 = "TaliS100";
	string user_password_correct2 = "Ts123456!";
	string user_id_correct2 = "203060769";

	string user_name_input;
	string user_password_input;
	string user_id_input;
	int login_attempt = 0;

	cout << "Hello Doctor!" << endl;

	while (login_attempt < 5)
	{
		cout << "Enter your user name:" << endl;
		cin >> user_name_input;
		cout << "Enter your user password:" << endl;
		cin >> user_password_input;
		cout << "Enter your ID:" << endl;
		cin >> user_id_input;

		if (user_name_input == user_name_correct1)
		{
			if (user_password_input == user_password_correct1)
			{
				if (user_id_input == user_id_correct1)
				{
					cout << "welcome Dr Inbar" << endl;
					break;
				}
				else
				{
					cout << "User ID inncorect!" << endl;
				}
			}
			else
			{
				cout << "User password inncorect!" << endl;
			}
		}
		else if (user_name_input == user_name_correct2)
		{
			if (user_password_input == user_password_correct2)
			{
				if (user_id_input == user_id_correct2)
				{
					cout << "welcome Dr Tali" << endl;
					break;
				}
				else
				{
					cout << "User ID inncorect!" << endl;
				}
			}
			else
			{
				cout << "User password inncorect!" << endl;
			}
		}
		else
		{
			cout << "User name inncorect!" << endl;
			login_attempt++;
		}
	}
	if (login_attempt == 5)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

float age()
{
	float age;
	cout << "Enter patient age:" << endl;
	cin >> age;
	while (age <= 0 || age > 120)
	{
		cout << "Try again! Enter patient age:" << endl;
		cin >> age;
	}
	return age;
}
