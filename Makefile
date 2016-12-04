.PHONY: clean All

All:
	@echo "----------Building project:[ stringCOW - Debug ]----------"
	@cd "stringCOW" && "$(MAKE)" -f  "stringCOW.mk"
clean:
	@echo "----------Cleaning project:[ stringCOW - Debug ]----------"
	@cd "stringCOW" && "$(MAKE)" -f  "stringCOW.mk" clean
