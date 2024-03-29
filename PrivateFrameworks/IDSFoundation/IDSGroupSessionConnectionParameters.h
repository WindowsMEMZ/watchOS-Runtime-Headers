//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSGroupSessionConnectionParameters_h
#define IDSGroupSessionConnectionParameters_h
@import Foundation;

@class NSData, NSString;

@interface IDSGroupSessionConnectionParameters : NSObject

@property (copy, nonatomic) NSString *multiplexer;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long participantID;
@property (copy, nonatomic) NSData *salt;

/* instance methods */
- (id)initWithStringRepresentation:(id)representation;
- (id)stringRepresentation;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToGroupSessionConnectionParameters:(id)parameters;
@end

#endif /* IDSGroupSessionConnectionParameters_h */
