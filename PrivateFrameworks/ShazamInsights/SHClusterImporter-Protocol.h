//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHClusterImporter_Protocol_h
#define SHClusterImporter_Protocol_h
@import Foundation;

@protocol SHClusterImporter <NSObject>
/* instance methods */
- (BOOL)loadDataFromFileInfo:(id)info withMetadata:(id)metadata toDestinationURL:(id)url error:(id *)error;
@end

#endif /* SHClusterImporter_Protocol_h */
