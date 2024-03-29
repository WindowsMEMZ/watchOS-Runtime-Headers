//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXVNEspressoDetectedObject_h
#define AXVNEspressoDetectedObject_h
@import Foundation;

@interface AXVNEspressoDetectedObject : NSObject

@property long long objectType;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) struct CGPoint { double x0; double x1; } center;
@property float confidence;

/* instance methods */
- (id)initWithObjectType:(long long)type boundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })box confidence:(float)confidence;
@end

#endif /* AXVNEspressoDetectedObject_h */
