-- SQL (Structured Query Language)
-- 1. SELECT 쿼리 (조회)
-- 기본 쿼리
SELECT * 
FROM contact;

-- 기본 쿼리 
SELECT Id,name,phonenum,email,addr
FROM ems.contact;

-- 데이터가 몇개 조회쿼리
SELECT count(*) 
FROM contact;

-- 데이터를 원하는 컬럼만 조회
SELECT name, phonenum, email
FROM contact;

-- 원하는 결과만 조회
SELECT *
FROM contact
WHERE Id = 2; -- PK 조회가 일반적

-- 이름으로 조회하는 쿼리
SELECT *
FROM contact
WHERE name = '홍길동'; -- DB에서는 같은 지 비교 시 '='

-- 2. INSERT 쿼리
 INSERT INTO contact (name, phonenum, email, addr) 
 Values ('홍길순', '010-1111-8888', 'hgs@daum.net', '횡성');
 
 -- NULL값 제외
 INSERT INTO contact (name, phonenum)
 Values('손흥민', '010-7878-9090');
 
 INSERT INTO contact (name, phonenum, email, addr) 
 VALUES ('이동욱', '010-9898-5656', 'ldw@gmail.com', '서울');
 
 -- 3. UPDATE 쿼리 (데이터 수정)
 -- 홍길동 id = 1, phonenum = 010-0000-9999 --> 010-7777-6648
 UPDATE contact 
 SET phonenum = '010-7777-6648'
 WHERE Id = 1;

-- 컬럼이 1개이상 변경
UPDATE contact
SET phonenum = '010-2222-3333',
	email = 'gdhong@yahoo.com'
WHERE Id = 1;

-- 4. DELETE 삭제쿼리
DELETE FROM contact
WHERE id = 2;