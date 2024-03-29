//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECMessageBodyStringAccumulator_h
#define ECMessageBodyStringAccumulator_h
@import Foundation;

#include "ECMessageBodyStringAccumulator-Protocol.h"

@class NSMutableString, NSString;

@interface ECMessageBodyStringAccumulator : NSObject<ECMessageBodyStringAccumulator> {
  /* instance variables */
  unsigned long long _remainingLength;
  unsigned long long _options;
  unsigned long long _lastEntity;
  unsigned long long _beforeLastEntity;
  unsigned long long _lastCustomEntityTag;
}

@property (readonly, nonatomic) BOOL isFull;
@property (readonly, nonatomic) NSString *accumulatedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOptions:(unsigned long long)options lengthLimit:(unsigned long long)limit;
- (void)appendNewline;
- (void)appendString:(id)string;
- (void)appendRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range ofString:(id)string;
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned long long)length;
- (void)appendCustomEntityWithTag:(unsigned long long)tag stringRepresentation:(id)representation;
- (void)appendInnerTextWithConsumableNode:(id)node;
@end

#endif /* ECMessageBodyStringAccumulator_h */
