//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SILogicalTimestamp_h
#define SILogicalTimestamp_h
@import Foundation;

@class NSUUID, SILogicalTimestampInternal;

@interface SILogicalTimestamp : NSObject {
  /* instance variables */
  SILogicalTimestampInternal *_underlying;
}

@property (readonly, nonatomic) NSUUID *clockIdentifier;
@property (readonly, nonatomic) unsigned long long nanoSecondsSinceBoot;

/* instance methods */
- (id)initWithClockIdentifier:(id)identifier nanosecondsSinceBoot:(unsigned long long)boot;
- (id)initWithInternalType:(id)type;
- (id)underlying;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SILogicalTimestamp_h */
