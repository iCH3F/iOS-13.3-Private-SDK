//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSFormAutoFillFeedbackDomainPolicyProvider-Protocol.h>

@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject <WBSFormAutoFillFeedbackDomainPolicyProvider>
{
}

- (id)_correctionsStore;
- (void)autoFillFeedbackProcessor:(id)arg1 determineWhetherToSendFeedbackForDomain:(id)arg2 resultHandler:(id /* CDUnknownBlockType */)arg3;
- (void)getLastPolicyRetrievalURLStringWithResultHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setPoliciesWithJSONData:(id)arg1 retrievalURLString:(id)arg2;

@end

