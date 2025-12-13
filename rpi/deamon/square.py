import board
import busio
from adafruit_pca9685 import PCA9685
from threading import Thread, Event
from gpiozero import Button
from time import sleep

def initialize_pwm():
    # create the i2c bus interface
    i2c = busio.I2C(board.SCL, board.SDA)

    # create a pca9685 object for each board and set 1KHz frequency
    pwm0 = PCA9685(i2c, address=0x40)
    pwm0.frequency = 1000

    pwm1 = PCA9685(i2c, address=0x41)
    pwm1.frequency = 1000

    pwm2 = PCA9685(i2c, address=0x42)
    pwm2.frequency = 1000

    pwm3 = PCA9685(i2c, address=0x43)
    pwm3.frequency = 1000

    # combine pca9685 objects into a list and return it
    pwm = [pwm0, pwm1, pwm2, pwm3]

    return pwm

def main():
    # initialize pwm list
    pwm = initialize_pwm()




if __name__ == "__main__":
    main()
