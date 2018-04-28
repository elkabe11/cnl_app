void setup(void)
{
	pinMode(21, OUTPUT);
		pinMode(16, OUTPUT);

}

void loop(void)
{
	digitalWrite(21, HIGH);
	digitalWrite(16, HIGH);

	delay(200);
	digitalWrite(21, LOW);
	digitalWrite(16, LOW);
	delay(200);
}
