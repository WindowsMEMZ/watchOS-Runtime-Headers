//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBundleComplicationMigrationTypeLookup_h
#define NTKBundleComplicationMigrationTypeLookup_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface NTKBundleComplicationMigrationTypeLookup : NSObject<NSSecureCoding>

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSDictionary *dictionary;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* NTKBundleComplicationMigrationTypeLookup_h */
