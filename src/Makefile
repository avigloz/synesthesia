all: greeting synesthesia
greeting:
	@echo "Building Synesthesia..."
decoder_o:
	g++ -g -c decoder.cpp
synesthesia: decoder_o
	g++ -o synesthesia synesthesia.cpp decoder.o
	@echo "Done!"
clean:
	@echo "Cleaning old files..."
	rm "decoder.o" "synesthesia"