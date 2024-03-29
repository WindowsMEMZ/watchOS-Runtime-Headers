//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFPeopleSuggesterResult_h
#define SFPeopleSuggesterResult_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface SFPeopleSuggesterResult : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *contactID;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSString *sendersKnownAlias;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFPeopleSuggesterResult_h */
