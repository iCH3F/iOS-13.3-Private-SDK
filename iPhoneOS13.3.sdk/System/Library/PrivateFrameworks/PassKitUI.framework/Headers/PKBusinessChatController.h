//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, AKAnisetteProvisioningController;

@interface PKBusinessChatController : NSObject
{
    ACAccountStore *_accountStore;
    AKAnisetteProvisioningController *_provisioningController;
}

// - (void).cxx_destruct;
- (void)_generateAuthBagWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)openBusinessChatWithContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

