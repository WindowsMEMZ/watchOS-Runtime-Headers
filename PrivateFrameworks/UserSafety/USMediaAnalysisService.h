//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 35.2.1.0.0
//
#ifndef USMediaAnalysisService_h
#define USMediaAnalysisService_h
@import Foundation;

@class BOOL *, MADService;

@interface USMediaAnalysisService : NSObject

@property (retain, nonatomic) MADService *service;

/* instance methods */
- (id)init;
- (id)initWithMADService:(id)madservice;
- (void)dealloc;
- (void)isSensitiveImage:(id)image completionHandler:(id /* block */)handler;
- (void)isSensitiveCGImage:(struct CGImage *)cgimage withOrientation:(unsigned int)orientation completionHandler:(id /* block */)handler;
- (void)isSensitiveVideoFile:(id)file useBlastdoor:(BOOL)blastdoor progressHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (id)_processMADResults:(BOOL *)madresults requestID:(int)id error:(id)error request:(id)request;
- (id)_processMADResults:(BOOL *)madresults requestID:(int)id error:(id)error videoRequest:(id)request;
- (id)_newImageClassificationRequest;
- (id)_newVideoClassificationRequest;
@end

#endif /* USMediaAnalysisService_h */
