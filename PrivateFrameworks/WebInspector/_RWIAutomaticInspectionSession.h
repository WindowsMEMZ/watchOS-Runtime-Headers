//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7617.1.17.12.4
//
#ifndef _RWIAutomaticInspectionSession_h
#define _RWIAutomaticInspectionSession_h
@import Foundation;

@class NSArray, NSNumber, NSString;

@interface _RWIAutomaticInspectionSession : NSObject {
  /* instance variables */
  NSNumber *_pageId;
  NSString *_applicationIdentifier;
  int _applicationPID;
  unsigned long long _currentDebuggerIndex;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *debuggers;

/* instance methods */
- (id)initWithPageId:(id)id applicationIdentifier:(id)identifier applicationPID:(int)pid debuggers:(id)debuggers;
- (void)start;
- (BOOL)receivedRejectResponse;
- (void)_sendQuery;
- (BOOL)matchesPageId:(id)id applicationIdentifier:(id)identifier;
@end

#endif /* _RWIAutomaticInspectionSession_h */
