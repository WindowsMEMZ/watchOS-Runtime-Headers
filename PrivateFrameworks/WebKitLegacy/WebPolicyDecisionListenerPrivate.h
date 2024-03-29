//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebPolicyDecisionListenerPrivate_h
#define WebPolicyDecisionListenerPrivate_h
@import Foundation;

@protocol {RetainPtr<id>="m_ptr"^v};

@interface WebPolicyDecisionListenerPrivate : NSObject {
  /* instance variables */
  struct RetainPtr<id> { void *m_ptr; } target;
  SEL action;
}

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action;
@end

#endif /* WebPolicyDecisionListenerPrivate_h */
