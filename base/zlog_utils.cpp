

#include "zlog_utils.h"

Czlog::Czlog(const char *strpath){
    
    m_logfile=new char[100]; 
    memset(m_logfile,0,strlen(m_logfile));
    memcpy(m_logfile,strpath);

}
~Czlog::Czlog(){
    if(m_logfile!=NULL){
        delete m_logfile;
    }
}

zlog_category_t Czlog::getInstance(){
         if(m_log==NULL){
             m_log=zlog_init(m_logfile);
         }
         return m_log  ;
}

void Czlog::WARN(const char *fmt,...){
            zlog_warn(fmt,...);
        }
void Czlog::INFO(const char *fmt,...){
            zlog_warn(fmt,...);
        }
void Czlog::ERROR(const char *fmt,...){
            zlog_warn(fmt,...);
        }
void Czlog::FATAL(const char *fmt,...){
            zlog_warn(fmt,...);
        }
void Czlog::DEBUG(const char *fmt ,...){
    zlog_debug(fmt,...);
}

        