--Мельников Иван
-- PostgreSQL database dump
--

-- Dumped from database version 17.5
-- Dumped by pg_dump version 17.5

-- Started on 2025-07-10 21:28:21

SET statement_timeout = 0;
SET lock_timeout = 0;
SET idle_in_transaction_session_timeout = 0;
SET transaction_timeout = 0;
SET client_encoding = 'UTF8';
SET standard_conforming_strings = on;
SELECT pg_catalog.set_config('search_path', '', false);
SET check_function_bodies = false;
SET xmloption = content;
SET client_min_messages = warning;
SET row_security = off;

--
-- TOC entry 4906 (class 0 OID 16403)
-- Dependencies: 218
-- Data for Name: author; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public.author (id_author, name_author, description) VALUES ('0c28a091-7908-49f2-918d-df8f968cc882', 'Автор2', 'Описание автора1');
INSERT INTO public.author (id_author, name_author, description) VALUES ('33e0091f-440c-4844-9375-a5601cc02553', 'Автор1', 'Описание автора2');
INSERT INTO public.author (id_author, name_author, description) VALUES ('d66338c7-6c0a-405c-8cce-5f262b724aa9', 'Автор3', 'Описание автора3');


--
-- TOC entry 4907 (class 0 OID 16411)
-- Dependencies: 219
-- Data for Name: book; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public.book (id_book, name_book, id_genre, id_author, date_created, description) VALUES ('b4d9fc5a-9aec-4bf4-955e-359b64850267', 'Книга_1', '32adda3c-964d-44a1-bfe9-50187e995ff1', '0c28a091-7908-49f2-918d-df8f968cc882', '2000-01-01', 'Описание книги_1');
INSERT INTO public.book (id_book, name_book, id_genre, id_author, date_created, description) VALUES ('a679081b-f028-4208-b819-40541b532c4b', 'Книга_3', 'e15bd810-5038-4e0c-a19f-04e697c4c503', 'd66338c7-6c0a-405c-8cce-5f262b724aa9', '2006-01-01', 'Описание книги_3');
INSERT INTO public.book (id_book, name_book, id_genre, id_author, date_created, description) VALUES ('73e3b736-c84f-423c-9608-f28804092277', 'Книга_2', 'f308cc10-418b-4177-95f1-1b4a9d029408', '33e0091f-440c-4844-9375-a5601cc02553', '2005-01-01', 'Описание книги_2');


--
-- TOC entry 4905 (class 0 OID 16395)
-- Dependencies: 217
-- Data for Name: genre; Type: TABLE DATA; Schema: public; Owner: postgres
--

INSERT INTO public.genre (id_genre, name_genre) VALUES ('32adda3c-964d-44a1-bfe9-50187e995ff1', 'Научная литература');
INSERT INTO public.genre (id_genre, name_genre) VALUES ('f308cc10-418b-4177-95f1-1b4a9d029408', 'Художественная литература');
INSERT INTO public.genre (id_genre, name_genre) VALUES ('e15bd810-5038-4e0c-a19f-04e697c4c503', 'Биография');


-- Completed on 2025-07-10 21:28:21

--
-- PostgreSQL database dump complete
--

