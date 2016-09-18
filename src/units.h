#ifndef UNITS_H
#define UNITS_H

enum Units {
	Metric,
	Imperial
};

#define M2KM    0.001000000000  // m -> km
#define M2MI    0.000621371192  // m -> mi
#define M2FT    3.280839900000  // m -> ft
#define MS2KMH  3.600000000000  // m/s -> km/h
#define MS2MIH  2.236936290000  // m/s -> mi/h
#define FT2MI   0.000189393939  // ft -> mi
#define MM2IN   0.039370100000  // mm -> in
#define H2S     0.000277777778  // h -> s
#define MIN2S   0.016666666667  // min -> s

#define KMINM   1000     // 1 km in m
#define MIINFT  5280     // 1 mi in ft
#define MIINM   1609.344 // 1 mi in m
#define MININS  60       // 1 min in s
#define HINS    3600     // 1 hins

#define C2FS    1.8 // Celsius to Farenheit - scale
#define C2FO    32  // Celsius to Farenheit - offset

#ifdef Q_OS_WIN32
#define UNIT_SPACE     QString(" ")
#else // Q_OS_WIN32
#define UNIT_SPACE     QString::fromUtf8("\xE2\x80\x89")
#endif // Q_OS_WIN32

#endif // UNITS_H
