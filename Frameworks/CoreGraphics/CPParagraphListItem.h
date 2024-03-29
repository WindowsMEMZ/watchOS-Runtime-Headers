//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1774.2.3.0.0
//
#ifndef CPParagraphListItem_h
#define CPParagraphListItem_h
@import Foundation;

#include "CPDisposable-Protocol.h"
#include "CPList.h"

@interface CPParagraphListItem : NSObject<CPDisposable> {
  /* instance variables */
  struct __CFArray * paragraphs;
}

@property (retain, nonatomic) CPList *list;
@property (nonatomic) int number;

/* instance methods */
- (id)init;
- (void)dispose;
- (void)finalize;
- (void)dealloc;
- (unsigned int)paragraphCount;
- (id)paragraphAtIndex:(unsigned int)index;
- (void)addParagraph:(id)paragraph;
@end

#endif /* CPParagraphListItem_h */
