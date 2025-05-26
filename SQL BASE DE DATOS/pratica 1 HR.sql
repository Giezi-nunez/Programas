SET SERVEROUTPUT ON

DECLARE
      v_bonus NUMBER (8,2);
BEGIN 
      SELECT salary *0.10
      INTO     v_bonus
      FROM    employees
      WHERE   employee_id = 176;
 DBMS_OUTPUT.PUT_LINE (´El valor del bono es;'|| TO_CHAR (v_banus) );
END;
/