//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKComplicationTemplateReference_h
#define NTKComplicationTemplateReference_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CLKComplicationTemplate, NSString;

@interface NTKComplicationTemplateReference : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  CLKComplicationTemplate *_cachedTemplate;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) CLKComplicationTemplate *complicationTemplate;
@property (readonly, nonatomic) NSString *path;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPath:(id)path existingTemplate:(id)template;
- (id)_lock_complicationTemplate;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* NTKComplicationTemplateReference_h */
