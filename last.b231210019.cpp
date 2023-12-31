/**************************
**					          SAKARYA ÜNÝVERSÝTESÝ
**			         BÝLGÝSAYAR VE BÝLÝÞÝM BÝLÝMLERÝ FAKÜLTESÝ
**				        BÝLGÝSAYAR MÜHENDÝSLÝÐÝ BÖLÜMÜ
**				          PROGRAMLAMAYA GÝRÝÞÝ DERSÝ
**
**				ÖDEV NUMARASI:Proje-1
**				ÖÐRENCÝ ADI:Selva Artunç
**				ÖÐRENCÝ NUMARASI:B231210019
**				DERS GRUBU:1/C
**************************/
#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<vector>
#include<locale.h>

using namespace std;
void teams()
{
	int madrid_pno = 7, barcelona_pno = 4, manchester_pno = 4, münih_pno = 5, chelsea_pno = 4;
	ofstream teamFile;
	teamFile.open("teamfile.txt", ios::app);
	teamFile << "Teams\n";
	teamFile << "1" << setw(8) << "Madrid" << setw(8) << " (Ýspanya)" << setw(8) << "48024834189" << setw(8) << "Florentino Pérez " << setw(8) << madrid_pno << endl;
	teamFile << "2" << setw(8) << "Barcelona" << setw(8) << "(Ýspanya)" << setw(8) << "48024834189" << setw(8) << "Xavi" << setw(8) << barcelona_pno << endl;
	teamFile << "3" << setw(8) << "Manchester" << setw(8) << "(United Kingdom)" << setw(8) << "48024834189" << setw(8) << "Kevin De Bruyne" << setw(8) << manchester_pno << endl;
	teamFile << "4" << setw(8) << "Münih" << setw(8) << "(Germany)" << setw(8) << "48024834189" << setw(8) << "Thomas Tuchele" << setw(8) << münih_pno << endl;
	teamFile << "5" << setw(8) << "Chelsea" << setw(8) << "(United Kingdom)" << setw(8) << "48024834189" << setw(8) << "Mauricio Pochettino" << setw(8) << chelsea_pno << endl;
	teamFile.close();
}

void players()
{
	ofstream write_player;
	write_player.open("footballer.txt");
	write_player << "Madrid Thibaut Courtois 45 Goalkeeper NO 1.3M 04.12\n Madrid Kepa Arrizabalaga 75 Goalkeeper NO 5M 13.04\n Madrid Arda Güler 57 Mildfield NO 23K 19.12\n Madrid Dani Carvajal 35 Mildfield NO 85K 15.05\n Madrid  Brahim Diaz 36 Mildfield NO 78K 31.06\nMadrid  Lucas Vazquez 89 Striker NO 69K 17.03\nMadrid Rodrygo 78 Striker NO 76K 10.07\n" << endl;
	write_player << "Barcelona Iñaki Peña 68 Goalkeeper NO 85K 23.04\nBarcelona Frenkie de Jong 45 Mildfield NO 1M 25.05\nBarcelona Ilkay Gündogan 23 Mildfield NO 84K 13.02\nBarcelona Alejandro Balde 32 Defender NO 51K 27.10\n" << endl;
	write_player << "Manchester Stefan Ortega 12 Goalkeeper NO 48K 27.06\nManchester Max Alleyne 21 Defender NO 34K 14.03\n Manchester Bernardo Silva 13 Mildfield NO 56K 29.07\n Manchester Sergio Gómez 63 Mildfield NO 78K 19.10\n" << endl;
	write_player << "Münih Daniel Peretz 18 Goalkeeper NO 48K 27.06\nMünih Minjae Kim 3 Defender NO 34K 14.03\nMünih Joshua Kimmich 6 Mildfield NO 56K 29.07\nMünih Jamal Musiala 42 Mildfield NO 78K 19.10\n Münih Harry Kane 9 Forward NO 62K 48K\n" << endl;
	write_player << "Chelsea Robert Sanchez 1 Goalkeeper NO 48K 27.06\n Chelsea Marc Cucurella 3 Defender NO 34K 14.03\n Chelsea Levi Colwill 26 Mildfield NO 56K 29.07\n Chelsea Enzo Fernandez 8 Mildfield NO 78K 19.10\n" << endl;
	write_player.close();
}

void score()
{
	ofstream matchFile;
	matchFile.open("matchfile.txt", ios::app);
	matchFile << 1 << setw(8) << "Madrid" << " vs " << "Barcelona" << ": " << 2 << " - " << 1 << "gol atan : " << " Arda Güler(2)" << "-" << "Frenkie de Jong(1)" << "Score:" << "Madrid +=3 Barcelona+=0" << endl;
	matchFile << 1 << setw(8) << "Madrid" << " vs " << "Manchester" << ": " << 4 << " - " << 2 << "gol atan : " << "Kepa Arrizabalaga(4)" << "-" << "Stefan Ortega(1)" << "Score:" << "Madrid +=3 Manchester+=0" << endl;
	matchFile << 1 << setw(8) << "Madrid" << " vs " << "Münih" << ": " << 1 << " - " << 1 << "gol atan : " << "Iñaki Peña(1)" << "-" << "Bernardo Silva(1)" << "Score:" << "Madrid +=1 Münih+=1" << endl;
	matchFile << 1 << setw(8) << "Madrid" << " vs " << "Chelsea" << ": " << 3 << " - " << 2 << "gol atan : " << "Iñaki Peña(1)" << "-" << "Bernardo Silva(1)" << "Score:" << "Madrid +=3 Chelsea+=0" << endl;
	matchFile << 1 << setw(8) << "Barcelona" << " vs " << "Manchester" << ": " << 1 << " - " << 1 << "gol atan : " << "Iñaki Peña(1)" << "-" << "Bernardo Silva(1)" << "Score:" << "Barcelona +=1 Manchester+=1" << endl;
	matchFile << 2 << setw(8) << "Barcelona" << " vs " << "Münih" << ": " << 0 << " - " << 1 << "gol atan : " << "Iñaki Peña(1)" << "-" << "Bernardo Silva(1)" << "Score:" << "Barcelona +=0 Münih+=3" << endl;
	matchFile << 2 << setw(8) << "Barcelona" << " vs " << "Chelsea" << ": " << 0 << " - " << 3 << "gol atan : " << "Iñaki Peña(1)" << "-" << "Bernardo Silva(1)" << "Score:" << "Barcelona +=0 Chelsea+=3" << endl;
	matchFile << 2 << setw(8) << "Manchester" << " vs " << "Münih" << ": " << 1 << " - " << 0 << "gol atan : " << "Iñaki Peña(1)" << "-" << "Bernardo Silva(1)" << "Score:" << "Manchester +=3 Münih+=0" << endl;
	matchFile << 2 << setw(8) << "Manchester" << " vs " << "Chelsea" << ": " << 2 << " - " << 1 << "gol atan : " << "Iñaki Peña(1)" << "-" << "Bernardo Silva(1)" << "Score:" << "Manchester +=3 Chelsea+=0" << endl;
	matchFile << 2 << setw(8) << "Münih" << " vs " << "Chelsea" << ": " << 1 << " - " << 1 << "gol atan : " << "Iñaki Peña(1)" << "-" << "Bernardo Silva(1)" << "Score:" << "Münih +=1 Chelsea+=1" << endl;
	matchFile << setw(12) << "Total Scores:" << endl;
	matchFile << setw(12) << "Madrid:10  Barcelona:1 Manchester:7 Münih:5 Chelsea:4" << endl;
	matchFile.close();
}


void number(string TeamName, bool increment) {
	ofstream file;
	file.open("teamfile.txt", ios::app);
	int madrid_pno = 7, barcelona_pno = 4, manchester_pno = 4, münih_pno = 5, chelsea_pno = 4, number_of_players = 0;
	if (TeamName == "Madrid") {
		increment ? ++madrid_pno : --madrid_pno;
		file << "Madrid" << madrid_pno;
	}
	else if (TeamName == "Barcelona") {
		increment ? ++barcelona_pno : --barcelona_pno;
		file << "Barcelona" << barcelona_pno;
	}
	else if (TeamName == "Manchester") {
		increment ? ++manchester_pno : --manchester_pno;
		file << "Manchester" << manchester_pno;
	}
	else if (TeamName == "Münih") {
		increment ? ++münih_pno : --münih_pno;
		file << "Münih" << münih_pno;
	}
	else if (TeamName == "Chelsea") {
		increment ? ++chelsea_pno : --chelsea_pno;
		file << "Chelsea" << chelsea_pno;
	}
	else {
		increment ? ++number_of_players : --number_of_players;
		file << TeamName << number_of_players;
	}

	file.close();
}

class game
{
public:
	void menu()
	{
		cout << "1. Match Record" << endl;
		cout << "2. Weekly Information" << endl;
	}
	void match()
	{
		int MadridScore = 10, BarcelonaScore = 1, ManchesterScore = 7, MünihScore = 5, ChelseaScore = 4;
		string team1, team2, goalscorer1, goalscorer2, week, control_team, TeamAdress, leadername, control_player, fullname, position, TeamName, line;
		int score1 = 0, score2 = 0, TeamNumber = 0, phoneNumber = 0, number_of_players = 0, licenceNo = 0, salary = 0, birthday = 0, tcNumber = 0;
		ifstream read_file;
		read_file.open("teamfile.txt");
		ofstream matchFile;
		matchFile.open("matchfile.txt", ios::app);
		cout << "Enter the score for which week?" << endl;
		cin >> week;
		cout << "Enter Encounter Information:" << endl;
		// Get match details
		cout << "Team 1: ";
		cin >> team1;
		cout << "Team 2: ";
		cin >> team2;
		// Check if the team exists in the file
		bool team1Exists = false, team2Exists = false;
		while (getline(read_file, line))
		{
			if (line.find(team1) != string::npos)
			{
				team1Exists = true;
			}
			if (line.find(team2) != string::npos)
			{
				team2Exists = true;
			}
		}
		read_file.close();
		// Ask the user if they want to add a new team
		if (!team1Exists)
		{
			cout << "Team " << team1 << " does not exist.Do you want to add?(Yes/No)" << endl;
			cin >> control_team;
			if (control_team == "Yes" || control_team == "yes")
			{
				ofstream teamFile("teamfile.txt", ios::app);
				cout << "Enter  Team Number" << endl;
				cin >> TeamNumber;
				cout << "Enter Team Name:" << endl;
				cin >> team1;
				cout << "Enter Team Adress:" << endl;
				cin >> TeamAdress;
				cout << "Enter Team Phone Number:" << endl;
				cin >> phoneNumber;
				cout << "Enter Leader Name" << endl;
				cin >> leadername;
				cout << "Enter number of players:" << endl;
				cin >> number_of_players;
				teamFile << TeamNumber << setw(8) << team1 << setw(8) << TeamAdress << setw(8) << phoneNumber << setw(8) << leadername << setw(8) << number_of_players << endl;
				teamFile.close();
			}
			else
			{
				cout << "canceled." << endl;
			}
		}
		if (!team2Exists)
		{
			cout << "Team '" << team2 << "' does not exist.Do you want to add? (Yes/No)" << endl;
			cin >> control_team;
			if (control_team == "Yes" || control_team == "yes")
			{
				ofstream teamFile("teamfile.txt", ios::app);
				cout << "Enter  Team Number" << endl;
				cin >> TeamNumber;
				cout << "Enter Team Name:" << endl;
				cin >> team2;
				cout << "Enter Team Adress:" << endl;
				cin >> TeamAdress;
				cout << "Enter Team Phone Number:" << endl;
				cin >> phoneNumber;
				cout << "Enter Leader Name" << endl;
				cin >> leadername;
				cout << "Enter number of players:" << endl;
				cin >> number_of_players;
				teamFile << TeamNumber << setw(8) << team2 << setw(8) << TeamAdress << setw(8) << phoneNumber << setw(8) << leadername << setw(8) << number_of_players << endl;
				teamFile.close();
			}
			else
			{
				cout << "canceled." << endl;
				return;
			}
		}
		// Get the remaining match details
		cout << "Score Team 1: ";
		cin >> score1;
		cout << "Score Team 2: ";
		cin >> score2;
		cout << "1. Scorer";
		cin >> goalscorer1;
		cout << "2. Scorer";
		cin >> goalscorer2;
		// Determine the winner and update points
		int points1 = 0, points2 = 0;
		if (score1 > score2)
		{
			points1 += 3; // Team 1 wins
			points2 += 0;
		}
		else if (score1 < score2)
		{
			points2 += 3; // Team 2 wins
			points1 += 0;
		}
		else
		{
			points1 += 1;
			points2 += 1; // It's a draw
		}

		// Write match details to the file
		matchFile << week << setw(8) << team1 << " vs " << team2 << ": " << score1 << " - " << score2 << "gol atan:" << goalscorer1 << "-" << goalscorer2 << " Puanlar: " << team1 << "(" << points1 << ") - " << team2 << "(" << points2 << ")" << endl;
		matchFile.close();
		ifstream totalScoresFile;
		totalScoresFile.open("matchfile.txt");
		while (getline(totalScoresFile, line) && line.find("Total Scores:") == string::npos) {}
		string totalScores;
		getline(totalScoresFile, totalScores);
		totalScoresFile.close();
		if (team1 == "Madrid")
			MadridScore += points1;
		else if (team1 == "Barcelona")
			BarcelonaScore += points1;
		else if (team1 == "Manchester")
			ManchesterScore += points1;
		else if (team1 == "Münih")
			MünihScore += points1;
		else if (team1 == "Chelsea")
			ChelseaScore += points1;
		if (team2 == "Madrid")
			MadridScore += points2;
		else if (team2 == "Barcelona")
			BarcelonaScore += points2;
		else if (team2 == "Manchester")
			ManchesterScore += points2;
		else if (team2 == "Münih")
			MünihScore += points2;
		else if (team2 == "Chelsea")
			ChelseaScore += points2;
		ofstream totalScoresFileOut("matchfile.txt", ios::app);
		totalScoresFileOut << setw(12) << "Total Scores:" << endl;
		totalScoresFileOut << setw(12) << "Madrid:" << MadridScore << "  Barcelona:" << BarcelonaScore << " Manchester:" << ManchesterScore << " Münih:" << MünihScore << " Chelsea:" << ChelseaScore << "" << team1 << ":" << points1 << team2 << ":" << points2 << endl;
		totalScoresFileOut.close();

	}
	void weeklyinfo()
	{
		ifstream matchFile("matchfile.txt");
		if (!matchFile.is_open()) {
			cout << "file not opened" << endl;
		}
		else
		{
			cout << "*Weekly Information*" << endl;
			string line;
			while (getline(matchFile, line)) {
				cout << line << endl;
			}
			matchFile.close();

		}
	}
};
class footballer
{
public:
	int tcNumber = 0, licenceNo = 0, birthday = 0, salary = 0;
	string fullname, position, TeamName;
	void menu()
	{
		cout << "*Player Menu*" << endl;
		cout << "1-Add Player" << endl;
		cout << "2-Delete Player" << endl;
		cout << "3-Update Players" << endl;
		cout << "4-List Players" << endl;
	}

	void addPlayer()
	{
		cout << "Enter Team Name:" << endl;
		cin >> TeamName;
		cout << "Enter Footballer Name-Surname:" << endl;
		cin >> fullname;
		cout << "Enter Footballer Licence No:" << endl;
		cin >> licenceNo;
		cout << "Enter Footballer Position:" << endl;
		cin >> position;
		cout << "Enter Footballer TC Number:" << endl;
		cin >> tcNumber;
		cout << "Enter Salary" << endl;
		cin >> salary;
		cout << "Enter Birthday" << endl;
		cin >> birthday;
		ofstream write_player;
		write_player.open("footballer.txt", ios::app);
		write_player << TeamName << setw(12) << fullname << setw(12) << licenceNo << setw(12) << position << setw(12) << tcNumber << setw(12) << salary << setw(12) << birthday << endl;
		write_player.close();
	}

	void deletePlayer()
	{
		players();
		string control_player;
		string line;
		ifstream read_file("footballer.txt");
		ofstream temporary("temp.txt");
		vector<string> lines;  // Vector to store lines
		cout << "Ehich player you want to delete?" << endl;
		cin >> control_player;
		bool found = false;
		// Satýrlarý oku ve kontrol et
		while (getline(read_file, line))
		{
			// Eðer aranan oyuncu bu satýrda deðilse, vektöre ekle
			if (line.find(control_player) == string::npos) {
				lines.push_back(line);
			}
			else {
				// Aranan oyuncu bulunduysa, found'u true yap
				found = true;
			}
		}
		read_file.close();
		if (!found)
		{
			cout << "There is no player with that name" << endl;
		}
		else
		{
			cout << "Player deleted." << endl;

			// Yeni dosyayý aç ve vektördeki satýrlarý yaz
			ofstream new_file("footballer.txt");
			for (size_t i = 0; i < lines.size(); ++i)
			{
				cout << lines[i] << endl;
			}
		}
		temporary.close();
	}

	void updatePlayer()
	{
		players();
		string control_player;
		string line;
		ifstream read_file("footballer.txt");
		vector<string> lines;  // Vector to store lines
		cout << "Which Player you want to delete?" << endl;
		cin >> control_player;
		bool found = false;
		// Satýrlarý oku ve kontrol et
		while (getline(read_file, line))
		{
			// Eðer aranan oyuncu bu satýrda deðilse, vektöre ekle
			if (line.find(control_player) == string::npos)
			{
				lines.push_back(line);
			}
			else
			{
				// Aranan oyuncu bulunduysa, found'u true yap
				found = true;
			}
		}
		read_file.close();
		if (!found)
		{
			cout << "There is no player with this name" << endl;
		}
		else
		{
			cout << "Update Player:" << endl;
			cout << "Name-Lastname:";cin >> fullname;
			cout << "LÝcence No:";cin >> licenceNo;
			cout << "Position:";cin >> position;
			cout << "TC No:";cin >> tcNumber;
			cout << "Salary:";cin >> salary;
			cout << "Birthday";cin >> birthday;
			// Yeni dosyayý aç ve vektördeki satýrlarý yaz
			ofstream new_file("footballer.txt", ios::app);
			for (size_t i = 0; i < lines.size(); ++i)
			{

				new_file << fullname << setw(8) << licenceNo << setw(8) << position << setw(8) << tcNumber << setw(8) << salary << setw(8) << birthday;
				new_file.close();
			}
		}

	}

	void listPlayer()
	{
		ifstream file("footballer.txt");
		if (!file.is_open())
		{
			cout << "File could not opened." << endl;
		}
		string line;
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
};
class team
{
public:
	ofstream teamFile;
	string TeamName, TeamAdress, leadername, playerName, control_team_name, control_player, fullname, position;
	int phoneNumber = 0, licenceNo = 0, salary = 0, birthday = 0, tcNumber = 0, TeamNumber = 0, playerno = 0;

	void menu()
	{
		cout << "*Team Menu*" << endl;
		cout << "1-Create team" << endl;
		cout << "2-Delete team" << endl;
		cout << "3- Add Football player to the team" << endl;
		cout << "4-Delete Football player from the team" << endl;
		cout << "5-List The Football Players of team" << endl;
		cout << "6-Update The Football Player of team" << endl;
	}
	void createTeam()
	{
		cout << "Enter  Team Number" << endl;
		cin >> TeamNumber;
		cout << "Enter Team Name:" << endl;
		cin >> TeamName;
		cout << "Enter Team Adress:" << endl;
		cin >> TeamAdress;
		cout << "Enter Team Phone Number:" << endl;
		cin >> phoneNumber;
		cout << "Enter Leader Name" << endl;
		cin >> leadername;
		cout << "Enter number of players:" << endl;
		cin >> playerno;
		cout << "Eklenen takýmýn bilgileri:";
		cout << TeamNumber << setw(12) << TeamName << setw(12) << TeamAdress << setw(12) << phoneNumber << setw(12) << leadername << setw(12) << playerno << endl;

		teamFile.open("teamfile.txt", ios::app);
		teamFile << TeamNumber << setw(8) << TeamName << setw(8) << TeamAdress << setw(8) << phoneNumber << setw(8) << leadername << setw(8) << playerno << endl;
		teamFile.close();
	}
	void deleteTeam()
	{
		string teamName;
		cout << "Enter the name of the team you want to delete: ";
		cin >> teamName;
		fstream read_file;
		read_file.open("teamfile.txt");
		if (read_file.fail())
		{
			cout << "Error opening file." << endl;
			return;
		}
		vector<string> lines;
		string line;
		while (getline(read_file, line))
			lines.push_back(line);
		read_file.close();
		ofstream write_file;
		write_file.open("teamfile.txt", ios::trunc); // Truncate the file (clear content)
		bool teamFound = false;
		for (int i = 0; i < lines.size(); i++)
		{
			// Check if the team name is found in the line
			if (lines[i].find(teamName) == string::npos)
			{
				write_file << lines[i] << endl; // Rewrite the line if the team name is not found
			}
			else
			{
				teamFound = true;
			}
		}
		write_file.close();
		if (teamFound)
		{
			cout << "Team '" << teamName << "' has been deleted." << endl;
		}
		else
		{
			cout << "Team '" << teamName << "' not found in the file." << endl;
		}
	}
	void addfootballer()
	{
		cout << "Enter Team" << setw(12) << endl;
		cin >> TeamName;
		ifstream readfile;
		readfile.open("teamfile.txt");

		if (!readfile.is_open())
		{
			cout << "Error opening file" << endl;
		}
		else
		{
			vector<string> lines;  // Vector to store lines
			string line;
			while (getline(readfile, line))
			{
				lines.push_back(line);
			}
			readfile.close();

			bool teamFound = false;
			for (int i = 0; i < lines.size(); ++i)
			{
				if (lines[i].find(TeamName) != string::npos)
				{
					// Remove the old line
					lines.erase(lines.begin() + i);

					// Add the new information
					cout << "*Team Information \n";
					cout << "Team Name:"; cin >> TeamName;
					cout << "New Player Fullname:"; cin >> playerName;
					cout << "LÝcence No:"; cin >> licenceNo;
					cout << "Position:"; cin >> position;
					cout << "tc NO:"; cin >> tcNumber;
					cout << "Salary:"; cin >> salary;
					cout << "Birthday:"; cin >> birthday;

					// Add the new line
					lines.push_back(TeamName + " " + playerName + " " + to_string(licenceNo) + " " + position + " " + to_string(tcNumber) + " " + to_string(salary) + " " + to_string(birthday));

					// Set teamFound to true
					teamFound = true;

					// Increment the number of players for the team
					number(TeamName, true);

					break;  // Exit the loop after finding the team
				}
			}

			if (!teamFound)
			{
				cout << "Team Not Found." << endl;
			}

			// Rewrite the file with updated information
			ofstream write_file("footballer.txt", ios::trunc);  // Truncate the file (clear content)
			for (size_t i = 0; i < lines.size(); ++i)
			{
				write_file << lines[i] << endl;
			}
			write_file.close();
		}
	}
	void deletefootballer()
	{
		string TeamName, playerName, line;
		vector<string> teamLines;  // Vector to store team lines

		cout << "Which team do you want to delete players from?" << endl;
		cin >> TeamName;

		// Clear the newline character from the input buffer
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		cout << "Which player do you want to delete ? ?" << endl;
		getline(cin, playerName);

		ifstream read_team("teamfile.txt");
		ofstream temporary("temp_team.txt", ios::app);  // Temporary team file

		while (getline(read_team, line))
		{
			size_t found = line.find(TeamName);
			if (found != string::npos)
			{
				ifstream read_player("footballer.txt");
				vector<string> playerLines;  // Vector to store player lines
				bool foundPlayer = false;

				while (getline(read_player, line))
				{
					size_t playerFound = line.find(playerName);
					if (playerFound != string::npos)
					{
						foundPlayer = true;
					}
					else
					{
						playerLines.push_back(line);
					}
				}
				read_player.close();

				if (foundPlayer)
				{
					cout << "Player Deleted." << endl;

					// Yeni dosyayý aç ve oyuncunun olmadýðý satýrlarý yaz
					ofstream new_player_file("footballer.txt");
					for (size_t i = 0; i < playerLines.size(); ++i)
					{
						new_player_file << playerLines[i] << endl;
					}
					new_player_file.close();
				}
				else
				{
					cout << "There is no player with such a name." << endl;
				}
			}
			else
			{
				// Takým satýrýný geçici dosyaya yaz
				temporary << line << endl;
			}
		}

		// Close the files
		read_team.close();
		temporary.close();
	}
	void listfootballers()
	{
		ifstream teamFile("teamfile.txt");
		if (!teamFile.is_open())
		{
			cout << "Team file cannot be opened." << endl;
			return;
		}
		string line;
		cout << "Enter the team name to list football players: ";
		cin >> control_team_name;
		bool teamFound = false;
		while (getline(teamFile, line))
		{
			size_t found = line.find(control_team_name);
			if (found != string::npos)
			{
				teamFound = true;
				break;
			}
		}
		if (!teamFound)
		{
			cout << "Team not found." << endl;
			teamFile.close();
			return;
		}
		ifstream playerFile("footballer.txt");
		if (!playerFile.is_open())
		{
			cout << "Player file cannot be opened." << endl;
			teamFile.close();
			return;
		}
		cout << "*Football Players of Team " << control_team_name << "*" << endl;
		while (getline(playerFile, line))
		{
			size_t found = line.find(control_team_name);
			if (found != string::npos)
			{
				cout << line << endl;
			}
		}
		teamFile.close();
		playerFile.close();
	}
	void updatefootballer()
	{
		players();
		string control_player;
		string line;
		ifstream read_file("footballer.txt");
		vector<string> lines;  // Vector to store lines
		cout << "Which Player you want to delete" << endl;
		cin >> control_player;
		bool found = false;
		// Satýrlarý oku ve kontrol et
		while (getline(read_file, line))
		{
			// Eðer aranan oyuncu bu satýrda deðilse, vektöre ekle
			if (line.find(control_player) == string::npos)//“string::npos”, size_t maksimum deðerini tutar.
			{
				lines.push_back(line);
			}
			else
			{
				// Aranan oyuncu bulunduysa, found'u true yap
				found = true;
			}
		}
		read_file.close();
		if (!found)
		{
			cout << "There is no player with such a name." << endl;
		}
		else
		{
			cout << "*Team Information \n";
			cout << "Team Name:"; cin >> TeamName;
			cout << "New Player Fullname:"; cin >> playerName;
			cout << "LÝcence No:"; cin >> licenceNo;
			cout << "Position:"; cin >> position;
			cout << "tc NO:"; cin >> tcNumber;
			cout << "Salary:"; cin >> salary;
			cout << "Birthday:"; cin >> birthday;
			// Yeni dosyayý aç ve vektördeki satýrlarý yaz
			ofstream new_file("footballer.txt", ios::app);
			for (size_t i = 0; i < lines.size(); ++i)
			{

				new_file << fullname << setw(8) << licenceNo << setw(8) << position << setw(8) << tcNumber << setw(8) << salary << setw(8) << birthday;
				new_file.close();
			}
		}

	}
};
int main()
{
	setlocale(LC_ALL, "Turkish");
	string choose1;
	int choose2 = 0;
	team t;
	footballer f;
	game m;
	players();
	teams();
	score();
	do
	{
		cout << "a.Player Menu b.Team Menu c.Genel Menü " << endl;
		cin >> choose1;

		if (choose1 == "a" || choose1 == "A")
		{
			do
			{

				f.menu();
				cin >> choose2;
				switch (choose2)
				{
				case 1:
					f.addPlayer();
					break;
				case 2:
					f.deletePlayer();
					break;
				case 3:
				{
					f.updatePlayer();
					break;
				}
				case 4:
					f.listPlayer();
					break;
				}
				if (choose2 != 5)
				{
					string chooose3;
					cout << "Did you want to countinue with this menu? (Yes/No)" << endl;
					cin >> chooose3;
					if (chooose3 != "Yes" && chooose3 != "yes")
					{
						choose2 = 5;
					}
				}

			} while (choose2 != 5);

		}

		else if (choose1 == "b" || choose1 == "B")
		{
			do
			{
				t.menu();
				cin >> choose2;
				switch (choose2)
				{
				case 1:
				{
					t.createTeam();
					break;
				}
				case 2:
					t.deleteTeam();
					break;
				case 3:
				{
					t.addfootballer();
					break;
				}
				case 4:
					t.deletefootballer();
					break;
				case 5:
					t.listfootballers();
					break;
				case 6:
					t.updatefootballer();
					break;
				}
				if (choose2 != 7)
				{
					string chooose3;
					cout << "Did you want to countinue with this menu? (Yes/No)" << endl;
					cin >> chooose3;
					if (chooose3 != "Yes" && chooose3 != "yes")
					{
						choose2 = 7;
					}
				}
			} while (choose2 != 7);
		}

		else if (choose1 == "c" || choose1 == "C")
		{
			do
			{
				m.menu();
				cin >> choose2;
				switch (choose2)
				{
				case 1:
					m.match();
					break;
				case 2:
					m.weeklyinfo();
					break;

					if (choose2 != 3)
					{
						string chooose3;
						cout << "Did you want to countinue with this menu? (Yes/No)" << endl;
						cin >> chooose3;
						if (chooose3 != "Yes" && chooose3 != "yes")
						{
							choose2 = 3;
						}
					}
				}
			} while (choose2 != 3);
		}

	} while (true);

	return 0;
}