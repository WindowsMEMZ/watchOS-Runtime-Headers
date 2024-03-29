//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.4.0.0.0
//
#ifndef DESPluginManaging_Protocol_h
#define DESPluginManaging_Protocol_h
@import Foundation;

@protocol DESPluginManaging <NSObject>

@property (readonly, nonatomic) NSString *bundleIdentifier;

/* instance methods */
- (id)performDodMLTask:(id)mltask outError:(id *)error;
- (void)stopWithCompletion:(id /* block */)completion;
- (id)telemetryWithRecordSet:(id)set;
- (BOOL)shouldDownloadURL:(id)url forTask:(id)task;
@optional
/* instance methods */
- (id)performTrialTask:(id)task outError:(id *)error;
- (id)performTask:(id)task error:(id *)error;
@end

#endif /* DESPluginManaging_Protocol_h */
