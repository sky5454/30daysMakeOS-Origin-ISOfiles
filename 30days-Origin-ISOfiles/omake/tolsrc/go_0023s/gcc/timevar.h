/* !kawai! */

#ifndef GCC_TIMEVAR_H
#define GCC_TIMEVAR_H

struct timevar_time_def {
	int dummy;
};

typedef enum {
  TIMEVAR_LAST
} timevar_id_t;

#define init_timevar()			/* none */
#define timevar_push(timevar)	/* none */
#define timevar_pop(timevar)	/* none */
#define timevar_start(timevar)	/* none */
#define timevar_stop(timevar)	/* none */
#define timevar_get(timevar, elapsed)	/* none */
#define	timevar_print(fp) 		/* none */
#if (!defined(get_run_time))
	#define get_run_time()			0L
#endif
#define	print_time(str, total)	/* none */

#endif
