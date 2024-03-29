//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCGestureEvent_h
#define SCRCGestureEvent_h
@import Foundation;

@interface SCRCGestureEvent : NSObject {
  /* instance variables */
  unsigned long long _deviceIdentifier;
  SCRCGestureFinger * _finger[8];
  unsigned long long _fingerCount;
  struct CGPoint { double x; double y; } _averageLocation;
}

@property (nonatomic) double time;

/* instance methods */
- (id)initWithDeviceIdentifier:(unsigned long long)identifier;
- (void)dealloc;
- (id)description;
- (unsigned long long)deviceIdentifier;
- (void)addFingerWithIdentifier:(unsigned long long)identifier location:(struct CGPoint { double x0; double x1; })location pressure:(double)pressure;
- (void)addStylusWithIdentifier:(unsigned long long)identifier location:(struct CGPoint { double x0; double x1; })location pressure:(double)pressure altitude:(double)altitude azimuth:(double)azimuth;
- (void)removeFingerWithIdentifier:(unsigned long long)identifier;
- (unsigned long long)fingerCount;
- (id)fingerAtIndex:(unsigned long long)index;
- (id)fingerWithIdentifier:(unsigned long long)identifier;
- (id)fingerWithoutIdentifier:(unsigned long long)identifier;
- (id)fingers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fingerFrame;
- (struct CGPoint { double x0; double x1; })averageLocation;
- (struct CGPoint { double x0; double x1; })balancedLocation;
- (BOOL)isCancelEvent;
- (struct CGPoint { double x0; double x1; })magneticLocation;
@end

#endif /* SCRCGestureEvent_h */
