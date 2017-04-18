const short leftButton = 1;
const short centerButton = 2;
const short rightButton = 4;

bool autoRunningCurrently = false;
string mainBattery, backupBattery;

bool leftSide = false;

void waitForRelease()
{
	while(nLCDButtons != 0){}
	wait1Msec(5);
}

void autoFirst() {
	autoRunningCurrently = true;
	wait10Msec(100);
	autoRunningCurrently = false;
}

void autoSecond() {
	autoRunningCurrently = true;
	wait10Msec(100);
	autoRunningCurrently = false;
}

void autoThird() {
	autoRunningCurrently = true;
	wait10Msec(100);
	autoRunningCurrently = false;
}

void autoFourth() {
	autoRunningCurrently = true;
	wait10Msec(100);
	autoRunningCurrently = false;
}

void autoFifth() {
	autoRunningCurrently = true;
	wait10Msec(100);
	autoRunningCurrently = false;
}

void autoSixth() {
	autoRunningCurrently = true;
	wait10Msec(100);
	autoRunningCurrently = false;
}

void auto1Minute() {
	autoRunningCurrently = true;
	wait10Msec(100);
	autoRunningCurrently = false;
}

string autoNames[] = {"First auto", "Second auto", "Third auto", "Fourth auto", "Fifth auto", "Sixth auto", "1 minute auto"};
int selCount = 0;

void setLCD() {
	clearLCDLine(0);
	clearLCDLine(1);
	if(selCount >= 0 && selCount <= 6) {
		displayLCDCenteredString(0, autoNames[selCount]);
		displayLCDCenteredString(1, "<     GO     >");
	}
	else if(selCount == 7) {
		displayLCDString(0, 0, "Primary: ");
		sprintf(mainBattery, "%1.2f%c", nImmediateBatteryLevel/1000.0,'V'); //Build the value to be displayed
		displayNextLCDString(mainBattery);

		//Display the Backup battery voltage
		displayLCDString(1, 0, "Backup: ");
		sprintf(backupBattery, "%1.2f%c", BackupBatteryLevel/1000.0, 'V');	//Build the value to be displayed
		displayNextLCDString(backupBattery);
	}
}

void setAutoRunningLCD() {
	clearLCDLine(0);
	clearLCDLine(1);
	displayLCDCenteredString(0, "Auto running");
	displayLCDCenteredString(1, autoNames[selCount]);
}
task main()
{
	bLCDBacklight = true;

	displayLCDCenteredString(0, "CHOOSE SIDE");
	displayLCDCenteredString(1, "LEFT       RIGHT");

	while(true) {
		if(nLCDButtons == leftButton) {
			waitForRelease();
			leftSide = true;
			break;
		}
		else if(nLCDButtons == rightButton) {
			waitForRelease();
			leftSide = false;
			break;
		}
	}

	setLCD();
	while(true) {
		if(!autoRunningCurrently) {
			if(nLCDButtons == leftButton) {
				waitForRelease();
				selCount--;
				if(selCount < 0) {
					selCount = 0;
				}
				setLCD();
			}
			else if(nLCDButtons == rightButton) {
				waitForRelease();
				selCount++;
				if(selCount > 7) {
					selCount = 7;
				}
				setLCD();
			}
			else if(nLCDButtons == centerButton) {
				waitForRelease();
				switch(selCount) {
				case 0: setAutoRunningLCD(); autoFirst(); break;
				case 1: setAutoRunningLCD(); autoSecond(); break;
				case 2: setAutoRunningLCD(); autoThird(); break;
				case 3: setAutoRunningLCD(); autoFourth(); break;
				case 4: setAutoRunningLCD(); autoFifth(); break;
				case 5: setAutoRunningLCD(); autoSixth(); break;
				case 6: setAutoRunningLCD(); auto1Minute(); break;
				default: break;
				}

				setLCD();
			}
		}
	}
}
