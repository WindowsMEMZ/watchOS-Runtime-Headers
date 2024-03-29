//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLExtensionPreview_h
#define QLExtensionPreview_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface QLExtensionPreview : NSObject<NSSecureCoding>

@property (copy) NSString *previewDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDescription:(id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* QLExtensionPreview_h */
