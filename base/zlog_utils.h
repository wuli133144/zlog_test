
#ifdef __cplusplus
extern "C" {
#endif

#include <stdarg.h> /* for va_list */
#include <stdio.h> /* for size_t */
#include "zlog.h"

# if defined __GNUC__
#   define ZLOG_CHECK_PRINTF(m,n) __attribute__((format(printf,m,n)))
# else 
#   define ZLOG_CHECK_PRINTF(m,n)
# endif

class Czlog{
  public：

  Czlog(const char *pathname);
  ~Czlog(){}
  static zlog_category_t *getInstance();
  void WARN(const char *fmt,...);
  void INFO(const char *fmt,...);
  void DEBUG(const char *fmt,...);
  void ERROR(const char *fmt,...);
  void FATAL(const char *fmt,...);
private:
    static zlog_category_t *m_log;
private:
    char *m_logfile;
};




#ifdef __cplusplus
 }      
#endif // DEBUG
