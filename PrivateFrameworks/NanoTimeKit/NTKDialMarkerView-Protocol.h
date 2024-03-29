//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKDialMarkerView_Protocol_h
#define NTKDialMarkerView_Protocol_h
@import Foundation;

@protocol NTKDialMarkerView <NSObject>

@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (nonatomic) double alpha;

/* instance methods */
- (void)addToParentView:(id)view;
- (void)removeFromParent;
- (void)setAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
@end

#endif /* NTKDialMarkerView_Protocol_h */
