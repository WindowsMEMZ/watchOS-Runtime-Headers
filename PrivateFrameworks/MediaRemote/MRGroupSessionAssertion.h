//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRGroupSessionAssertion_h
#define MRGroupSessionAssertion_h
@import Foundation;

@interface MRGroupSessionAssertion : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _cancelled;
}

@property (copy, nonatomic) id /* block */ handler;

/* instance methods */
- (id)initWithCancellationHandler:(id /* block */)handler;
- (void)dealloc;
- (void)cancel;
@end

#endif /* MRGroupSessionAssertion_h */
