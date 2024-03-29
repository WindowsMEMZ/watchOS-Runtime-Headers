//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 614.60.3.0.0
//
#ifndef OSALogWriteResult_h
#define OSALogWriteResult_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "OSALogIdentity.h"

@class NSError, NSString;

@interface OSALogWriteResult : NSObject<NSSecureCoding>

@property (readonly, nonatomic) OSALogIdentity *identity;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) NSError *error;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentity:(id)identity filePath:(id)path;
- (id)initWithIdentity:(id)identity error:(id)error;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* OSALogWriteResult_h */
