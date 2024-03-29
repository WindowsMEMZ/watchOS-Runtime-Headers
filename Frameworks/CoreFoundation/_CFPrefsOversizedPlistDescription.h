//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _CFPrefsOversizedPlistDescription_h
#define _CFPrefsOversizedPlistDescription_h
@import Foundation;

@interface _CFPrefsOversizedPlistDescription : NSObject {
  /* instance variables */
  struct __CFDictionary * existingValues;
  struct __CFDictionary * newValues;
}

/* instance methods */
- (id)_descriptionOfDictionary:(struct __CFDictionary *)dictionary withKeyRedaction:(BOOL)redaction;
- (id)_descriptionWithKeyRedaction:(BOOL)redaction;
- (id)redactedDescription;
- (id)description;
- (void)dealloc;
@end

#endif /* _CFPrefsOversizedPlistDescription_h */
