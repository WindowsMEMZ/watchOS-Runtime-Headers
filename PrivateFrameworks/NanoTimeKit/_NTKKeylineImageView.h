//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _NTKKeylineImageView_h
#define _NTKKeylineImageView_h
@import Foundation;

#include ".h"
#include "NTKKeylineTouchable.h"
#include "NTKKeylineView-Protocol.h"

@class NSString, UIColor;

@interface _NTKKeylineImageView : <NTKKeylineView>

@property (copy, nonatomic) id /* block */ colorizationBlock;
@property (retain, nonatomic) NTKKeylineTouchable *touchable;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) BOOL usesLegibility;
@property (retain, nonatomic) UIColor *overrideColor;
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
@end

#endif /* _NTKKeylineImageView_h */
