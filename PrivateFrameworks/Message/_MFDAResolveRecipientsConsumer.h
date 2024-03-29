//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _MFDAResolveRecipientsConsumer_h
#define _MFDAResolveRecipientsConsumer_h
@import Foundation;

#include "DAResolveRecipientsConsumer-Protocol.h"

@class MFConditionLock, NSDictionary, NSError;

@interface _MFDAResolveRecipientsConsumer : NSObject<DAResolveRecipientsConsumer> {
  /* instance variables */
  MFConditionLock *_conditionLock;
  NSDictionary *_resolvedRecipientsByEmailAddress;
}

@property (readonly) NSError *error;

/* instance methods */
- (id)init;
- (id)waitForResolvedRecipients;
- (void)resolvedRecipientsByEmailAddress:(id)address;
- (void)actionFailed:(long long)failed forTask:(id)task error:(id)error;
@end

#endif /* _MFDAResolveRecipientsConsumer_h */
