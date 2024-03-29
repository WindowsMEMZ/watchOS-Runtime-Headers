//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 362.0.0.0.0
//
#ifndef GSAdditionStoring_Protocol_h
#define GSAdditionStoring_Protocol_h
@import Foundation;

@protocol GSAdditionStoring 

@property (retain) NSURL *documentURL;
@property (readonly, nonatomic) NSObject<NSCopying><NSSecureCoding> *persistentIdentifier;

/* instance methods */
- (id)stagingURLforCreatingAdditionWithError:(id *)error;
- (void)cleanupStagingURL:(id)url;
- (id)URLforReplacingItemWithError:(id *)error;
- (id)prepareAdditionCreationWithItemAtURL:(id)url byMoving:(BOOL)moving creationInfo:(id)info error:(id *)error;
- (void)createAdditionStagedAtURL:(id)url creationInfo:(id)info completionHandler:(id /* block */)handler;
- (BOOL)replaceDocumentWithContentsOfAddition:(id)addition preservingCurrentVersionWithCreationInfo:(id)info createdAddition:(id *)addition error:(id *)error;
- (BOOL)replaceDocumentWithContentsOfItemAtURL:(id)url preservingCurrentVersionWithCreationInfo:(id)info createdAddition:(id *)addition error:(id *)error;
- (id)additionWithName:(id)name inNameSpace:(id)space error:(id *)error;
- (id)additionsWithNames:(id)names inNameSpace:(id)space error:(id *)error;
- (id)enumeratorForAdditionsInNameSpace:(id)space withOptions:(unsigned long long)options withoutOptions:(unsigned long long)options ordering:(int)ordering;
- (void)removeAdditions:(id)additions completionHandler:(id /* block */)handler;
- (void)removeAllAdditionsForNamespaces:(id)namespaces completionHandler:(id /* block */)handler;
@end

#endif /* GSAdditionStoring_Protocol_h */
