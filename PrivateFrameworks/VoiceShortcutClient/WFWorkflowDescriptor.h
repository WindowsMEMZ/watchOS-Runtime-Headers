//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWorkflowDescriptor_h
#define WFWorkflowDescriptor_h
@import Foundation;

#include "WFDatabaseObjectDescriptor.h"
#include "WFGlyphDrawableItem-Protocol.h"

@class NSString;

@interface WFWorkflowDescriptor : WFDatabaseObjectDescriptor<WFGlyphDrawableItem>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long color;
@property (readonly, nonatomic) unsigned short glyphCharacter;
@property (readonly, nonatomic) struct CGImage * iconImage;
@property (readonly, nonatomic) double iconImageScale;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier name:(id)name color:(long long)color glyphCharacter:(unsigned short)character associatedAppBundleIdentifier:(id)identifier;
- (id)externalURLForViewing;
- (BOOL)isEqual:(id)equal;
- (void)dealloc;
- (void)setIconImage:(struct CGImage *)image scale:(double)scale;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFWorkflowDescriptor_h */
