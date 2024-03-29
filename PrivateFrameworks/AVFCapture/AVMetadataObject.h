//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef AVMetadataObject_h
#define AVMetadataObject_h
@import Foundation;

#include "AVMetadataObjectInternal.h"

@class NSString;

@interface AVMetadataObject : NSObject {
  /* instance variables */
  AVMetadataObjectInternal *_objectInternal;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) NSString *type;

/* class methods */
+ (id)derivedMetadataObjectFromMetadataObject:(id)object withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform isVideoMirrored:(BOOL)mirrored rollAdjustment:(double)adjustment;

/* instance methods */
- (id)init;
- (id)initWithType:(id)type time:(struct { long long x0; int x1; unsigned int x2; long long x3; })time duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds optionalInfoDict:(id)dict originalMetadataObject:(id)object;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)object withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform isVideoMirrored:(BOOL)mirrored rollAdjustment:(double)adjustment;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (long long)groupID;
- (unsigned long long)syntheticFocusMode;
- (id)originalMetadataObject;
- (long long)detectionSource;
- (void)setDetectionSource:(long long)source;
@end

#endif /* AVMetadataObject_h */
