//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef ENPlainNoteContent_h
#define ENPlainNoteContent_h
@import Foundation;

#include "ENNoteContent.h"

@class NSArray;

@interface ENPlainNoteContent : ENNoteContent

@property (copy, nonatomic) NSArray *contents;

/* instance methods */
- (id)initWithString:(id)string;
- (id)initWithContents:(id)contents;
- (id)enmlWithNote:(id)note;
@end

#endif /* ENPlainNoteContent_h */
