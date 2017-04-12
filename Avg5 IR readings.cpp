int main(){
init();
    int average = 0;
    int count = 0;
    int adc_reading = 0;
        while (count<=5){
            adc_reading = read_analog(0);
            sleep1(1,0);
            average=average+adc_reading;
            count=count+1;
            }
    average=average/count;
    printf("Average= %d\n",average);
return 0;
}
