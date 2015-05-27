!kuku.f77
  PROGRAM TABLES
    DO 20, I = 2,9
    PRINT *,I,' TIMES TABLE'
      DO 10, J = 1,9
10      PRINT *,I,' TIMES',J,' IS',I*J
20    CONTINUE
  END
