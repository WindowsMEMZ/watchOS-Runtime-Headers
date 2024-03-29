//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef MLMediaLibraryServiceClientProtocol_Protocol_h
#define MLMediaLibraryServiceClientProtocol_Protocol_h
@import Foundation;

@protocol MLMediaLibraryServiceClientProtocol <NSObject>
/* instance methods */
- (void)serviceTerminatedTransactionWithIdentifier:(id)identifier error:(id)error;
- (void)importOperationWithIdentifier:(id)identifier didUpdateWithProgress:(float)progress;
@end

#endif /* MLMediaLibraryServiceClientProtocol_Protocol_h */
