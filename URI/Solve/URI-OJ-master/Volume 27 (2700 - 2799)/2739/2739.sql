SELECT loan.name, CAST(DATE_PART('day', loan.payday) AS integer) FROM loan