//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNAssistedDataDetectorsHandleStringClassificationStrategy_h
#define _CNAssistedDataDetectorsHandleStringClassificationStrategy_h
@import Foundation;

#include "_CNHandleStringClassificationStrategy-Protocol.h"

@class NSString;

@interface _CNAssistedDataDetectorsHandleStringClassificationStrategy : NSObject<_CNHandleStringClassificationStrategy> {
  /* instance variables */
  NSObject<_CNHandleStringClassificationStrategy> *_strategy;
  NSObject<_CNHandleStringClassificationStrategy> *_assistingStrategy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithStrategy:(id)strategy;
- (unsigned long long)classificationOfHandleString:(id)string;
- (void)makeAssistingStrategyIfNecessary;
@end

#endif /* _CNAssistedDataDetectorsHandleStringClassificationStrategy_h */
