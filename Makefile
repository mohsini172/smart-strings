.PHONY: clean All

All:
	@echo "----------Building project:[ stringCOWreferenceLinking - Debug ]----------"
	@cd "stringCOWreferenceLinking" && "$(MAKE)" -f  "stringCOWreferenceLinking.mk"
clean:
	@echo "----------Cleaning project:[ stringCOWreferenceLinking - Debug ]----------"
	@cd "stringCOWreferenceLinking" && "$(MAKE)" -f  "stringCOWreferenceLinking.mk" clean
