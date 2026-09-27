#include <stdio.h>
int main() 
{
    int sec_status = 0; 
    int msk_door   = 1 << 0;  
    int msk_alarm  = 1 << 1;  
    int msk_cctv   = 1 << 2;  
    int msk_motion = 1 << 3;  
    int mode_opt;
    int oper_opt;
    int dev_opt;

    printf("Select Security Mode (1. Home, 2. Away, 3. Night): ");
    scanf("%d", &mode_opt);

    switch(mode_opt)
    {
        case 1: sec_status = msk_door | msk_cctv; break;
        case 2: sec_status = msk_door | msk_alarm | msk_cctv | msk_motion; break;
        case 3: sec_status = msk_door | msk_alarm | msk_motion; break;
        default: printf("Invalid Mode.\n"); return 1;
    }

    printf("Select Operation (1. Active, 2. Deactive, 3. Check, 4. Toggle): ");
    scanf("%d", &oper_opt);
    printf("Select Device (1. Door, 2. Alarm, 3. CCTV, 4. Motion): ");
    scanf("%d", &dev_opt);

    switch(oper_opt)
    {
        case 1: 
            switch(dev_opt)
            {
                case 1: sec_status |= msk_door; break;
                case 2: sec_status |= msk_alarm; break;
                case 3: sec_status |= msk_cctv; break;
                case 4: sec_status |= msk_motion; break;
                default: return 1;
            }
            break;

        case 2: 
            switch(dev_opt)
            {
                case 1: sec_status &= (~msk_door); break;
                case 2: sec_status &= (~msk_alarm); break;
                case 3: sec_status &= (~msk_cctv); break;
                case 4: sec_status &= (~msk_motion); break;
                default: return 1;
            }
            break;

        case 3: 
            switch(dev_opt)
            {
                case 1: printf("Door: %s\n", (sec_status & msk_door) ? "On" : "Off"); break;
                case 2: printf("Alarm: %s\n", (sec_status & msk_alarm) ? "On" : "Off"); break;
                case 3: printf("CCTV: %s\n", (sec_status & msk_cctv) ? "On" : "Off"); break;
                case 4: printf("Motion: %s\n", (sec_status & msk_motion) ? "On" : "Off"); break;
                default: return 1;
            }
            break;

        case 4: 
            switch(dev_opt)
            {
                case 1: sec_status ^= msk_door; break;
                case 2: sec_status ^= msk_alarm; break;
                case 3: sec_status ^= msk_cctv; break;
                case 4: sec_status ^= msk_motion; break;
                default: return 1;
            }
            break;

        default:
            printf("Invalid Operation.\n");
            break;
    }
    int b_door   = (sec_status & msk_door) ? 1 : 0;
    int b_alarm  = (sec_status & msk_alarm) ? 1 : 0;
    int b_cctv   = (sec_status & msk_cctv) ? 1 : 0;
    int b_motion = (sec_status & msk_motion) ? 1 : 0;
    int armed    = (b_door && b_alarm && b_cctv && b_motion);

    printf("\n--- FINAL REPORT ---\n");
    printf("State Bits: [M:%d] [C:%d] [A:%d] [D:%d]\n", b_motion, b_cctv, b_alarm, b_door);
    printf("System Status: %s\n", armed ? "FULLY ARMED" : "PARTIAL");

    return 0;
}