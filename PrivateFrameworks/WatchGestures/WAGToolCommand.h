//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGToolCommand_h
#define WAGToolCommand_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface WAGToolCommand : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *commandDescription;
@property (readonly, nonatomic) NSArray *commandExamples;
@property (readonly, nonatomic) NSString *commandString;
@property (readonly, nonatomic) NSArray *options;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)runWithCommandString:(id)string parameterMapping:(id)mapping completion:(id /* block */)completion;
- (id)init;
- (BOOL)validateParameterMapping:(id)mapping;
- (void)_sendXPCRequestWithCompletion:(id /* block */)completion;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WAGToolCommand_h */
