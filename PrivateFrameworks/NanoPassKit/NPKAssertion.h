//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKAssertion_h
#define NPKAssertion_h
@import Foundation;

@class NSString;

@interface NPKAssertion : NSObject

@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL acquired;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long state;

/* instance methods */
- (id)initWithType:(unsigned long long)type reason:(id)reason;
- (BOOL)isAcquired;
- (void)acquireWithCompletion:(id /* block */)completion;
- (void)invalidateWithCompletion:(id /* block */)completion;
- (id)_errorWithUnderlyingError:(id)error;
@end

#endif /* NPKAssertion_h */
