//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12563.0.0.0.0
//
#ifndef ABSChangeCallbacks_h
#define ABSChangeCallbacks_h
@import Foundation;

#include "ABSAddressBook.h"

@class NSMutableArray;

@interface ABSChangeCallbacks : NSObject {
  /* instance variables */
  ABSAddressBook *_addressBook;
  NSMutableArray *_externalCallbacks;
  NSMutableArray *_externalCallBackThreads;
  NSMutableArray *_externalCallbackContexts;
  long long _initialAccessStatus;
}

/* instance methods */
- (id)initWithAddressBook:(id)book;
- (void)dealloc;
- (void)contactStoreChanged:(id)changed;
- (void)addExternalCallback:(undefined *)callback onThread:(id)thread withContext:(void *)context;
- (BOOL)hasExternalCallback:(undefined *)callback onThread:(id)thread withContext:(void *)context;
- (void)removeExternalCallback:(undefined *)callback withContext:(void *)context;
@end

#endif /* ABSChangeCallbacks_h */
