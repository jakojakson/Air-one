#ifndef STATUS_H
#define STATUS_H

#ifdef __cplusplus
extern "C"{
#endif

    typedef struct 
    {
        uint16_t c_angulo_final;
        uint16_t c_angulo_inicial;
        uint16_t c_angulo_encoder;

        uint16_t c_tempo_insp_cont;
        uint16_t c_tempo_insp_IHM;

        uint16_t c_tempo_exp_cont;
        uint16_t c_tempo_exp_ocioso;
        uint16_t c_tempo_exp_pause;

        uint8_t  c_pressao_PEEP;
        uint8_t  c_pressao_cont;

        uint8_t  c_direcao; 
        uint8_t  c_deadTime_Motor;
        uint8_t  c_flag_exp_ocioso;

        uint8_t  c_pwm_requerido;
        uint8_t  c_pwm_insp;
        uint8_t  c_pwm_atual;
    } control_t;
	
	typedef struct
	{
		uint8_t   s_respirador;
		control_t s_control;
	} system_status_t;


	system_status_t *get_sys_status();
  control_t *get_control(); void *set_sys_status(uint8_t status);
  void *set_sys_status(uint8_t status);
  void *set_control_angulo(uint16_t angulo);
  void *set_control_PEEP(uint8_t peep);
  void *set_control_tempoInspiratorioIHM(uint16_t tempo_insp);
  void *set_control_tempoExpiratorioIHM(uint8_t proporcao);
  void *set_control_pause(uint16_t delay);

	#ifdef __cplusplus
		} // extern "C"
	#endif

#endif
