-- Sample DB Employees 학습
-- Department 부서테이블 조회
SELECT dp.dept_no, dp.dept_name
FROM departments as dp;

SELECT dm.emp_no, dm.dept_no, dm.from_date, dm.to_date
FROM dept_manager as dm;

-- 합치기
SELECT dp.dept_no
	 , dp.dept_name
     , dm.emp_no
     , dm.from_date
     , dm.to_date
     , DATE_FORMAT(em.birth_date, '%Y년 %m월 %d일') as '생일'
     , CONCAT(em.first_name, ' ', em.last_name) as 'full_name'
     , CASE WHEN em.gender = 'F' THEN '여성'
            WHEN em.gender = 'M' THEN '남성'
            ELSE '오류' END as '성별'
  FROM departments as dp
 INNER JOIN dept_manager as dm
    ON dp.dept_no = dm.dept_no
 INNER JOIN employees as em
    ON em.emp_no = dm.emp_no;
    
-- Employees
-- SELECT em.emp_no, em.birth_date, em.first_name, em.last_name, em.gender, em.hire_date
--   FROM employees as em;

-- Employees & Salaries
SELECT em.emp_no
	 , em.birth_date
     , em.first_name
     , em.last_name
     , em.gender
     , em.hire_date
     , sl.salary
     , sl.from_date
     , sl.to_date
  FROM employees as em
 INNER JOIN salaries as sl
    ON em.emp_no = sl.emp_no
 WHERE em.emp_no = 10002;
 
  SELECT SUM(salary)
   FROM salaries;    -- 181480757419 (1800억)
   
 SELECT count(*)
   FROM salaries;    -- 2844047건
   
 SELECT sl.emp_no
	  , SUM(salary) as '평균총합'
      , AVG(sl.salary) as '평균연봉'
      , count(sl.salary) as '근무년수'
   FROM salaries as sl
  WHERE sl.emp_no <= 10299
  GROUP BY sl. emp_no
 HAVING COUNT(sl.salary >= 15);

-- 회사 직원 중 10299번까지 직원의 
-- 평균연봉, 연봉총합, 근무년수를 출력 
SELECT res.emp_no
     , res.1 as '연봉총합'
     , res.2 as '평균연봉'
     , res.3 as '근무년수'
     , emp.first_name
     , emp.last_name
     , emp.gender
  FROM (
		SELECT sl.emp_no
			 , SUM(salary) as '1'
			 , AVG(sl.salary) as '2'
			 , count(sl.salary) as '3'
		  FROM salaries as sl
		 WHERE sl.emp_no <= 10299
	     GROUP BY sl. emp_no
		HAVING COUNT(sl.salary >= 15)
 ) as res
 INNER JOIN employees as emp
    ON res.emp_no = emp.emp_no;
  