compile:
	g++ main.cpp -o cosmetify

run:
	./cosmetify statsold.json statsnew.json

clean:
	rm -f ./statsnew.json
	rm -f ./cosmetify