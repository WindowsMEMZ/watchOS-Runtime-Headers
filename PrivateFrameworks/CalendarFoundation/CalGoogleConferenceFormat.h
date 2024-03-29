//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalGoogleConferenceFormat_h
#define CalGoogleConferenceFormat_h
@import Foundation;

#include "CalConferencePersistenceFormat-Protocol.h"

@interface CalGoogleConferenceFormat : NSObject<CalConferencePersistenceFormat>
/* class methods */
+ (id)_delimiterRegex;
+ (id)calConferenceSerializationHandle;

/* instance methods */
- (id)deserializeConferences:(id)conferences;
- (id)serializeConference:(id)conference serializationBlockTitle:(id)title;
- (BOOL)supportsSerializingConferenceWithSource:(unsigned long long)source;
@end

#endif /* CalGoogleConferenceFormat_h */
