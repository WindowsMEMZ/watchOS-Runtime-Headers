//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef _NSAttributes_h
#define _NSAttributes_h
@import Foundation;

@class NSDictionary;

@interface _NSAttributes : NSObject {
  /* instance variables */
  NSDictionary *_attributes;
  struct _NSRange { unsigned long long location; unsigned long long length; } _range;
}

/* instance methods */
- (id)initWithAttributes:(id)attributes range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)dealloc;
- (void)setAttributesInTextStorage:(id)storage;
@end

#endif /* _NSAttributes_h */
