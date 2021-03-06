#pragma config(Sensor, dgtl11, shaftencoder,   sensorQuadEncoder)
#pragma config(Motor,  port1,           left,          tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           leftlift,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           leftlift2,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           left2,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           arm,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           arm2,          tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           right2,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port8,           rightlift2,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           rightlift,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          right,         tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
const short leftButton = 1;
const short centerButton = 2;
const short rightButton = 4;

bool autoRunningCurrently = false;
bool manualRunningCurrently = false;

string mainBattery, backupBattery;

bool leftSide = false;

void waitForRelease()
{
	while(nLCDButtons != 0){}
	wait1Msec(5);
}

void autoFirst() {
	autoRunningCurrently = true;
	motor[arm]=120;
	motor[arm2]=120;
	motor[right]=127;
	motor[left]=127;
	motor[right2]=127;
	motor[left2]=127;


	wait1Msec(700);
	stopAllMotors();

	SensorValue[shaftencoder] = 0;

	while(SensorValue[shaftencoder] < 78)
	{
		motor[leftlift]=120;
		motor[rightlift]=120;
		motor[leftlift2]=120;
		motor[rightlift2]=120;
	}
	stopAllMotors();
	motor[right]=127;
	motor[left]=127;
	motor[right2]=127;
	motor[left2]=127;
	wait1Msec(1500);
	stopAllMotors();


	motor[right]=-127;
	motor[left]=-127;
	motor[right2]=-127;
	motor[left2]=-127;
	wait1Msec(900);
	stopAllMotors();



	motor[right]=127;
	motor[left]=-127;
	motor[right2]=127;
	motor[left2]=-127;
	wait1Msec(800);
	stopAllMotors();


	motor[leftlift]=-120;
	motor[rightlift]=-120;
	motor[leftlift2]=-120;
	motor[rightlift2]=-120;
	wait1Msec(1200);
	stopAllMotors();



	motor[right]=127;
	motor[left]=127;
	motor[right2]=127;
	motor[left2]=127;
	wait1Msec(900);
	stopAllMotors();



	motor[arm]=120;
	motor[arm2]=120;
	wait1Msec(1700);
	stopAllMotors();

	motor[leftlift]=120;
	motor[rightlift]=120;
	motor[leftlift2]=120;
	motor[rightlift2]=120;
	motor[arm]=100;
	motor[arm2]=100;
	motor[right]=-120;
	motor[left]=120;
	motor[right2]=-120;
	motor[left2]=120;
	wait1Msec(1600);
	stopAllMotors();



	motor[leftlift]=120;
	motor[rightlift]=120;
	motor[leftlift2]=120;
	motor[rightlift2]=120;
	wait1Msec(400);
	stopAllMotors();
	motor[leftlift]=120;
	motor[rightlift]=120;
	motor[leftlift2]=120;
	motor[rightlift2]=120;
	motor[arm]=60;
	motor[arm2]=60;
	wait1Msec(650);
	stopAllMotors();
	motor[right]=127;
	motor[left]=127;
	motor[right2]=127;
	motor[left2]=127;
	wait1Msec(1250);
	stopAllMotors();


	motor[arm]=-120;
	motor[arm2]=-120;
	wait1Msec(700);
	stopAllMotors();
	motor[right]=-127;
	motor[left]=-127;
	motor[right2]=-127;
	motor[left2]=-127;
	wait1Msec(1000);
	stopAllMotors();
	autoRunningCurrently = false;
}

void autoSecond() {
	autoRunningCurrently = true;
	motor[arm]=120;
	motor[arm2]=120;
	motor[right]=127;
	motor[left]=127;
	motor[right2]=127;
	motor[left2]=127;


	wait1Msec(700);
	stopAllMotors();

	SensorValue[shaftencoder] = 0;

	while(SensorValue[shaftencoder] < 78)
	{
		motor[leftlift]=120;
		motor[rightlift]=120;
		motor[leftlift2]=120;
		motor[rightlift2]=120;
	}
	stopAllMotors();
	motor[right]=127;
	motor[left]=127;
	motor[right2]=127;
	motor[left2]=127;
	wait1Msec(1500);
	stopAllMotors();



	motor[arm2] = 127;
	motor[arm] = 127;
	motor[right]=50;
	motor[left]=50;
	motor[right2]=50;
	motor[left2]=50;
	wait1Msec(1000);
	motor[arm2] =-127;
	motor[arm] =-127;
	wait1Msec(500);
	stopAllMotors();

	motor[right]=-127;
	motor[left]=-127;
	motor[right2]=-127;
	motor[left2]=-127;
	wait1Msec(900);



	motor[right]=-127;
	motor[left]=127;
	motor[right2]=-127;
	motor[left2]=127;
	wait1Msec(600);
	stopAllMotors();


	motor[leftlift]=-120;
	motor[rightlift]=-120;
	motor[leftlift2]=-120;
	motor[rightlift2]=-120;
	wait1Msec(1200);
	stopAllMotors();



	motor[right]=127;
	motor[left]=127;
	motor[right2]=127;
	motor[left2]=127;
	wait1Msec(900);
	stopAllMotors();



	motor[arm]=120;
	motor[arm2]=120;
	wait1Msec(1700);
	stopAllMotors();

	motor[leftlift]=120;
	motor[rightlift]=120;
	motor[leftlift2]=120;
	motor[rightlift2]=120;
	motor[arm]=100;
	motor[arm2]=100;
	motor[right]=120;
	motor[left]=-120;
	motor[right2]=120;
	motor[left2]=-120;
	wait1Msec(1600);
	stopAllMotors();



	motor[leftlift]=120;
	motor[rightlift]=120;
	motor[leftlift2]=120;
	motor[rightlift2]=120;
	wait1Msec(400);
	stopAllMotors();
	motor[leftlift]=120;
	motor[rightlift]=120;
	motor[leftlift2]=120;
	motor[rightlift2]=120;
	motor[arm]=40;
	motor[arm2]=40;
	wait1Msec(650);
	stopAllMotors();
	motor[right]=127;
	motor[left]=127;
	motor[right2]=127;
	motor[left2]=127;
	wait1Msec(1250);
	stopAllMotors();


	motor[arm]=-120;
	motor[arm2]=-120;
	wait1Msec(700);
	stopAllMotors();
	motor[right]=-127;
	motor[left]=-127;
	motor[right2]=-127;
	motor[left2]=-127;
	wait1Msec(1000);
	stopAllMotors();
	autoRunningCurrently = false;
}

void autoThird() {
	autoRunningCurrently = true;
	motor[arm] =55;
	motor[arm2] = 55;
	wait1Msec(300);
	motor[arm] = 0;
	motor[arm] = 0;

	wait1Msec(1600);

	motor[right] = 127;
	motor[left] = 120;
	motor[right2] = 127;
	motor[left2] = 120;//ens his hands and pushes the stars underneath
	motor[arm] = 5;
	motor[arm2] = 5;
	wait1Msec(3000);
	motor[right] = 0;
	motor[left] = 0;
	motor[right2] = 0;
	motor[left2] =0;
	motor[arm] = 0;
	motor[arm2] = 0;

	motor[right] = -127;
	motor[left] = -127; //goes back a bit
	motor[right2] = -127;
	motor[left2] = -127;
	motor[arm] = -50;
	motor[arm2] = -50;
	wait1Msec(900);

	motor[right] = -127;
	motor[right2] = -127;
	motor[left] = 127;
	motor[left2] = 127;
	motor[arm] = 50;
	motor[arm2] = 50;
	//turns right (4 the pillow)
	wait1Msec(650);
	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = 127;
	motor[left2] = 127;
	wait1Msec(500);
	stopAllMotors();

	motor[arm] = 127;
	motor[arm2] = 127;
	wait1Msec(1200);
	motor[arm] = 90;
	motor[arm2] = 90;
	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = -80;
	motor[left2] = -80;
	while(SensorValue[shaftencoder] < 60)
	{
		motor[rightlift] = 110;
		motor[rightlift2] = 110;
		motor[leftlift] = 110;
		motor[leftlift2] = 110;
	}

	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = 127;
	motor[left2] = 127;
	wait1Msec(1800);
	motor[arm] = -127;
	motor[arm2] = -127;
	wait1Msec(900);

	motor[arm] = 0;
	motor[arm2] = 0;
	motor[right] = -127;
	motor[right2] = -127;
	motor[left] = -127;
	motor[left2] = -127;
	wait1Msec(500);
	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = 127;
	motor[left2] = 127;
	wait1Msec(700);
	motor[right] = -127;
	motor[right2] = -127;
	motor[left] = -127;
	motor[left2] = -127;
	wait1Msec(1000);
	motor[right] = 0;
	motor[right2] = 0;
	motor[left] = 0;
	motor[left2] = 0;
	autoRunningCurrently = false;
}

void autoFourth() {
	autoRunningCurrently = true;
	motor[arm] =55;
	motor[arm2] = 55;
	wait1Msec(300);
	motor[arm] = 0;
	motor[arm] = 0;

	wait1Msec(1600);

	motor[right] = 127;
	motor[left] = 120;
	motor[right2] = 127;
	motor[left2] = 120;//ens his hands and pushes the stars underneath
	motor[arm] = 5;
	motor[arm2] = 5;
	wait1Msec(3000);
	motor[right] = 0;
	motor[left] = 0;
	motor[right2] = 0;
	motor[left2] =0;
	motor[arm] = 0;
	motor[arm2] = 0;

	motor[right] = -127;
	motor[left] = -127; //goes back a bit
	motor[right2] = -127;
	motor[left2] = -127;
	motor[arm] = -50;
	motor[arm2] = -50;
	wait1Msec(900);

	motor[right] = -127;
	motor[right2] = -127;
	motor[left] = 127;
	motor[left2] = 127;
	motor[arm] = 50;
	motor[arm2] = 50;
	//turns right (4 the pillow)
	wait1Msec(650);
	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = 127;
	motor[left2] = 127;
	wait1Msec(500);
	stopAllMotors();

	motor[arm] = 127;
	motor[arm2] = 127;
	wait1Msec(1200);
	motor[arm] = 90;
	motor[arm2] = 90;
	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = -80;
	motor[left2] = -80;
	while(SensorValue[shaftencoder] < 60)
	{
		motor[rightlift] = 110;
		motor[rightlift2] = 110;
		motor[leftlift] = 110;
		motor[leftlift2] = 110;
	}

	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = 127;
	motor[left2] = 127;
	wait1Msec(1800);
	motor[arm] = -127;
	motor[arm2] = -127;
	wait1Msec(900);

	motor[arm] = 0;
	motor[arm2] = 0;
	motor[right] = -127;
	motor[right2] = -127;
	motor[left] = -127;
	motor[left2] = -127;
	wait1Msec(500);
	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = 127;
	motor[left2] = 127;
	wait1Msec(700);
	motor[right] = -127;
	motor[right2] = -127;
	motor[left] = -127;
	motor[left2] = -127;
	wait1Msec(1000);
	motor[right] = 0;
	motor[right2] = 0;
	motor[left] = 0;
	motor[left2] = 0;
	autoRunningCurrently = false;
}

void autoFifth() {
	autoRunningCurrently = true;
	motor[arm] = 127;
	motor[arm2] = 127;
	wait1Msec(950);
	motor[arm] = 0;
	motor[arm2] = 0;
	motor[right] = 127;
	motor[left] = -127;
	motor[right2] = 127;
	motor[left2] = -127;
	wait1Msec(1200);

	motor[right] = -127;
	motor[left] = -127;
	motor[right2] = -127;
	motor[left2] = -127;
	wait1Msec(900);
	motor[rightlift] = -7;
	motor[rightlift2] = -7;
	motor[leftlift] = -7;
	motor[leftlift2] = -7;
	motor[right] = 100;
	motor[left] = 127;
	motor[right2] = 100;
	motor[left2] = 127;
	wait1Msec(4000);

	motor[arm] = 127;
	motor[arm2] = 127;
	motor[right] = -127;
	motor[right2] = -127;
	motor[left] = 127;
	motor[left2] = 127;
	motor[rightlift] = 127;
	motor[rightlift2] = 127;
	motor[leftlift2] = 127;
	wait1Msec(600);
	stopAllMotors();

	/*

	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = 127;
	motor[left2] = 127;
	wait1Msec(600);
	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = 127;
	motor[left2] = 127;
	motor[rightlift] = 127;
	motor[rightlift2] = 127;
	motor[leftlift] = 127;
	motor[leftlift2] = 127;
	wait1Msec(1600);
	*/
	autoRunningCurrently = false;
}

void autoSixth() {
	autoRunningCurrently = true;
	motor[arm] = 127;
	motor[arm2] = 127;
	wait1Msec(950);
	motor[arm] = 0;
	motor[arm2] = 0;
	motor[right] = -127;
	motor[left] = 127;
	motor[right2] = -127;
	motor[left2] = 127;
	wait1Msec(1200);

	motor[right] = -127;
	motor[left] = -127;
	motor[right2] = -127;
	motor[left2] = -127;
	wait1Msec(900);
	motor[rightlift] = -7;
	motor[rightlift2] = -7;
	motor[leftlift] = -7;
	motor[leftlift2] = -7;
	motor[right] = 100;
	motor[left] = 127;
	motor[right2] = 100;
	motor[left2] = 127;
	wait1Msec(4000);

	motor[arm] = 127;
	motor[arm2] = 127;
	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = -127;
	motor[left2] = -127;
	motor[rightlift] = 127;
	motor[rightlift2] = 127;
	motor[leftlift2] = 127;
	wait1Msec(600);
	stopAllMotors();

	/*

	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = 127;
	motor[left2] = 127;
	wait1Msec(600);
	motor[right] = 127;
	motor[right2] = 127;
	motor[left] = 127;
	motor[left2] = 127;
	motor[rightlift] = 127;
	motor[rightlift2] = 127;
	motor[leftlift] = 127;
	motor[leftlift2] = 127;
	wait1Msec(1600);
	*/
	autoRunningCurrently = false;
}

void auto1Minute() {
	autoRunningCurrently = true;
	wait10Msec(100);
	autoRunningCurrently = false;
}

string autoNames[] = {"FirstAuto", "FirstAutoL", "CounterStrategy", "CounterStrategyL", "NotWorkingR", "NotWorkingL", "OneMinuteAuto"};
int selCount = 0;

void setLCD() {
	clearLCDLine(0);
	clearLCDLine(1);
	if(selCount == 0) {
		displayLCDCenteredString(0, autoNames[selCount]);
		displayLCDCenteredString(1, "      OK     >");
	}
	else if(selCount >= 1 && selCount <= 6) {
		displayLCDCenteredString(0, autoNames[selCount]);
		displayLCDCenteredString(1, "<     OK     >");
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
	else if(selCount == 8) {
		displayLCDCenteredString(0, "Manual");
		displayLCDCenteredString(1, "<     OK     ");
	}
}

void setAutoRunningLCD() {
	clearLCDLine(0);
	clearLCDLine(1);
	displayLCDCenteredString(0, "Auto running");
	displayLCDCenteredString(1, autoNames[selCount]);
}

void setManualRunningLCD() {
	clearLCDLine(0);
	clearLCDLine(1);

	if(manualRunningCurrently) {
		displayLCDCenteredString(0, "Manual running");
		displayLCDCenteredString(1, "8U to exit");
	}
}
void manualRun() {
	manualRunningCurrently = true;
	setManualRunningLCD();
	SensorValue[shaftencoder] = 0;
	while(true) {

		motor[right] = (vexRT[Ch2]);
		motor[right2] = (vexRT[Ch2]);
		motor[left] = (vexRT[Ch3]);
		motor[left2] = (vexRT[Ch3]);

		if (vexRT[Btn8R] == 1)
		{
			SensorValue[shaftencoder] = 0;
		}

		if (vexRT[Btn5U] == 1)
		{
			motor[rightlift] = 127;
			motor[rightlift2] = 127;
			motor[leftlift] = 127;
			motor[leftlift2] = 127;
		}
		else if (vexRT[Btn5D] == 1 && SensorValue[shaftencoder]>10)
		{
			motor[rightlift] = -127;
			motor[rightlift2] = -127;
			motor[leftlift] = -127;
			motor[leftlift2] = -127;
		}
		else
		{
			motor[rightlift] = 0;
			motor[rightlift2] = 0;
			motor[leftlift] = 0;
			motor[leftlift2] = 0;
		}

		if (vexRT[Btn6U] == 1)
		{
			motor[arm] = 127;
			motor[arm2] = 127;
		}
		else if(vexRT[Btn6D] == 1)
		{
			motor[arm] = -127;
			motor[arm2] =-127;
		}
		else
		{
			motor[arm] = 0;
			motor[arm2] = 0;
		}
		if(vexRT[Btn8U] == 1) {
			manualRunningCurrently = false;
			setManualRunningLCD();
			return;

		}
	}
}

task main()
{
	bLCDBacklight = true;

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
				if(selCount > 8) {
					selCount = 8;
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
				case 8: manualRun(); break;
				default: break;
				}

				stopAllMotors();
				setLCD();
			}
		}
	}
}
