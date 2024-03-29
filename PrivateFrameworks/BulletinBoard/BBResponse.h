//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 887.3.0.0.0
//
#ifndef BBResponse_h
#define BBResponse_h
@import Foundation;

#include "BBAssertion.h"
#include "NSSecureCoding-Protocol.h"

@class BSServiceConnectionEndpoint, NSArray, NSDictionary, NSString, NSURL;

@interface BBResponse : NSObject<NSSecureCoding> {
  /* instance variables */
  BBAssertion *_lifeAssertion;
  BOOL _sent;
}

@property (copy, nonatomic) NSArray *lifeAssertions;
@property (copy, nonatomic) id /* block */ sendBlock;
@property (copy, nonatomic) NSString *bulletinID;
@property (nonatomic) long long actionType;
@property (nonatomic) unsigned long long actionActivationMode;
@property (nonatomic) long long actionBehavior;
@property (copy, nonatomic) NSString *buttonID;
@property (copy, nonatomic) NSString *actionID;
@property (copy, nonatomic) NSURL *actionLaunchURL;
@property (copy, nonatomic) NSString *originID;
@property (copy, nonatomic) NSString *replyText;
@property (copy, nonatomic) NSDictionary *context;
@property (copy, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (nonatomic) BOOL activated;
@property (nonatomic) BOOL didOpenApplication;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)send;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* BBResponse_h */
