//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSFrameSpecifiersRequest_h
#define BLSFrameSpecifiersRequest_h
@import Foundation;

@class NSDate, NSDateInterval;

@interface BLSFrameSpecifiersRequest : NSObject {
  /* instance variables */
  id /* block */ _completion;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _lock_completed;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSDate *previousPresentationDate;
@property (readonly, nonatomic) BOOL shouldReset;

/* instance methods */
- (id)initWithDateInterval:(id)interval previousPresentationDate:(id)date shouldReset:(BOOL)reset completion:(id /* block */)completion;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)completeWithDateSpecifiers:(id)specifiers;
@end

#endif /* BLSFrameSpecifiersRequest_h */
