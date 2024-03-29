//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBAny_h
#define TRIPBAny_h
@import Foundation;

#include "TRIPBMessage.h"

@class NSData, NSString;

@interface TRIPBAny : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *typeURL;
@property (copy, @dynamic, nonatomic) NSData *value;

/* class methods */
+ (id)anyWithMessage:(id)message error:(id *)error;
+ (id)anyWithMessage:(id)message typeURLPrefix:(id)urlprefix error:(id *)error;
+ (id)descriptor;

/* instance methods */
- (id)initWithMessage:(id)message error:(id *)error;
- (id)initWithMessage:(id)message typeURLPrefix:(id)urlprefix error:(id *)error;
- (BOOL)packWithMessage:(id)message error:(id *)error;
- (BOOL)packWithMessage:(id)message typeURLPrefix:(id)urlprefix error:(id *)error;
- (id)unpackMessageClass:(Class)class error:(id *)error;
@end

#endif /* TRIPBAny_h */
