//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMHPromptedAssessmentsManagerServer_Protocol_h
#define HKMHPromptedAssessmentsManagerServer_Protocol_h
@import Foundation;

@protocol HKMHPromptedAssessmentsManagerServer <NSObject>
/* instance methods */
- (void)remote_getPromptedAssessmentsWithCompletion:(id /* block */)completion;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)completion;
- (void)remote_stopObservingChanges;
@end

#endif /* HKMHPromptedAssessmentsManagerServer_Protocol_h */
