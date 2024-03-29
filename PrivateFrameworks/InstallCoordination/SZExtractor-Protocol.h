//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef SZExtractor_Protocol_h
#define SZExtractor_Protocol_h
@import Foundation;

@protocol SZExtractor <NSObject, NSSecureCoding, STExtractor>

@property (weak, nonatomic) NSObject<SZExtractorDelegate> *extractorDelegate;
@property (readonly, nonatomic) BOOL doesConsumeExtractedData;

/* instance methods */
- (void)prepareForExtraction:(id /* block */)extraction;
- (void)prepareForExtractionToPath:(id)path completionBlock:(id /* block */)block;
- (void)supplyBytes:(id)bytes withCompletionBlock:(id /* block */)block;
- (void)suspendStreamWithCompletionBlock:(id /* block */)block;
- (void)finishStreamWithCompletionBlock:(id /* block */)block;
- (void)terminateStreamWithError:(id)error completionBlock:(id /* block */)block;
@end

#endif /* SZExtractor_Protocol_h */
