		
		
//I		
		int I_signal = 0;
		float k_I = 0.5;
		int total_sum =0;
		
//D		
		int D_signal = 0;
		float k_D = 0.5;
    
    // PID values	
		int PID_signal = 0
		int current_sig;
		int previous_sig;
		int sig_Diff;



// I signal			
			total_sum = total_sum +sum_H
			I_signal = total_sum*k_I;

// D Signal
			sig_Diff = current_sig-previous_sig;
			current_sig = P_signal;
			D_signal = (sig_Diff/error_period)*k_D;
			previous_sig = current_sig;
// PID signal
			PID_signal = P_signal*I_signal*D_signal;
		}
