//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDemoDataFormula_h
#define HDDemoDataFormula_h
@import Foundation;

@interface HDDemoDataFormula : NSObject
/* class methods */
+ (double)convertDegreeCelsiusToFahrenheit:(double)fahrenheit;
+ (double)convertDegreeFahrenheitToCelsius:(double)celsius;
+ (double)computeBloodAlcoholContentForNumDrinks:(double)drinks elapsedTime:(double)time weight:(double)weight sex:(long long)sex;
+ (double)computeBodyMassIndexFromWeight:(double)weight height:(double)height;
+ (double)computeBodyFatPercentageFromWeight:(double)weight leanBodyMass:(double)mass;
+ (double)computeBasalMetabolicRateFromWeight:(double)weight height:(double)height age:(double)age sex:(long long)sex;
+ (double)computeLeanBodyMassFromWeight:(double)weight height:(double)height sex:(long long)sex waistCircumference:(double)circumference forearmCircumference:(double)circumference wristCircumference:(double)circumference hipCircumference:(double)circumference;
@end

#endif /* HDDemoDataFormula_h */
