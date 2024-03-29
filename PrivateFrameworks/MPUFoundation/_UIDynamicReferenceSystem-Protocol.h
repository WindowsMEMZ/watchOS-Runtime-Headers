//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.200.1.0.0
//
#ifndef _UIDynamicReferenceSystem_Protocol_h
#define _UIDynamicReferenceSystem_Protocol_h
@import Foundation;

@protocol _UIDynamicReferenceSystem <NSObject>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

@optional
/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dynamicReferenceBounds;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })point toView:(id)view;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })point fromView:(id)view;
@end

#endif /* _UIDynamicReferenceSystem_Protocol_h */
