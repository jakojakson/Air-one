#ifndef CONTROLE_H
#define CONTROLE_H

#include "bibliotecas.h"

  #ifdef __cplusplus
  extern "C"{
  #endif

    #define POSICAO_SUP_LIMITE 1750
    #define POSICAO_INF_LIMITE 1000
    
    typedef void (*tipoFuncao_p)(system_status_t *p_sys_status);

    uint8_t rampa(uint8_t pwm, uint8_t pwm_atual);
    void set_rampa();
    void maqEstados_Control();
    void control_Inspiracao_volume(system_status_t *p_sys_status);
    void control_Inspiracao_pressao(system_status_t *p_sys_status);
    
    void control_Expiracao(system_status_t *p_sys_status);
    
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
