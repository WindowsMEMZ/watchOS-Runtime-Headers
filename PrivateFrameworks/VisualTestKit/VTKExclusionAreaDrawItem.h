//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.0.0.0.0
//
#ifndef VTKExclusionAreaDrawItem_h
#define VTKExclusionAreaDrawItem_h
@import Foundation;

#include "VTKDrawItem-Protocol.h"

@class NSString;

@interface VTKExclusionAreaDrawItem : NSObject<VTKDrawItem>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWitFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)drawAtContext:(id)context;
@end

#endif /* VTKExclusionAreaDrawItem_h */
