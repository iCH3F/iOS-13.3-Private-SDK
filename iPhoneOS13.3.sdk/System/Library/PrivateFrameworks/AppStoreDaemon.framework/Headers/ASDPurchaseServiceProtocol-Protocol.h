//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ASDPurchase, NSArray, NSNumber;

@protocol ASDPurchaseServiceProtocol
- (void)notifyDialogCompleteForPurchaseID:(NSNumber *)arg1 result:(BOOL)arg2 selectedButton:(long long)arg3 withResultHandler:(void (^)(BOOL, NSError *))arg4;
- (void)notifyAutenticationDialogCompleteForPurchaseID:(NSNumber *)arg1 result:(long long)arg2 checkboxChecked:(BOOL)arg3 withResultHandler:(void (^)(BOOL, NSError *))arg4;
- (void)startPurchase:(ASDPurchase *)arg1 withReplyHandler:(void (^)(ASDPurchaseResult *, NSError *))arg2;
- (void)processPurchase:(ASDPurchase *)arg1 withReplyHandler:(void (^)(ASDPurchaseResponse *, NSError *))arg2;
- (void)checkStoreQueue:(long long)arg1;
- (void)adoptableBundleIdentifiersWithReplyHandler:(void (^)(NSArray *))arg1;
- (void)adopt:(NSArray *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
@end

