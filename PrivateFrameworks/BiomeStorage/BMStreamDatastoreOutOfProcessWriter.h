//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMStreamDatastoreOutOfProcessWriter_h
#define BMStreamDatastoreOutOfProcessWriter_h
@import Foundation;

#include "BMStreamDatastoreWriting-Protocol.h"
#include "BMWriteService.h"

@class NSString;

@interface BMStreamDatastoreOutOfProcessWriter : NSObject<BMStreamDatastoreWriting> {
  /* instance variables */
  NSString *_streamIdentifier;
  Class _class;
  unsigned int _user;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BMWriteService *_writeService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStream:(id)stream user:(unsigned int)user;
- (id)initWithStream:(id)stream user:(unsigned int)user eventDataClass:(Class)class;
- (BOOL)writeEventWithEventBody:(id)body timestamp:(double)timestamp outEventSize:(unsigned long long *)size;
- (BOOL)isDataAccessible;
@end

#endif /* BMStreamDatastoreOutOfProcessWriter_h */
