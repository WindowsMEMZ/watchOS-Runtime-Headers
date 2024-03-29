//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRXMLProblemReportingContext_h
#define XRXMLProblemReportingContext_h
@import Foundation;

@class NSFileHandle, NSURL;
@protocol OS_os_log;

@interface XRXMLProblemReportingContext : NSObject

@property (retain, nonatomic) NSFileHandle *errorFile;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (copy, nonatomic) NSURL *urlBeingParsed;
@property (nonatomic) BOOL passed;

/* instance methods */
- (id)init;
- (void)reportProblemWithElement:(id)element failure:(id)failure;
- (void)reportWarningWithElement:(id)element failure:(id)failure;
@end

#endif /* XRXMLProblemReportingContext_h */
