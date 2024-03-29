//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSWidgetRenderScheme_h
#define CHSWidgetRenderScheme_h
@import Foundation;

#include "BSXPCSecureCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface CHSWidgetRenderScheme : NSObject<BSXPCSecureCoding, NSSecureCoding, NSCopying, NSMutableCopying> {
  /* instance variables */
  unsigned long long _renderingModes;
}

@property (readonly, nonatomic) BOOL valid;
@property (readonly, nonatomic) unsigned long long renderingMode;
@property (readonly, nonatomic) unsigned long long backgroundViewPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithRenderingMode:(unsigned long long)mode;
- (id)initWithRenderingMode:(unsigned long long)mode backgroundViewPolicy:(unsigned long long)policy;
- (id)initWithRenderingModes:(unsigned long long)modes;
- (id)initWithRenderingModes:(unsigned long long)modes backgroundViewPolicy:(unsigned long long)policy;
- (unsigned long long)renderingModes;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isValid;
- (id)_compatibilityRenderSchemesFromDeprecatedRenderingModes;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithRenderingModes:(unsigned long long)modes opaque:(BOOL)opaque;
- (BOOL)isOpaque;
@end

#endif /* CHSWidgetRenderScheme_h */
