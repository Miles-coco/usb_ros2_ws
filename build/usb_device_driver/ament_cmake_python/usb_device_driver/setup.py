from setuptools import find_packages
from setuptools import setup

setup(
    name='usb_device_driver',
    version='0.0.0',
    packages=find_packages(
        include=('usb_device_driver', 'usb_device_driver.*')),
)
