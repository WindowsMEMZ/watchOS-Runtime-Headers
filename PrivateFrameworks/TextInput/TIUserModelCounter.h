//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIUserModelCounter_h
#define TIUserModelCounter_h
@import Foundation;

@class NSDate, NSNumber, NSString;

@interface TIUserModelCounter : NSObject {
  /* instance variables */
  unsigned long long _persisted;
  unsigned long long _current;
  BOOL _wasReset;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *count;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastUpdateDate;

/* instance methods */
- (id)initWithName:(id)name;
- (id)initWithName:(id)name initialCount:(id)count creationDate:(id)date lastUpdateDate:(id)date;
- (void)doPersist:(id)persist forDate:(id)date;
- (void)add:(int)add;
- (void)reset;
@end

#endif /* TIUserModelCounter_h */
