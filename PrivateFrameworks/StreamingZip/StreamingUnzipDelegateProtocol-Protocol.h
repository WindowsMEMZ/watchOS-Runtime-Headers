//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 206.40.2.0.0
//
#ifndef StreamingUnzipDelegateProtocol_Protocol_h
#define StreamingUnzipDelegateProtocol_Protocol_h
@import Foundation;

@protocol StreamingUnzipDelegateProtocol 
/* instance methods */
- (void)setExtractionProgress:(double)progress;
- (void)extractionCompleteAtArchivePath:(id)path;
- (void)extractionEnteredPassThroughMode;
@end

#endif /* StreamingUnzipDelegateProtocol_Protocol_h */
