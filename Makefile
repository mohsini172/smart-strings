.PHONY: clean All

All:
	@echo "----------Building project:[ stringCOWreferenceLinking - Release ]----------"
	@cd "stringCOWreferenceLinking" && "$(MAKE)" -f  "stringCOWreferenceLinking.mk"
clean:
	@echo "----------Cleaning project:[ stringCOWreferenceLinking - Release ]----------"
	@cd "stringCOWreferenceLinking" && "$(MAKE)" -f  "stringCOWreferenceLinking.mk" clean
