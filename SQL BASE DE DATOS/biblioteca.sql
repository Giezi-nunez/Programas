-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 20-03-2025 a las 16:30:13
-- Versión del servidor: 10.4.32-MariaDB
-- Versión de PHP: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `biblioteca`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `autores`
--

CREATE TABLE `autores` (
  `Id_autor` int(11) NOT NULL,
  `Nombre` varchar(100) NOT NULL,
  `Apellido` varchar(100) NOT NULL,
  `Fecha_nacimiento` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Volcado de datos para la tabla `autores`
--

INSERT INTO `autores` (`Id_autor`, `Nombre`, `Apellido`, `Fecha_nacimiento`) VALUES
(1, 'Gabriel', 'Garcia Marquez', '1927-03-06'),
(2, 'Jorgue Luis', 'Borgues', '1899-08-24'),
(3, 'Julio', 'Cortazar', '1914-08-26'),
(4, 'Isabel', 'Allende', '1942-08-02'),
(5, 'Mario', 'Vargas Llosa', '1936-03-28');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `libro`
--

CREATE TABLE `libro` (
  `ISBN` varchar(13) NOT NULL,
  `Titulo` varchar(100) NOT NULL,
  `Año_publicacion` int(11) NOT NULL,
  `Genero` varchar(100) NOT NULL,
  `cantidad_disponible` int(11) NOT NULL,
  `Id_autor` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Volcado de datos para la tabla `libro`
--

INSERT INTO `libro` (`ISBN`, `Titulo`, `Año_publicacion`, `Genero`, `cantidad_disponible`, `Id_autor`) VALUES
('9780307474728', 'Cien años de soledad', 1967, 'Novela', 10, 1),
('9788401354976', 'La casa de los espíritus', 1982, 'Novela', 8, 4),
('9788420471839', 'La ciudad y los perros', 1962, 'Novela', 6, 5),
('9788437604947', 'Ficciones', 1944, 'Cuentos', 5, 2),
('9788437604948', 'Rayuela', 1963, 'Novela', 7, 3);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `miembros`
--

CREATE TABLE `miembros` (
  `ID_Miembro` int(11) NOT NULL,
  `Nombre` varchar(100) NOT NULL,
  `Direccion` varchar(255) NOT NULL,
  `Telefono` varchar(15) NOT NULL,
  `Fecha_registro` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Volcado de datos para la tabla `miembros`
--

INSERT INTO `miembros` (`ID_Miembro`, `Nombre`, `Direccion`, `Telefono`, `Fecha_registro`) VALUES
(1, 'Juan', 'Calle Falsa 123', '555-1234', '2023-01-01'),
(2, 'Ana', 'Avenida Siempre Viva 456', '555-5678', '2023-02-15'),
(3, 'Luis', 'Boulevard Los Sueños 789', '555-8765', '2023-03-10'),
(4, 'Maria', 'Calle Luna 101', '555-4321', '2023-04-20'),
(5, 'Carlos', 'Avenida Sol 202', '555-6543', '2023-05-05');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `prestamo`
--

CREATE TABLE `prestamo` (
  `ID_Prestamo` int(11) NOT NULL,
  `ISBN_Libro` varchar(13) NOT NULL,
  `ID_Miembro` int(11) NOT NULL,
  `Fecha_prestamo` date NOT NULL,
  `Fecha_devolucion` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `autores`
--
ALTER TABLE `autores`
  ADD PRIMARY KEY (`Id_autor`);

--
-- Indices de la tabla `libro`
--
ALTER TABLE `libro`
  ADD PRIMARY KEY (`ISBN`),
  ADD KEY `Id_autor` (`Id_autor`);

--
-- Indices de la tabla `miembros`
--
ALTER TABLE `miembros`
  ADD PRIMARY KEY (`ID_Miembro`);

--
-- Indices de la tabla `prestamo`
--
ALTER TABLE `prestamo`
  ADD PRIMARY KEY (`ID_Prestamo`),
  ADD KEY `ISBN_Libro` (`ISBN_Libro`,`ID_Miembro`),
  ADD KEY `ID_Miembro` (`ID_Miembro`);

--
-- Restricciones para tablas volcadas
--

--
-- Filtros para la tabla `libro`
--
ALTER TABLE `libro`
  ADD CONSTRAINT `libro_ibfk_1` FOREIGN KEY (`Id_autor`) REFERENCES `autores` (`Id_autor`);

--
-- Filtros para la tabla `prestamo`
--
ALTER TABLE `prestamo`
  ADD CONSTRAINT `prestamo_ibfk_1` FOREIGN KEY (`ISBN_Libro`) REFERENCES `libro` (`ISBN`),
  ADD CONSTRAINT `prestamo_ibfk_2` FOREIGN KEY (`ID_Miembro`) REFERENCES `miembros` (`ID_Miembro`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
