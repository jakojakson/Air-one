#ifndef CONTROLE_H
#define CONTROLE_H

#include "bibliotecas.h"

  #ifdef __cplusplus
  extern "C"{
  #endif
    
    typedef void (*tipoFuncao_p)(system_status *p_sys_status);

    uint8_t rampa(uint8_t pwm, uint8_t pwm_atual);
    void set_rampa();
    void maqEstados_Control();
    void control_Inspiracao(system_status *p_sys_status);
    void control_Expiracao(system_status *p_sys_status);
    
    uint8_t compensador(uint16_t tempo_inspiratorio_IHM,
                        uint16_t tempo_inspiratorio, 
                        uint8_t pwm);
                        
    uint8_t palpite(uint16_t tempo_inspiratorio_IHM, 
                    uint16_t angulo_init, 
                    uint16_t angulo_final);                    
    void control_init();

  #ifdef __cplusplus
  } // extern "C"
  #endif

#endif
