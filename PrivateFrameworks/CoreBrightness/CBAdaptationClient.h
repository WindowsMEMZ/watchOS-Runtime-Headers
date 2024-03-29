//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1603.60.7.0.0
//
#ifndef CBAdaptationClient_h
#define CBAdaptationClient_h
@import Foundation;

@interface CBAdaptationClient : NSObject

@property BOOL supported;

/* class methods */
+ (BOOL)supportsAdaptation;

/* instance methods */
- (id)initWithClientObj:(id)obj;
- (id)init;
- (BOOL)setEnabled:(BOOL)enabled;
- (BOOL)getEnabled;
- (int)getAdaptationMode;
- (BOOL)setWeakestAdaptationModeFromArray:(int *)array withLength:(int)length andPeriod:(float)period;
- (BOOL)setAdaptationMode:(int)mode withPeriod:(float)period;
- (BOOL)overrideStrengths:(float *)strengths forModes:(int *)modes nModes:(int)modes;
- (BOOL)getStrengths:(float *)strengths nStrengths:(int)strengths;
- (BOOL)animateFromWeakestAdaptationModeInArray:(int *)array withLength:(int)length toWeakestInArray:(int *)array withLength:(int)length withProgress:(float)progress andPeriod:(float)period;
@end

#endif /* CBAdaptationClient_h */
