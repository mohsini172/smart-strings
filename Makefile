.PHONY: clean All

All:
	@echo "----------Building project:[ stringCOWreferenceCounting - Debug ]----------"
	@cd "stringCOWreferenceCounting" && "$(MAKE)" -f  "stringCOWreferenceCounting.mk"
clean:
	@echo "----------Cleaning project:[ stringCOWreferenceCounting - Debug ]----------"
	@cd "stringCOWreferenceCounting" && "$(MAKE)" -f  "stringCOWreferenceCounting.mk" clean
