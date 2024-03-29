//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HDRemoteAuthorizationRequestRecord_h
#define _HDRemoteAuthorizationRequestRecord_h
@import Foundation;

@class NSError, NSMutableArray, NSString;

@interface _HDRemoteAuthorizationRequestRecord : NSObject {
  /* instance variables */
  BOOL _didRecieveShouldPrompt;
  BOOL _shouldPrompt;
  NSString *_bundleID;
  NSString *_hostAppName;
  NSError *_shouldPromptError;
  NSMutableArray *_records;
}

/* instance methods */
@end

#endif /* _HDRemoteAuthorizationRequestRecord_h */
