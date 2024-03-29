//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIHighlightingEffectMaskContentViewConfiguration_h
#define WAGUIHighlightingEffectMaskContentViewConfiguration_h
@import Foundation;

#include "BSXPCSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface WAGUIHighlightingEffectMaskContentViewConfiguration : NSObject<BSXPCSecureCoding>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long sourceLayerRenderId;
@property (readonly, nonatomic) unsigned int sourceContextId;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceLayerBounds;
@property (readonly, nonatomic) NSArray *shapes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)portalWithSourceView:(id)view;
+ (id)maskUsingShapes:(id)shapes forSourceView:(id)view;
+ (id)noMask;
+ (id)defaultConfigurationForSourceView:(id)view;
+ (id)_createMaskingShapesForView:(id)view rootView:(id)view;

/* instance methods */
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
@end

#endif /* WAGUIHighlightingEffectMaskContentViewConfiguration_h */
