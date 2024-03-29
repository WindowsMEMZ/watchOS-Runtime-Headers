//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNContactBufferDecoder_h
#define CNContactBufferDecoder_h
@import Foundation;

#include "CNContactKeyVector.h"
#include "CNMutableContact.h"

@class NSMutableData;

@interface CNContactBufferDecoder : NSObject {
  /* instance variables */
  long long _state;
  CNMutableContact *_pendingContact;
  NSMutableData *_resumeBuffer;
  long long _bytesNeededToResume;
}

@property (nonatomic) BOOL mutableResults;
@property (copy, nonatomic) CNContactKeyVector *keyDescriptorToMakeAvailable;
@property (readonly) BOOL hasPendingContacts;

/* instance methods */
- (id)initWithKeyDescriptorToMakeAvailable:(id)available mutableResults:(BOOL)results;
- (BOOL)decodeContactsFromBuffer:(id)buffer replyHandler:(id /* block */)handler;
@end

#endif /* CNContactBufferDecoder_h */
