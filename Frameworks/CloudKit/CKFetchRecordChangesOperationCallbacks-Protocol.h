//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKFetchRecordChangesOperationCallbacks_Protocol_h
#define CKFetchRecordChangesOperationCallbacks_Protocol_h
@import Foundation;

@protocol CKFetchRecordChangesOperationCallbacks <CKOperationCallbacks>
/* instance methods */
- (void)handleChangeForRecordID:(id)id record:(id)record error:(id)error;
- (void)handleDeleteForRecordID:(id)id;
- (void)handleChangeSetCompletionWithServerChangeToken:(id)token clientChangeTokenData:(id)data recordChangesStatus:(long long)status reply:(id /* block */)reply;
- (void)handleOperationDidCompleteWithServerChangeToken:(id)token clientChangeTokenData:(id)data recordChangesStatus:(long long)status metrics:(id)metrics error:(id)error;
@end

#endif /* CKFetchRecordChangesOperationCallbacks_Protocol_h */
