# -*- coding: utf-8 -*-
"""
Created on Sun Jul 10 23:29:51 2022

@author: HP
"""
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time
import webbrowser


web=webdriver.Chrome()
web.get('https://results.kongu.edu/xxisarev/')


time.sleep(2)
reg_no="19ECE011"
first_box=web.find_element_xpath("/html/body/div[1]/form/input[1]")
first_box().send_keys(reg_no)

