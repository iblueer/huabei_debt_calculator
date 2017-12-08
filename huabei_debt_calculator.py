# debt_calculator.c
# Programmed by maemolee 2017.7.10
# The most important thing worthing notice is that the usage of input()
# Version 0.4 Updated H29-09-11

all = 2200.00
print '##############################'
print 'Huabei debt calculator'
print '##############################\n'
payment = input('payment = ')
usable_now = input('usable_now = ')
debt_origin = input('debt_origin = ')

debt_now = all - usable_now
decrease = debt_origin - debt_now
interest = payment - decrease

print
print '##############################'
print 'interest is',interest
print 'decrease is',decrease
print '##############################'
print 'Over.'