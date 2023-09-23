include makeconfig

all:	$(CPPOBJ)
	@$(CC) $(CPPOBJ) $(CPPFLAGS) -o $(FILENAME)
	@echo "Your file \"$(FILENAME)\" is ready"

withLib: createlib $(CPPOBJ)
	@$(CC) $(CPPOBJ) -lmylib -L $(LIB_PATH) $(CPPFLAGS) -o $(FILENAME)
	@echo "Your file \"$(FILENAME)\" with library is ready"

%.o: %.c
	@$(CC) $(CPPFLAGS) -c $(INC) $< -o $@

createlib:
	@$(MAKE) -C $(LIB_PATH) $@

coverage: all
	@./${FILENAME}
	@lcov -c -d . -o index.info
	@genhtml index.info -o html --ignore-errors source

coverage_clean: clean
	@rm *.gcda *.gcno index.info Classes/*.gcda Classes/*.gcno 
	@rm -rf html/

clean:
	@rm *.o $(FILENAME) Classes/*.o
	@echo "Cleaned your workspace!"


