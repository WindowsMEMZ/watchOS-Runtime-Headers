//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.40.6.0.0
//
#ifndef MSCMSAppleHashAgilityAttribute_h
#define MSCMSAppleHashAgilityAttribute_h
@import Foundation;

#include "MSCMSAttributeCoder-Protocol.h"
#include "MSOID.h"

@class NSData;

@interface MSCMSAppleHashAgilityAttribute : NSObject<MSCMSAttributeCoder>

@property (readonly, retain) NSData *hashAgilityValue;
@property (readonly, retain) MSOID *attributeType;

/* instance methods */
- (id)initWithAttribute:(id)attribute error:(id *)error;
- (id)initWithHashAgilityValue:(id)value;
- (id)encodeAttributeWithError:(id *)error;
@end

#endif /* MSCMSAppleHashAgilityAttribute_h */
