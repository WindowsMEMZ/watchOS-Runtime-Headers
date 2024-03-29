//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 413.1.0.0.0
//
#ifndef TypistKeyboardUtilities_h
#define TypistKeyboardUtilities_h
@import Foundation;

@interface TypistKeyboardUtilities : NSObject
/* class methods */
+ (id)getRegionCodeFromKeyboardID:(id)id;
+ (id)sharedRecapInlinePlayer;
+ (void)tearDownRecapInlinePlayer;
+ (void)setTapTouchRadius:(id)radius;
+ (void)setRecapFastMode:(BOOL)mode;
+ (void)launchRecap:(id)recap;
+ (void)launchRecap:(id)recap completion:(id /* block */)completion;
+ (id)convertRecapCommands:(id)commands;
+ (id)convertRecapCommandsFromListOfActions:(id)actions;
+ (int)touchScanRate;
+ (id)getMobileGestalt:(id)gestalt;
+ (id)getHwRevision;
+ (id)getNandCapacity;
+ (id)getTrainBuildVersion:(id)version;
+ (id)getSameScreenSizeModel;
+ (id)deviceInfo;
+ (BOOL)hasFaceID;
+ (BOOL)hasHomeButton;
+ (BOOL)supportsPencil;
+ (id)getScreenSize;
+ (long long)toUIDeviceOrientation:(long long)orientation;
+ (long long)toUIInterfaceOrientation:(long long)orientation;
+ (id)sharedFBSOrientationObserver;
+ (long long)getUIInterfaceOrientation;
+ (id)getUIDeviceOrientationAsString;
+ (long long)getUIDeviceOrientationFromString:(id)string;
+ (void)setDoNotDisturb:(BOOL)disturb;
+ (void)setAirplaneMode:(BOOL)mode;
+ (struct CGPoint { double x0; double x1; })generateGaussianPoint:(struct CGPoint { double x0; double x1; })point withSeed:(long long)seed andSigma:(double)sigma;
+ (struct CGPoint { double x0; double x1; })generateGaussianPointWithMean:(struct CGPoint { double x0; double x1; })mean andSigma:(double)sigma;
+ (struct CGPoint { double x0; double x1; })generateUniformPointWithMean:(struct CGPoint { double x0; double x1; })mean andRange:(unsigned int)range;
+ (struct CGPoint { double x0; double x1; })generateUniformPointWithMean:(struct CGPoint { double x0; double x1; })mean andBounds:(struct CGVector { double x0; double x1; })bounds;
+ (id)validateProbability:(id)probability;
+ (void)logToSTDERR:(BOOL)stderr;
+ (void)logToFile:(BOOL)file;
+ (void)waitFor:(double)for;
+ (void)runOnMainThread:(id /* block */)thread;
+ (id)canonicalConversion:(id)conversion;
+ (id)timeInStringFromTimeInterval:(double)interval;
+ (void)runCommandLineProcess:(char * *)process;
+ (void)killKbd;
+ (id)generateKeyboardList;
@end

#endif /* TypistKeyboardUtilities_h */
